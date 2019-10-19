#include <iostream>
using namespace std;

int main() {
	int a, b, ost;
	cin >> a >> b;
	if (a <= b) {
		ost = a;
		a = b;
		b = ost;
	}
		while (ost != 0) {
			ost = a % b;
			a = b;
			b = ost;
			}
			cout << a << endl;
	return 0;
}
