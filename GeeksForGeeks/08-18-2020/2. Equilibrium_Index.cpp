#include<bits/stdc++.h>
using namespace std;
int equiIndex(int a[], int n){
	int sum=0, ls=0;
	if(n == 0 || n == 1)
		return -1;
	for(int i=0; i<n; i++){
		sum -= a[i];
		if(sum == ls)
			return i;
		ls += a[i];
	}
	return -1;
}
int main(){
	int n, sum=0, ls=0;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
	cout << equiIndex(a, n);
	return 0;
}
