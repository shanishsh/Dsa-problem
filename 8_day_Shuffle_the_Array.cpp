class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        bool swap=true;
        int j=0;
        vector<int>vec;
        int mid=(nums.size()-1)/2+1;
        for(int i=0;i<nums.size();i++){
            if(swap){
                vec.push_back(nums[j]);
                j++;
                swap=false;
            }
            else{
                vec.push_back(nums[mid]);
                mid++;
                swap=true;
            }
        }
        return vec;
    }
};