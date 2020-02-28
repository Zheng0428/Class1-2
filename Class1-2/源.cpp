#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cv::Mat srcMat = imread("D:\\a.jpg",0);
	imshow("zty", srcMat);
	waitKey(0);
	return 0;

}