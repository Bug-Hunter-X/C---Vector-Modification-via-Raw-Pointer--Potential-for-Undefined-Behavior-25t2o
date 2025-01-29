# C++ Vector Modification via Raw Pointer: Potential for Undefined Behavior

This repository demonstrates a common, yet subtle, error in C++ when modifying `std::vector` elements using raw pointers.  The code shows how accessing a vector's internal array via a raw pointer can lead to undefined behavior if the vector's capacity changes after obtaining the pointer.

**Bug:** The provided `bug.cpp` code modifies a `std::vector` using a raw pointer. While seemingly correct, this approach is dangerous because changes to the vector's size or capacity (e.g., through `push_back` or `resize`) can invalidate the raw pointer, resulting in memory corruption or crashes.

**Solution:** The `bugSolution.cpp` file presents safer alternatives for modifying vector elements, including using iterators or accessing elements directly via the `[]` operator. These methods are safer and prevent unexpected behaviors due to the dynamic nature of `std::vector`.

**How to run:**
1. Clone this repo.
2. Compile the code using a C++ compiler (e.g., g++): `g++ bug.cpp -o bug` and `g++ bugSolution.cpp -o bugSolution`
3. Run the executables: `./bug` and `./bugSolution`

Observe the differences in output between `bug` and `bugSolution`. The first one may crash or produce unpredictable results, while the second one produces the expected output.