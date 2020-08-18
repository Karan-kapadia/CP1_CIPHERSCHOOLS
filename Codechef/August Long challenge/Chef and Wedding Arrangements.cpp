#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
		int n, k;
		cin >> n >> k;
		
		vector<int> a(n);
		for(int i=0; i<n; i++)
			cin >> a[i];
			
		vector<vector<int> > temp(n, vector<int> (n, 0));
		vector<int> max(101, 0);
		
		for(int i=0; i<n; i++){
			
			for(int j=i; j<n; j++){
				if(j == 0){
					max[a[j]] += 1;
					continue;
				}
				temp[i][j] = temp[i][j-1];
				if(max[a[j]] > 0){
					if(max[a[j]] == 1)
						temp[i][j]++;
					temp[i][j]++;
				}
				max[a[j]]++;
			}
			
			for(int j=0; j<101; j++)
				max[j] = 0;
		}
		
		int tables_max = 101;
		vector<vector<int> > dp(tables_max, vector<int>(n + 2, 0));
		for(int i=1; i<=n; i++)
			dp[1][i] = temp[0][i-1];
			
		for(int i=2; i<tables_max; i++){
			for(int j=2; j<=n; j++){
				int tmp = 999999;
				for(int c=1; c<j; c++)
					tmp = min(tmp, dp[i - 1][c] + temp[c][j - 1]);
				dp[i][j] = tmp;
			}
		}
		
		int res = 999999;
		for(int i=1; i<tables_max; i++)
			res = min(res, int(i*k + dp[i][n]));
		cout << res << "\n";
	}
	return 0;
} 
