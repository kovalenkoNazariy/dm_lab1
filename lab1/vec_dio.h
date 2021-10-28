#ifndef VEC_DIO
#define VEC_DIO
#include <iostream>
#include "vec_d.h"

std::ostream &operator<<(std::ostream &out, const vec_t &vec);
std::istream &operator>>(std::istream &in, vec_t &vec);

std::ostream &operator<<(std::ostream &out, const vecVec_t &vecVec);

namespace vec {
	void printBitwise(const bitwise_vec_t vec);
}

#endif