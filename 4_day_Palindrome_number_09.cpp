class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        long long int num=0;
        while(x>0){
            int rem=x%10;
            num=num*10+rem;
            x=x/10;
        }
        if(a==num){
            return true;
        }
        else return false;
    }
};