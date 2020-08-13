#include<bits/stdc++.h>
using namespace std;
int number(int a[], int n){
	int temp = n-1;
	int output = 0;
	for(int i=0; i<n; i++){
		output += a[i]*(pow(10, temp));
		temp--;
	}
	return output;
}

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<m; i++)
		cin >> b[i];
	int first = number(a, n);
	int second = number(b, m);
	cout << first+second;
	return 0;
}
