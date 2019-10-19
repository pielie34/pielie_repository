#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {						//� ���� ��������� �������� ���������, ���� ��������� ��� ���������, ���������� �� ������� �� ��������
	map<int,set<string>> routes;
	set<string> route;
	string stop;
	int Q, N, S;
	bool check = false;
	cin >> Q;
	while (Q != 0) {
		cin >> N;
		while (N != 0) {			//��������� ������ �����������
			cin >> stop;
			route.insert(stop);
			--N;
		}
		for (auto& pair : routes) {				//���� ����� ��������
			if (pair.second == route) {
				cout << "Already exists for " << pair.first << endl;
				check = true;
				route.clear();
				break;
			}
		}
		if (check == false) {	 			//�������� ������� � �������
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
