﻿#include <algorithm>
#include "vec_dfunc.h"
#include "vec_dmath.h"

namespace vec {
	//мне крайне лень это делать
	bool isEqual(vec_t A, vec_t B) {
		std::sort(A.begin(), A.end());
		std::sort(B.begin(), B.end());

		return A == B;
	}

	bool contains(const vec_t &A, const vec_t &B) {
		for (int i{ 0 }; i <= A.size() - B.size(); ++i) {
			bool noErrors{ true }; //нет несовпадений

			for (int j{ i }; j < i + B.size(); ++j) {
				if (A[j] != B[j - i]) {
					noErrors = false;
					break;
				}
			}

			if (noErrors) {
				return true;
			}
		}

		return false;
	}
}