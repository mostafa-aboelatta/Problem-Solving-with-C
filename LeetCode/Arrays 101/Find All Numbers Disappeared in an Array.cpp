
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
      int absolute_index;
        
      for(int i=0;i<nums.size();i++)
      {
       absolute_index=abs(nums[i])-1;
       if(nums[absolute_index]>0) 
       {
        nums[absolute_index]*=-1;    
       }
          
      }
      vector<int>arr;  
       for(int k=0;k<nums.size();k++)
       {
        if(nums[k]>0)
        {
         arr.push_back(k+1);
        }
       }
        
        
     return arr;
        
    }
};
