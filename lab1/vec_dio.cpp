#include <bitset>
#include "vec_dio.h"

std::ostream &operator<<(std::ostream &out, const vec_t &vec) {
    std::cout << '{';
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        std::cout << vec[i] << ", ";
    }
    std::cout << vec[vec.size() - 1] << "}";

    return out;
}

std::istream &operator>>(std::istream &in, vec_t &vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "element " << i + 1 << ": ";
        std::cin >> vec[i];
    }

    return in;
}

std::ostream &operator<<(std::ostream &out, const vecVec_t &vecVec) {
    std::cout << '{';
    for (vecVec_t::size_type i = 0; i < vecVec.size() - 1; ++i) {
        std::cout << vecVec[i] << ", ";
    }
    std::cout << vecVec[vecVec.size() - 1] << "}";

    return out;
}

namespace vec {
    void printBitwise(const bitwise_vec_t vec) {
        std::cout << static_cast<std::bitset<8>>(vec);
    }
}
