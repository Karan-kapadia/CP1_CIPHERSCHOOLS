class Solution {
public:
    int a[45] = {0};
    int tribonacci(int n) {
        if(n == 0){
            a[n] = 0;
            return 0;
        }
        if(n == 1 ||  n == 2){
            a[n] = 1;
            return 1;
        }
        else{
            if(a[n] == 0){
                a[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
                return a[n];
            }
            else
                return a[n]; 
        }
    }
};
