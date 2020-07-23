class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pointer=0;
        int max=INT_MIN;
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum=nums[i];
            if(sum>max){
                    max=sum;
                }
            for(int j=i+1;j<nums.size();j++)
            {
                sum=sum+nums[j];
                // cout<<sum<<"\n";
                if(sum>max){
                    max=sum;
                }
                
            }
            // cout<<"max: "<<max<<"\n";
            
            
        }
        
        return max;
    }
};
