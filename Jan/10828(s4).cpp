#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int T;
int now;
int point;
vector <string> src;
string stk[10000];

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		
		src.push_back(str);
		if (str == "push") {
			string str1;
			cin >> str1;
			src.push_back(str1);
		}
	}

	now = 0;
	point = -1;

	for (int i = 0; i < T; i++) {
		string str;
		str = src[now];
		if (str == "pop") {
			if (point == -1) cout << -1 << endl;
			else{
				cout << stk[point] << endl;
				point--;
			}
		}
		else if (str == "size") {
			cout << point+1 << endl;
		}
		else if (str == "top") {
			if (point == -1) cout << -1 << endl;
			else {
				cout << stk[point] << endl;
			}
		}
		else if (str == "empty") {
			if (point == -1) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (str == "push") {
			now++;
			string tmp = src[now];
			point++;
			stk[point] = tmp;
		}
		now++;
	}
}