This directory contains various templates for getting started on projects. Templates are meant to be used at the start of a project to quickly get the project structure and build environment setup.

## Templates
* STM32 WB: Basic template for getting hello world running on the STM32 WB


### Building
1. Make build director
2. Generate cmake configuration
3. build

```
cmake -S . -B build -D BOARD={BOARD} -GNinja -D CMAKE_BUILD_TYPE=Debug
cmake --build ./build
```

### Flashing Command
~/STMicroelectronics/STM32Cube/STM32CubeProgrammer/bin/STM32_Programmer.sh -c port=SWD -w ./STM32_WB55_Template.hex 


