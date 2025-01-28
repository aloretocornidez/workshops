#include <iostream>

int main(int argc, char *argv[]) {

  // Print out hello world.
  std::cout << "Hello World" << std::endl;

  cv::Mat image = cv::imread("path/to/image.jpg");

  return 0;
}
