cmake_minimum_required(VERSION 3.14)
project(LLminferenceEngine VERSION 1.0.0 LANGUAGES CXX C)
set(CMAKE_CXX_STANDARD 17)
include_directories(include)
add_executable(llm_engine src/main.cpp src/gguf_loader.cpp src/quantization.cpp src/simd_kernels.cpp src/kv_cache.cpp src/speculative.cpp)
target_link_libraries(llm_engine PRIVATE pthread)

// Incremental development step #2

// Incremental development step #17

// Incremental development step #32

// Incremental development step #47
