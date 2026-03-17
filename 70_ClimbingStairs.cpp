class Solution {
public:
    int climbStairs(int n) {
        if(n<=3){
            return n;
        }
        int curr=0;
        int a=1;
        int b=2;
        for(int i=0; i<n-2; i++){
            curr=a+b;
            a=b;
            b=curr;
        }
        return curr;
    }
};