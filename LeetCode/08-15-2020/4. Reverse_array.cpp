class Solution {
public:
    int reverse(int x) {
        if((x > INT_MAX) || (x < INT_MIN))
            return 0;
        int temp = (x<0) ? -1:1;
        x = abs(x);
        long sum=0;
        while(x!=0){
            sum = (sum*10) + x%10;
            x /= 10;
        }
        if((sum > INT_MAX) || (sum < INT_MIN))
            return 0;
        return temp*sum;
    }
};
