class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp(nums);
        vector<int> result;
        sort(temp.begin(); temp.end());
        
        vector<int>::iterator it;
        for(int i=0; i<nums.size(); i++){
            it = find(temp.begin(), temp.end(), nums[i]);
            result.push_back(it - temp.begin());
        }
        return result;
    }
};
