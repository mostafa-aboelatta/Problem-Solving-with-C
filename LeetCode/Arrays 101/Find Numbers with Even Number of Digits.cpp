class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
     int ED=0,counter=0;
      for(int i=0; i<nums.size();i++)
      {
       while((nums[i]/10)>0)
       {
        nums[i]/=10;
        counter++;   
       }
       counter++;   
       if((counter%2)==0)
         ED++;
       counter=0;   
      }    
     return ED;   
    }
};