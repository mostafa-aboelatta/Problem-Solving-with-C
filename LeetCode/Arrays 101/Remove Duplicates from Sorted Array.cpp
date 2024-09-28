class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
      int c=1,z=0;
      if(nums.size()>1 && nums[z]!=nums[z+1])
      {
       while(z+1<nums.size() && nums[z]!=nums[z+1] )
       {
       z++;    
       c++;    
       }        
      }   
         
          
     for(int i=c+1;i<nums.size();i++)
     {   
       if(nums[i] != nums[c] && nums[i]>nums[c] ) 
       {
        nums[c]=nums[i];   
        for(int m=c;m<i;m++)
        {
         nums[m]=nums[i];   
        }  
        c++;   
       }
     }
     if(c>nums.size())
       c=nums.size();  
     return c;   
    }
};