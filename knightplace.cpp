#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


void myfile() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void print(vector < vector<int>> v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
bool isItSafe(vector < vector<int>> v, int n, int i = 0, int j = 0) {
	return i >= 0 and j >= 0 and i < n and j < n and v[i][j] == 0;

}
void knight(vector < vector<int>> v, int n, int count, int i, int j) {
	if (count == n * n) {
		v[i][j] = count;
		print(v);
		return;
	}
	if (count >= n * n)
		return;

	int xdir[8] = { -2, -2, 2, 2, 1, 1, -1, -1};
	int ydir[8] = {1, -1, 1, -1, 2, -2, 2, -2};

	v[i][j] = count;
	for (int k = 0; k < 8; k++) {
		if (isItSafe(v, n, i + xdir[k], j + ydir[k]))
			knight(v, n, count + 1, i + xdir[k], j + ydir[k]);
	}

}

int main() {
	myfile();
	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int> (n, 0));
	knight(v, n, 1, 0, 0);
	return 0;
}
