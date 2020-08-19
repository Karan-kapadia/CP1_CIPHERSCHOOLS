#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int fill = (n/2);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((j == 0 && i < fill) || (j == n-1 && i > fill) || (i == 0 && j > fill) || (i == n-1 && j < fill) || (j == fill || i == fill))
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
