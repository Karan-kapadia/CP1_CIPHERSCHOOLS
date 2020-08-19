#include<bits/stdc++.h>
using namespace std;
int min_swap(int a[], int n, int k){
	int count=0, back=n-1;
	for(int front=0; front<n;){
		if(a[front] <=k)
			front++;
		if(a[back] > k)
			back--;
		if(a[front] > k && a[back] <= k){
			swap(a[front], a[back]);
			front++;
			back--;
			count++;	
		}
		if(front >= back)
			return count;
	}
	return count;
}
int main(){
	int n, k, greater=0;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << min_swap(a, n, k);
	return 0;
}
