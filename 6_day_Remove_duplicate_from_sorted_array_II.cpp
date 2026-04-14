
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last_num=-1,count=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(last_num!=nums[i]){
                last_num=nums[i];
                count=1;
                nums[j]=last_num;
                j++;
            }
            else if(count<2){
                count++;
                nums[j]=last_num;
                j++;
            }
        }
        return j;
    }
};