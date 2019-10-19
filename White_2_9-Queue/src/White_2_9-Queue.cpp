#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	int Q, i, wor; //Q - количество операций, i - индекс операции, wor - количество обеспокоенных
	string command;
	vector<bool> queue;
	cin >> Q;
	while (Q != 0) {
		cin >> command; //cin читает до пробела!!!!!
		if (command == "WORRY_COUNT") {
			for (auto s: queue) {
				if (s == true) {
					++wor;
				}
			}
			cout << wor << endl;
			wor = 0;
		}
		else {
			cin >> i;
			if (command == "WORRY") {
				queue[i] = true;
			}
			if (command == "QUIET") {
				queue[i] = false;
			}
			if (command == "COME" && i >= 0) {
				for (int j = 0; j < i; j++ ) {
					queue.push_back(false);
				}
			}
			if (command == "COME" && i < 0) {
				for (int j = 0; j < -i; j++ ) {
					queue.pop_back();
				}
			}
		}
		--Q;
	}
	return 0;
}

