#pragma once

namespace vsite::oop::v6 
{
	template <typename T>
	T minimum(T a, T b) {
		
		if (a < b) {
			return a;
		}
		else {
			return b;
		}
	}

	template <typename T, int Size>

	class fixed_array {
	public:
		unsigned long long size() const {
			return Size;
		}

		T operator [] (int i) {
			return niz[i];
		}
	private:
		T niz[Size];
	};

	template <typename T>
	struct point {
		T x;
		T y;
	};

}