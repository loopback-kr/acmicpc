//https://www.acmicpc.net/problem/1157
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
	string s; cin >> s;
	vector<int> map(26, 0);
	
	for (char ch : s) {
		int i = toupper(ch);
		map[i-65]++;
	}
	
	int maxNum = -1;
	int maxIndex = -1;
	for (int i = 0; i < map.size();i++) {
		if (map[i] > maxNum && map[i] > 0) { 
			maxNum = map[i];
			maxIndex = i;
		} else if (map[i] == maxNum) {
			cout << '?';
			return 0;
		}
	}
	cout << (char)(maxIndex+65);
	return 0;
}

//ABABCCC