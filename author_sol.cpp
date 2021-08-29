#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> letters(26, 0);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		// count the frequency of every starting letter of the names
		letters[s[0] - 'a']++;
	}
	int res = 0;
	for (int i = 0; i < 26; i++) {
		// divide 'a' and 'b' evenly
		// 'a' contains the extra student (if the total number is odd)
		int a = (letters[i] + 1) / 2;
		// 'b' contains the remaining number after subtracting 'a' from the total
		int b = letters[i] - a;
		// calculate the number of distinct pairs in both classes 'a' and 'b'
		res += (a * (a - 1)) / 2;
		res += (b * (b - 1)) / 2;
	}
	cout << res << '\n';
	return 0;
}
