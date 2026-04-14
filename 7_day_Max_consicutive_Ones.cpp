class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int  counter=0,max_count=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                counter++;
            }
            else{
                counter=0;
            }
            if(counter>max_count){
                max_count=counter;
            }
        }
        return max_count;
    }
};