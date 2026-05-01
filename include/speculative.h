#ifndef SPECULATIVE_H
#define SPECULATIVE_H
#include <vector>
class SpeculativeDecoder { public: static bool verify_draft_tokens(const std::vector<int>& draft, const std::vector<int>& target); };
#endif
