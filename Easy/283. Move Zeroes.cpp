class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        float i = 0;
        float k = 0;
        for( ; k<nums.size() ; k++){
            if(nums[k]!=0){ 
            swap(nums[k],nums[i]);
            i++;
                
            }
        }
    }
};
