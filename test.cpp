class Solution {
public:
    bool isPalindrome(int x) {
        int t=x;
        long long a=0;
        if(t<0)
            return false;
        while(x!=0){
            int r=t%10;
            a= (a*10)+r;
            t=t/10;
        }
        if(a==x){
            return true;
        }
        else
            return false;
    }
};