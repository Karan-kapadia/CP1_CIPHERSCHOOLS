#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=0; j<n-i; j++)
			cout << " ";
		if(i==1 || i==n)
			for(int j=0; j<n; j++)
				cout << "*";
		else
			for (int j=0; j<=n; j++) 
                if (j==0 || j==n-1) 
                    cout << "*";   
                else
                    cout << " "; 
		cout << "\n";
	}
	return 0;
}
