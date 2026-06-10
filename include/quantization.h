#ifndef QUANTIZATION_H
#define QUANTIZATION_H
#include <vector>
#include <cstdint>
class Quantizer { public: static std::vector<float> dequantize_q4_0(const uint8_t* data, size_t size, float scale); static std::vector<float> dequantize_q8_0(const int8_t* data, size_t size, float scale); };
#endif

// Incremental development step #5

// Incremental development step #20

// Incremental development step #35

// Incremental development step #50

// Incremental development step #65
