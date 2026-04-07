class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        long int nums=3;
        if(n==nums) return true;
        while(nums<n){
            nums=nums*3;
            if(nums==n){
                return true;
            }
            
        }
        return false;
    }
};