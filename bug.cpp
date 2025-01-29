std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

int* ptr = &vec[0];
for (int i = 0; i < 10; ++i) { 
  *(ptr + i) = i * 2;  //modifying vector content using pointer
}

for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}