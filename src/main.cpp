#include <iostream>
#include "gguf_loader.h"
#include "kv_cache.h"
#include "simd_kernels.h"
int main() { std::cout << "=== LLminferenceEngine CPU Acceleration Engine Initialization ===" << std::endl; GGUFLoader loader; if (loader.load_model("model.gguf")) { std::cout << "[SUCCESS] Model weights loaded." << std::endl; } return 0; }
