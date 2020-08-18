#include <iostream>
using namespace std;

int find_power(int final_power) {
	int res = 0;
	if((final_power % 9) != 0)
		res++;
	res += (final_power / 9);
	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int chef, rik, chef_score, rik_score;
		cin >> chef >> rik;
		chef_score = find_power(chef);
		rik_score = find_power(rik);
		if(chef_score == rik_score || rik_score < chef_score)
			cout << 1 << " " << rik_score << endl;
		else
			cout << 0 << " " << chef_score << endl;
	}
	return 0;
}

