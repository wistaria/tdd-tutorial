#include <iostream>
#include <string>
#include "fibonacci.hpp"

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Error: " << argv[0] << " N" << std::endl;
    return 1;
  }
  std::cout << fibonacci(std::atoi(argv[1])) << std::endl;
  return 0;
}
