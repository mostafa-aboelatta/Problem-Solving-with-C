class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int counter=0,Maxi=0;
        for(int i=0;i<nums.size();i++)
        {
         if(nums[i]==1)
         {
          counter++;   
         }
         else
         {
          counter=0;   
         }
         if(counter>Maxi)
          Maxi=counter; 
            
        } 
        return Maxi;
    }
    
};