class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        if(x<0){
            return false;
        }
        long rev=0;
        while(x>0){
            rev=rev*10 + x%10;
            x/=10;
        }
        return rev==num;
    }
};