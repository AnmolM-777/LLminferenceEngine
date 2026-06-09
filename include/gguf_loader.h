#ifndef GGUF_LOADER_H
#define GGUF_LOADER_H
#include <string>
#include <vector>
#include <map>
struct TensorMetaData { std::string name; std::vector<uint64_t> dims; uint32_t type; uint64_t offset; };
class GGUFLoader { std::map<std::string, TensorMetaData> tensors; public: bool load_model(const std::string& path); std::vector<float> get_tensor(const std::string& name); };
#endif

// Incremental development step #3

// Incremental development step #18

// Incremental development step #33

// Incremental development step #48

// Incremental development step #63
