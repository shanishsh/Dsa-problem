class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last_element,j=0;
        for(int i=0;i<nums.size();i++){
            if(last_element!=nums[i]){
            last_element=nums[i];
            nums[j]=last_element;
            j++;
            }
        }
        return j;
    }
};