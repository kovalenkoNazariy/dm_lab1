#ifndef VEC_D
#define VEC_D
#include <vector>
#include <iostream>

using vec_t = std::vector<int>;
using vecVec_t = std::vector<vec_t>;
using bitwise_vec_t = std::uint_fast32_t;

namespace vec {
	bitwise_vec_t getBitwiseArray(const vec_t &A);
}
#endif