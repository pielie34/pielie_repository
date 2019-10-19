#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<long long unsigned int> x = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<vector<string>> month(31);
	int i, Q, n = 1, delta = 1;
	string command, s;
	cin >> Q;
		while (Q != 0) {
			cin >> command; //cin читает до пробела!!!!!
			if (command == "NEXT") {
				if (x[n] < month.size()) {
					delta = month.size() - x[n];
					for (int k = 0; k < delta; ++k) {
						month[x[n]-1].insert(end(month[x[n]-1]),
						begin(month[month.size()-k-1]), end(month[month.size()-k-1]));
					}
				}
				month.resize(x[n]);
				n++;
				if (n == 12) {
					n = 0;
				}
			}
			else {
				cin >> i;
				if (command == "DUMP") {
					cout << month[i-1].size() << " ";
					for (auto a: month[i-1]) {
						cout << a << " ";
					}
					cout << endl;
				}
				else {				//ADD
					cin >> s;
					month[i-1].push_back(s);
				}

			}
			--Q;
		}
	return 0;
}
