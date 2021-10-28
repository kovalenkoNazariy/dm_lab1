#include <iostream>
#include <algorithm>
#include "vec_d.h"
#include "vec_dio.h"
#include "vec_dmath.h"
#include "vec_dfunc.h"

int getInt(const std::string &message) {
    int input{};
    std::cout << message;
    std::cin >> input;
    return input;
}

void executeOperation(const vec_t &A, const vec_t &B, char op);
void executeBitwiseOperation(const vec_t &A, const vec_t &B, char op);

int main()
{
    std::cout << std::boolalpha;

    vec_t A(getInt("Enter a size for the first array: "));
    vec_t B(getInt("Enter a size for the second array: "));
    std::cin >> A >> B;
    
    char op{};
    std::cout << "\nPlease enter an operation to execute (math: o, a, m, d, s, x), (func: i, c) "
         << "or enter \'Q\' to skip to bitwise operations: ";
    std::cin >> op;

    if (op == 'Q') {
        std::cout << "\nEnter bitwise operation type (n, o, a, x): ";
        std::cin >> op;
        executeBitwiseOperation(A, B, op);
        return 0;
    }

    executeOperation(A, B, op);

    return 0;
}

void executeBitwiseOperation(const vec_t &A, const vec_t &B, char op) {
    bitwise_vec_t bitsA{ vec::getBitwiseArray(A) };
    bitwise_vec_t bitsB{ vec::getBitwiseArray(B) };
    std::cout << "The arrays have been reformed into bitwise ones: ";
    //no bitwise output because i've already spent too much time on this
    vec::printBitwise(bitsA);
    std::cout << ", ";
    vec::printBitwise(bitsB);
    std::cout << ".\n";

    switch (op) {
    case'n':
        vec::printBitwise(~bitsA);
        break;
    case'o':
        vec::printBitwise(bitsA | bitsB);
        break;
    case'a':
        vec::printBitwise(bitsA & bitsB);
        break;
    case'x':
        vec::printBitwise(bitsA ^ bitsB);
        break;
    }
}

void executeOperation(const vec_t &A, const vec_t &B, char op) {
    vec_t out{};
    vecVec_t out2{};
    switch (op) {
    case'o':
        vec::_or(A, B, out);
        std::cout << out;
        break;
    case'a':
        vec::_and(A, B, out);
        std::cout << out;
        break;
    case'm':
        vec::minus(A, B, out);
        std::cout << out;
        break;
    case'd':
        vec::dopovnennja(A, out);
        std::cout << out;
        break;
    case's':
        vec::simMinus(A, B, out);
        std::cout << out;
        break;
    case'x':
        vec::decartMultiply(A, B, out2);
        std::cout << out2;
        break;

    case'i':
        std::cout << vec::isEqual(A, B);
        break;
    case'c':
        std::cout << vec::contains(A, B);
        break;

    default:
        std::cout << "Operation unknown / not implemented.";
        break;
    }
}