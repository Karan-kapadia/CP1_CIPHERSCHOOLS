#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s, p;
		cin >> s >> p;
		
		int s_length = s.length(), p_length = p.length();
		vector<int> freq_s(26, 0), freq_p(26, 0);
		vector<int> temp_s, temp_p;
		
		for(ll i=0; i<s_length; i++)
			freq_s[s[i] - 'a']++;
		
		for(ll i=0; i<p_length; i++)
			freq_p[p[i] - 'a']++;
		
		string s1 = "", p1 = "";
		
		for(ll i=0; i<26; i++){
			int diff = freq_s[i] - freq_p[i];
			for(ll j=0; j<diff; j++){
				temp_s.push_back('a' + i);
				s1 += char('a' + i);
				temp_p.push_back('a' + i);
				p1 += char('a' + i);
				freq_s[i]--;
			}
		}
		int key = p[0];
		int position1 = upper_bound(temp_s.begin(), temp_s.end(), key) - temp_s.begin();
		int position2 = lower_bound(temp_p.begin(), temp_p.end(), key) - temp_p.begin();
		s1.insert(position1, p);
		p1.insert(position2, p);
		if(s1 >= p1)
			cout << p1 << endl;
		else
			cout << s1 << endl;
	}
	return 0;
}

