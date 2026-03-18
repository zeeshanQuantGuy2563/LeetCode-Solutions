class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7){return true;}
        if(n<=9){return false;}
        while(n>0){
            int sum=0;
            while(n>0){
                sum+=int(pow(n%10,2));
                n/=10;
            }
            if(sum==1 || sum==7){
                return true;
            }else if(sum<=9){
                return false;
            }
            n=sum;
        }
        return false;
    }
};