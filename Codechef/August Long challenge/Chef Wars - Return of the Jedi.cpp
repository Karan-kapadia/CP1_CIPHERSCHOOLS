#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int health, power;
		cin >> health >> power;
		while(power != 0 && health != 0){
		    if(health < power)
		        health = 0;
		    else
		        health -= power;
		    power /= 2;
		}
		if(health == 0)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}

