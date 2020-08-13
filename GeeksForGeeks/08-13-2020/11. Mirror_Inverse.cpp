#include<bits/stdc++.h>
using namespace std;

bool isMirrorInverse(int a[], int n){
	for(int i=0; i<n; i++)
		if(a[a[i]] != i)
			return false;
	return true;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	if(isMirrorInverse(a, n))
		cout << "Yes";
	else
		cout << "No";
}
