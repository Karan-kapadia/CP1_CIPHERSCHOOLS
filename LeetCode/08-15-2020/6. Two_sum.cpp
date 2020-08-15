class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2);
        unordered_map<int, int> mymap;
        unordered_map<int, int>::iterator it;
        for(int i=0; i<nums.size(); i++){
            it = mymap.find(target - nums[i]);
            if(it != mymap.end()){
                v[0] = it->second;
                v[1] = i;
                return v;
            }
            mymap[nums[i]] = i;
        }
        return v;
    }
};
