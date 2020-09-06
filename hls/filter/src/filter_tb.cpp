#include <hls_opencv.h>
#include "filter.h"
#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
	IplImage* src;
	IplImage* dst;
	hls::stream<ap_axiu<32,1,1,1>> src_axi, dst_axi;

	src = cvLoadImage("test.bmp");
	dst = cvCreateImage(cvGetSize(src), src->depth, src->nChannels);
	IplImage2AXIvideo(src, src_axi);

	filter(src_axi, dst_axi, src->height, src->width);

	AXIvideo2IplImage(dst_axi, dst);

	cvSaveImage("op.bmp", dst);
	cvReleaseImage(&src);
	cvReleaseImage(&dst);
}
