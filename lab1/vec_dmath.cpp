#include "vec_dmath.h"

namespace vec {
    void _or(const vec_t &A, const vec_t &B, vec_t &out) {
        for (int a : A) {
            bool foundInB{ false };

            for (int b : B) {
                if (a == b) {
                    foundInB = true;
                    break;
                }
            }

            if (!foundInB)
                out.push_back(a);

        }

        for (int b : B) {
            out.push_back(b);
        }
    }

    void _and(const vec_t &A, const vec_t &B, vec_t &out) {
        for (int a : A) {
            for (int b : B) {
                if (a == b) {
                    out.push_back(a);
                    break;
                }
            }
        }
    }

    void minus(const vec_t &A, const vec_t &B, vec_t &out) {
        for (int a : A) {
            bool foundInB{ false };

            for (int b : B) {
                if (a == b) {
                    foundInB = true;
                    break;
                }
            }

            if (!foundInB)
                out.push_back(a);
        }
    }

    void dopovnennja(const vec_t &A, vec_t &out) {
        for (int i{ 0 }; i < 8; ++i) {
            if (std::find(A.begin(), A.end(), i) == A.end()) {
                out.push_back(i);
            }
        }
    }

    void simMinus(const vec_t &A, const vec_t &B, vec_t &out) {
        for (int a : A) {
            bool foundInB{ false };

            for (int b : B) {
                if (a == b) {
                    foundInB = true;
                    break;
                }
            }

            if (!foundInB)
                out.push_back(a);
        }

        for (int b : B) {
            bool foundInA{ false };

            for (int a : A) {
                if (a == b) {
                    foundInA = true;
                    break;
                }
            }

            if (!foundInA)
                out.push_back(b);
        }
    }

    void decartMultiply(const vec_t &A, const vec_t &B, vecVec_t &out) {
        for (int a : A) {
            for (int b : B) {
                out.push_back(vec_t{ a, b });
            }
        }
    }
}