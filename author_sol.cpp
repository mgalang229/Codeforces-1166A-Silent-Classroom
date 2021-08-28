#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n;
	cin >> n;
	int f[26];
	memset(f, 0, sizeof(f));
	for(int i=0; i<n; ++i) {
		string s;
		cin >> s;
		f[s[0]-'a']++;
	}
	
	//compute for values
	int ans=0;
	for(int i=0; i<26; ++i) {
		// divide the frequency evenly
		int a=(f[i]+1)/2;
		int b=f[i]-a;
		//count distinct number of pairs
		ans+=(a*(a-1))/2;
		ans+=(b*(b-1))/2;
	}
	
	//output ans
	cout << ans << "\n";
}
