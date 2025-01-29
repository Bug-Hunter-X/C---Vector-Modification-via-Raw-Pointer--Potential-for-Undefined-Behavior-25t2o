#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  // Safer approach using iterators:
  for (int& val : vec) {
    val *= 2; 
  }

  // Alternative safer approach using indexing:
  //for (size_t i = 0; i < vec.size(); ++i) {
  //  vec[i] *= 2;
  //} 

  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  return 0;
} 