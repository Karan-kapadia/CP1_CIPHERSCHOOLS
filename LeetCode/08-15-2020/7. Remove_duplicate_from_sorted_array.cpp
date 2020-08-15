class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int fp=0;
        for(int sp=1; sp<nums.size(); sp++){
            if(nums[sp] != nums[fp]){
                fp++;
                nums[fp] = nums[sp];
            }
        }
        return fp+1;
    }    
};
