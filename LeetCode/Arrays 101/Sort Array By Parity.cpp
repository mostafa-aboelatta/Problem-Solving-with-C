class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
     int replace,wp=0;
     for(int i=0;i<nums.size();i++)
     {
      if(nums[i]%2==0)
      {
       replace=nums[wp];   
       nums[wp]=nums[i];
       nums[i]=replace;   
       wp++;   
      }
     }
    return nums;
    }
};