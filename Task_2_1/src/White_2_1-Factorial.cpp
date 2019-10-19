#include <iostream>
using namespace std;

int Factorial(int x) {
	int y = 1;
		for (int i = 1; i <= x; ++i) {
				y *= i;
			}
		return y;
}
