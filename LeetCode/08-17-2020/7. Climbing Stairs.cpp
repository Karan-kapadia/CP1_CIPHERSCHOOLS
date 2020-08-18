class Solution {
public:
    int climbStairs(int n) {
        if(n < 4)
            return n;
        int first=2, second=3, result;
        for(int i=3; i<n; i++){
            result = first + second;
            first = second;
            second = result;
        }
        return result;
    }
};
