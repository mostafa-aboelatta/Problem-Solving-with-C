class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
     int wp=0;  
     for(int i=0;i<nums.size();i++)
     {
      if(nums[i]!=val)
      {
       nums[wp]=nums[i];
       wp++;   
      }

     }

     return wp;
    }
};