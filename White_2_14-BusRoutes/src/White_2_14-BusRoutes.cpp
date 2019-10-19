#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
	map<int,vector<string>> routes;
	vector<string> route;
	string stop;
	int Q, N, S;
	bool check = false;
	cin >> Q;
	while (Q != 0) {
		cin >> N;
		while (N != 0) {			//заполняем вектор остановками
			cin >> stop;
			route.push_back(stop);
			--N;
		}
		for (auto& pair : routes) {				//ищем копию маршрута
			if (pair.second == route) {
				cout << "Already exists for " << pair.first << endl;
				check = true;
				route.clear();
				break;
			}
		}
		if (check == false) {	 			//включаем маршрут в словарь
			S = routes.size();
			routes[S+1] = route;
			cout << "New bus " << S+1 << endl;
			route.clear();
		}
		check = false;
		--Q;
	}
	return 0;
}
