# canopenlib
This library provides simple CANopen functionalities. It uses the SocketCAN package and is therefore only for Linux. It is an extension of [libcanopen](https://github.com/rscada/libcanopen). Notably, it supports PDO transfers and implements some of the CANopen communication profile for drives.


## How to build
The library can be built with CMake and installed locally as follows.

```bash
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=../install ..
make
make install
```
If you use this library together with [EEROS](http://www.eeros.org) it might be advantageous to use the build scripts therein.

## How to use
The library can be used as follows.

### Add the canopenlib
The library can be added to the target project by addding the following CMake statements to the topmost CMakeLists.txt file.

```cmake
set(CMAKE_PREFIX_PATH pathTo/canopenlib/install/)

find_package(canopenlib)

include_directories(${canopenlib_INCLUDE_DIR})
link_directories(${canopenlib_DIR})

add_executable(main main.cpp)
target_link_libraries(main canopenlib)
```

### Use the canopenlib
The library API is accessible as follows.
```cpp
#include "canopenlib.h"

int main() {
  can_socket_open();
  ...
}
```

## Organization of the library
The basic functionality for NMT commands and SDO transfers can be found in
- canopen.c / canopen.h (basic functionality)
- canopen-com.c / canopen-com.h (sending and receiving packages)
- can-if.c / can-if.h (socket handling)

Our extensions include
- canopen-drv.c / canopen-drv.h (adds PDO support)
- canopen-Faulhaber-drv.c / canopen-Faulhaber-drv.h (support for Faulhaber drives)
