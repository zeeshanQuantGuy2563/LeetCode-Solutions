class Solution {
public:
    int trailingZeroes(int n) {
        long long a=0;
        long long i=1;
        while(a>=0){
            int b=n/int(pow(5,i));
            if(b==0){
                break;
            }
            a+=b;
            i++;
        }
        return a;
    }
};