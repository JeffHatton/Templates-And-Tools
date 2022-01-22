cmake_minimum_required(VERSION 3.15.3)

set(USE_ST_HAL 1)
# set(HAT_EXE_NAME Template)

find_package(HatronicCore REQUIRED)

set(CMAKE_VERBOSE_MAKEFILE ON)

# turn on compile commands so VS Code can use the include paths
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Setup project
project(Project_Template)

# Add project source files to HatronicCore
target_sources(HatronicCore PUBLIC 
        src/main.c
        src/stm32wbxx_it.c
        src/stm32wbxx_hal_msp.c
        src/SystemFunctions.c
        src/SystemInit.c
)

# Add project include directories to HatronicCore
target_include_directories(HatronicCore PUBLIC
        src
        inc
)