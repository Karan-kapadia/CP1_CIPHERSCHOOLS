class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0, index=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[index] = nums[i];
                index++;
            }
            else
                count++;
        }
        for(int i=index; i<nums.size(); i++)
            nums[i] = 0;
    }
};
