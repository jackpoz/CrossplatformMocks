# CMakeList.txt : CMake project for CrossplatformMocks, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CrossplatformMocks")

# Add source to this project's executable.
add_library (${PROJECT_NAME} INTERFACE)

# Specify include directories for the interface library
target_include_directories(CrossplatformMocks INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
endif()

# Install targets
install(TARGETS ${PROJECT_NAME}
    EXPORT CrossplatformMocksTargets
    INCLUDES DESTINATION include
)

# Install header files
install(DIRECTORY include/
    DESTINATION include/${PROJECT_NAME}
)

# Install CMake config files for proper integration
install(EXPORT CrossplatformMocksTargets
    FILE CrossplatformMocksTargets.cmake
    DESTINATION share/${PROJECT_NAME}
)
