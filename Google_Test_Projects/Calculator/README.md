# Unit Testing with Google Test (GTest)

This project demonstrates a basic implementation of a Calculator library in C++ using **Google Test** for unit testing. It focuses on setting up a modern testing environment using **CMake** and ensuring code reliability through automated test cases.

## 📁 Project Structure
- `calculator.h`: Header file containing function declarations.
- `calculator.cpp`: Implementation of arithmetic logic.
- `test_calculator.cpp`: Unit tests using the GTest framework.
- `CMakeLists.txt`: Build configuration that automatically fetches the GTest library.

## 🚀 Features
- **Addition:** Verifies that two numbers are summed correctly.
- **Subtraction:** Ensures the difference between two numbers is accurate.
- **Automated Testing:** Uses `EXPECT_EQ` macros to validate outcomes.

## 🛠️ How to Build and Run
1. **Create a build directory:**
   ```bash
   mkdir build
   cd build
2. **Configure with CMake:**
   ```bash
   cmake ..
3. **Build the project:**
   ```bash
   cmake --build .
4. **Run the tests:**
   ```bash
   ./run_tests.exe
