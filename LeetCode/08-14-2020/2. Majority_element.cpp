#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;  // 2,2,1,1,1,2,2
	v.push_back(3);
	v.push_back(3);
	v.push_back(4);
	map<int, int> m;
    for(int i=0; i<v.size(); i++){
        m[v[i]]++;
    }
    int max=0, value;
	for(int i=0; i<m.size(); i++){
		if(m[i] > max){
			max = m[i];
			value = i;	
		}
	}
	cout << value;
    return 0;
}
