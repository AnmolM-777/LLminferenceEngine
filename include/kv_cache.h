#ifndef KV_CACHE_H
#define KV_CACHE_H
#include <cstddef>
class KVCache { size_t layers; size_t max_seq; public: KVCache(size_t l, size_t s) : layers(l), max_seq(s) {} };
#endif
