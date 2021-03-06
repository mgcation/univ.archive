#pragma once
#include "opencv2\opencv.hpp"
using namespace cv;

namespace utility
{
	uchar & ucharAt(Mat image, int y, int x);
	Vec3b & vec3bAt(Mat image, int y, int x);
	void swapVec3b(Mat source, int y1, int x1, Mat dest, int y2, int x2);
	char my_imread(Mat& img, const char* filename, int IMREAD_FLAGS=1);
	bool checkEsc();
	bool checkEnter();
	void showVideo(const char* filename);
	Mat getKernel(vector<vector<float>> kernelVector);
	uchar calc_MSE(Mat target1, Mat target2, bool print = true, const char* msg = "");
	//! transparent is not implemented
	void add_image_to_background(Mat background, Mat image, int posX, int posY);
	string type2str(int type);
	Mat ifnot_2gray(Mat source);
};

