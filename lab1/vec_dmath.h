#ifndef VEC_DMATH
#define VEC_DMATH
#include "vec_d.h"
namespace vec {
	void _or(const vec_t &A, const  vec_t &B, vec_t &out);
	void _and(const vec_t &A, const vec_t &B, vec_t &out);
	void minus(const vec_t &A, const vec_t &B, vec_t &out);
	void dopovnennja(const vec_t &A, vec_t &out);
	void simMinus(const vec_t &A, const vec_t &B, vec_t &out);
	void decartMultiply(const vec_t &A, const vec_t &B, vecVec_t &out);
}

#endif
