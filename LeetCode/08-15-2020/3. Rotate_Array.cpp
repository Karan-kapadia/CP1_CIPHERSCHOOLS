class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        reverse(nums, 0, size-1);
        reverse(nums, k, size-1);
        reverse(nums, 0, k-1);
    }
    void reverse(vector<int>& nums, int i, int j){
        while(i < j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
};
