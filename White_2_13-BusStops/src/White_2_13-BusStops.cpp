#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
	map<string,vector<string>> m; //проблема - автобусы нужны и в упорядоченном виде и в порядке добавления в m
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

			if (command == "STOPS_FOR_BUS") { //command2 - автобус
				cin >> bus;
				if (m.count(bus) != 0) {
					for (auto el_v : m[bus]) {
						cout << "Stop " << el_v << ": ";    //все остановки данного автобуса
						for (auto elem_m : m) {
							for (auto elem_v : elem_m.second) {
								if (elem_v == el_v && elem_m.first != bus) {
									no_order.push_back(elem_m.first);    //запихиваем в no_order все автобусы, на которые можно пересесть
									y = true;
								}
							}
						}
						for (auto e: order) {
							for (auto r: no_order) {
								if (e.second == r) {
									cout << r << " "; //выводим эти автобусы в порядке добавления в NEW_BUS, согласуя с order
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

			if (command == "BUSES_FOR_STOP") { //command2 - остановка
				cin >> stop;
				for (auto el_m : m) {
					for (auto el_v : el_m.second) {
						if (el_v == stop) {
							no_order.push_back(el_m.first);			//запихиваем все автобусы, проезжающие остановку stop в no_order
							g = true;    		//сигнал: существует ли остановка
						}
					}
				}
				for (auto e: order) {
					for (auto r: no_order) {
						if (e.second == r) {
							cout << r << " ";  //вывод этих автобусов в порядке добавления в m
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

			if (command == "NEW_BUS") {	//command2 - автобус
				cin >> bus;
				order[k]=bus;
				++k;
				cin >> stops_num;
				m[bus].resize(stops_num); //определяем размер вектора остановок автобуса bus
				for (int i = 0; i < stops_num; ++i) {    //заполняем вектор остановок вводом
					cin >> m[bus][i];
				}

			}
			--N;
		}
	return 0;
}
