#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
	int count = 0;
	while(n!=0){
		n = n/10;
		++count;
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	int digits = countDigits(n);
	int a[digits];
	int temp = n, r, i=0;
	while(n!=0){
		r = n%10;
		a[i++] = r;
		n = n/10;
	}
	int number = 0;
	for(int i=0; i<digits; i++)
		number += pow(a[i], digits);
	if(number == temp)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
