#include <hls_video.h>
//#include  "hls_video.h"
#include <ap_fixed.h>

#define MAX_HEIGHT 1080
#define MAX_WIDTH 1920



//typedef hls::stream<ap_axiu<32,1,1,1>> 		AXI_STREAM;
//typedef hls::Mat<MAX_HEIGHT,   MAX_WIDTH,   HLS_10UC3> RGB_IMAGE;
//typedef hls::Mat<MAX_HEIGHT,   MAX_WIDTH,   HLS_10UC1> GRAY_IMAGE;

void filter(hls::stream<ap_axiu<32,1,1,1> > &src_axi,
		hls::stream<ap_axiu<32,1,1,1> > &dst_axi,
		int rows, int cols);

//void image_filter(AXI_STREAM& INPUT_STREAM, AXI_STREAM& OUTPUT_STREAM);//int rows, int cols);
