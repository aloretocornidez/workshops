#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{

  // Print out hello world.
  // std::cout << "Hello World" << std::endl;

  cv::Mat image = cv::imread(argv[1]);

  if (!image.data)
  {
    printf("No image data \n");
    return -1;
  }
  cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
  cv::imshow("Display Image", image);

  cv::waitKey(0);

  return 0;
}
