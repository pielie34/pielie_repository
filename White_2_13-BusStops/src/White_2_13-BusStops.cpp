#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
	map<string,vector<string>> m; //�������� - �������� ����� � � ������������� ���� � � ������� ���������� � m
	map<int,string> order;
	vector<string> no_order;
	int N, stops_num, k;
	bool g = false, y = false;
	string command, bus, stop;
	cin >> N;
		while (N != 0) {
			cin >> command;
			if (command == "ALL_BUSES") {
				if (m.size() != 0) {
					for (auto elem_m : m) {
						cout << "Bus " << elem_m.first << ": ";
						for (auto elem_v : elem_m.second) {
							cout << elem_v << " ";
						}
						cout << endl;
					}
				}
				else {
					cout << "No buses" << endl;
				}
			}

			if (command == "STOPS_FOR_BUS") { //command2 - �������
				cin >> bus;
				if (m.count(bus) != 0) {
					for (auto el_v : m[bus]) {
						cout << "Stop " << el_v << ": ";    //��� ��������� ������� ��������
						for (auto elem_m : m) {
							for (auto elem_v : elem_m.second) {
								if (elem_v == el_v && elem_m.first != bus) {
									no_order.push_back(elem_m.first);    //���������� � no_order ��� ��������, �� ������� ����� ���������
									y = true;
								}
							}
						}
						for (auto e: order) {
							for (auto r: no_order) {
								if (e.second == r) {
									cout << r << " "; //������� ��� �������� � ������� ���������� � NEW_BUS, �������� � order
								}
							}
						}
						no_order.clear();
						if (y == false) {
							cout << "no interchange";
						}
						y = false;
						cout << endl;
					}
				}
				else {
					cout << "No bus" << endl;
				}

			}

			if (command == "BUSES_FOR_STOP") { //command2 - ���������
				cin >> stop;
				for (auto el_m : m) {
					for (auto el_v : el_m.second) {
						if (el_v == stop) {
							no_order.push_back(el_m.first);			//���������� ��� ��������, ����������� ��������� stop � no_order
							g = true;    		//������: ���������� �� ���������
						}
					}
				}
				for (auto e: order) {
					for (auto r: no_order) {
						if (e.second == r) {
							cout << r << " ";  //����� ���� ��������� � ������� ���������� � m
						}
					}
				}
				no_order.clear();
				if (g == false) {
					cout << "No stop";
				}
				g = false;
				cout << endl;
			}

			if (command == "NEW_BUS") {	//command2 - �������
				cin >> bus;
				order[k]=bus;
				++k;
				cin >> stops_num;
				m[bus].resize(stops_num); //���������� ������ ������� ��������� �������� bus
				for (int i = 0; i < stops_num; ++i) {    //��������� ������ ��������� ������
					cin >> m[bus][i];
				}

			}
			--N;
		}
	return 0;
}
