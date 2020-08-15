class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if(strs.size() == 0)
            return result;
        int n = strs.size();
        string s = strs[n-1];
        strs.pop_back();
        int count=0;
        for(int j=0; j<s.length(); j++){
            for(int i=0; i<strs.size(); i++){
                if(s[j] == strs[i][j])
                    count++;
            }
            if(count == strs.size()){
                result.push_back(s[j]);
                count = 0;
            }
            else
                return result;
        }
        return result;
    }
};
