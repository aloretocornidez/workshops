#include <iostream>
// #include <opencv2/opencv.hpp> // include this file to include all of opencv
#include "opencv2/highgui.hpp" // include this file for a minimum setup

int main(int argc, char *argv[])
{

  std::string imageName;

  if (argc > 1)
  {
    imageName = argv[1];
  }
  else
  {
    imageName = "/home/alan-manuel/Pictures/IMG_2969.jpg";
    std::cout << "No image path specified, using: " << imageName << std::endl;
  };

  cv::Mat image = cv::imread(imageName);

  if (!image.data)
  {
    printf("No image data \n");
    return -1;
  }
  cv::namedWindow("Display Image", cv::WINDOW_NORMAL);
  cv::imshow("Display Image", image);

  cv::waitKey(0);

  return 0;
}
