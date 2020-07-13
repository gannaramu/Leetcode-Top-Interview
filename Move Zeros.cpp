class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        int i=0;
        int j=0;
        int swap = 0;
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
            if(nums[i]!=0)
            {
                  swap = nums[i];
                  nums[i] = nums[j];
                  nums[j] = swap;
                  j = j+1;
                      
            }
            
        }
        
        
            
    }
};
