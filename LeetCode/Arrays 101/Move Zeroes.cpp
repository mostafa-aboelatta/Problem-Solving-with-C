class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
     int wp=0,countZeros=0;
     for(int i=0;i<nums.size();i++)
     {
      if(nums[i]!=0)
      {
       nums[wp]=nums[i];
       wp++;   
      }
      else
      countZeros++;    
     }
     for(int j=1;j<=countZeros;j++)
     {
      nums[nums.size()-j]=0;   
     }   
    }
};