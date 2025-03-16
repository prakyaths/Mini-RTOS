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

### Installation
```sh
# Clone the repository
git clone https://github.com/prakyaths/Mini-RTOS.git
cd Mini-RTOS

# Create build directory
mkdir build && cd build

# Run CMake & Build
cmake ..
make -j$(nproc)
```

### Running the RTOS Demo
```sh
./mini_rtos
```

## Project Structure
```
Mini-RTOS/
│── src/                  # Core Source Files  
│   ├── scheduler.cpp      
│   ├── task.cpp           
│   ├── main.cpp           
│── include/              # Header Files  
│   ├── scheduler.h        
│   ├── task.h             
│── tests/                # Unit Tests  
│── docs/                 # Design Docs  
│── README.md             # Project Overview  
│── CMakeLists.txt        # Build System  
```

## License
This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file for details.

## Contact
For any questions, feel free to reach out:
- GitHub Issues: [Open an Issue](https://github.com/prakyaths/Mini-RTOS/issues)
- Email: prakyathshetty00@gmail.com
