#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int T;
queue <int> que;

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		bool isVPS=false;
		cin >> str;
		que = {};
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') que.push(1);
			else if (str[j] == ')' && !que.empty()) que.pop();
			else if (str[j] == ')' && que.empty()) {
				isVPS = true;
				break;
			}
		}
		if (isVPS || que.size() != 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

}