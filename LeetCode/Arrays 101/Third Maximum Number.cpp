class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
     long long fm=-2147483649,sm=-2147483649,tm=-2147483649;   
     for(int i=0;i<nums.size();i++)
     {
      if(nums[i]>fm )
      {
       tm=sm;
       sm=fm;   
       fm=nums[i];
      }
      else if(nums[i]<fm && nums[i]>sm)
      {
       tm=sm;   
       sm=nums[i];   
      }
      else if(nums[i]<fm && nums[i]<sm && nums[i]>tm)
       tm=nums[i];   
     }
     if(tm !=-2147483649)
     return tm;
     
     else 
      return fm;   
    }
};