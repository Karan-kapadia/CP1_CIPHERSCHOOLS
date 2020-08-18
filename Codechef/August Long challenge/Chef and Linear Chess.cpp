#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
    while (t--){
        int n;
        long long int k;
        cin >> n >> k;
        long long int p[n];
        int ans = 0;
        for(int i=0; i<n; i++){
        	cin >> p[i];
        	if(k % p[i] == 0){
        		if(p[i] > ans)
        			ans = p[i];
			}
		}
		if(ans)
        	cout << ans << endl;
        else
        	cout << -1 << endl;
    }
	return 0;
}

