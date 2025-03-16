# Mini RTOS

A lightweight, multithreaded task scheduler for real-time applications, implemented in C++.

## Features
- **Task Scheduling**: Supports multiple tasks with different priorities.
- **Multithreading**: Uses C++ threads for task execution.
- **Simple API**: Easy-to-use interfaces for adding and running tasks.
- **Cross-Platform**: Runs on Linux (WSL2), and can be extended for embedded systems.

## Getting Started
### Prerequisites
- **Ubuntu 22.04** (or WSL2)
- **C++17** or later
- **CMake** (>= 3.10)
- **Make**
- **Jenkins (optional, for CI/CD)**

### Installation
```sh
# Clone the repository
git clone https://github.com/YOUR_USERNAME/Mini-RTOS.git
cd Mini-RTOS

# Create build directory
mkdir build && cd build

# Run CMake & Build
cmake ..
make -j$(nproc)
