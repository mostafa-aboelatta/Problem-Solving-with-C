class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
     for(int i=0;i<(nums.size()-1);i++)
     {
      if(nums[i]==0)
      {
       nums.insert(nums.begin()+i+1,0);
       nums.pop_back();
       i++;
      }
     }      
    }
};