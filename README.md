# canopenlib
This library provides simple CANopen functionalities. It uses the SocketCAN package and is therefore only for Linux.

## How to build
The library can be built with CMake and installed locally as follows.

```bash
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=../install ..
make
make install
```

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
