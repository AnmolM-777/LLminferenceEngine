#include "quantization.h"
std::vector<float> Quantizer::dequantize_q4_0(const uint8_t* data, size_t size, float scale) { std::vector<float> out(size * 2); for (size_t i = 0; i < size; ++i) { out[2 * i] = (data[i] & 0x0F) * scale; out[2 * i + 1] = ((data[i] >> 4) & 0x0F) * scale; } return out; }
std::vector<float> Quantizer::dequantize_q8_0(const int8_t* data, size_t size, float scale) { std::vector<float> out(size); for (size_t i = 0; i < size; ++i) { out[i] = data[i] * scale; } return out; }
