# cppcheck - Static Code Analysis

## What is cppcheck?
cppcheck is a static code analysis tool for C/C++. It analyzes source code 
without compiling it and catches bugs like memory leaks, null pointer 
dereferences, and uninitialized variables before runtime.

## Installation
cppcheck was already installed. Verified using:
```bash
cppcheck --version
# Output: Cppcheck 2.16.0
```

## How to Run
```bash
# Run on specific files
cppcheck --enable=all --suppress=missingIncludeSystem calculator.cpp calculator.h

# Run on entire source folder
cppcheck --enable=all --suppress=missingIncludeSystem .
```

## Flags Explained
| Flag | Purpose |
|---|---|
| `--enable=all` | Enables all checks (error, warning, style, performance) |
| `--suppress=missingIncludeSystem` | Hides noise from standard library headers |

## Warning Severity Levels
| Level | Meaning |
|---|---|
| `error` | Serious bug -> fix immediately (e.g. memory leak) |
| `warning` | Potential bug -> should be fixed |
| `style` | Code quality issue -> good to fix |
| `information` | General info -> usually ignorable |

## Example — Memory Leak Detection
Added intentional bug to calculator.cpp:
```cpp
int add(int a, int b) {
    int* ptr = new int(10);  // memory leak — never deleted!
    return a + b;
}
```

cppcheck caught it immediately:

- calculator.cpp:6:5: error: Memory leak: ptr [memleak]
- calculator.cpp:5:14: style: Variable 'ptr' is assigned a value that is never used.
- calculator.cpp:5:10: style: Variable 'ptr' is allocated memory that is never used.

## Fix
Reverted to clean code - cppcheck output showed zero warnings.

## Key Lessons Learned
- Always point cppcheck at YOUR source files only, not the build folder
- Third-party libraries (like GTest) produce noise -> exclude them
- Fix `error` severity first, then `warning`, then `style`
- Delete temporary files like `tempCodeRunnerFile.cpp` before running
- Run cppcheck regularly, not just once at the end
