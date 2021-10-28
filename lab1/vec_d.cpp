#include "vec_d.h"

namespace vec {
    bitwise_vec_t getBitwiseArray(const vec_t &A) {
        bitwise_vec_t bitsA{};

        for (int i = 1; i < 10; ++i) {
            if (std::find(A.begin(), A.end(), i) != A.end()) {
                bitsA |= 1 << (i - 1);
            }
        }

        return bitsA;
    }
}