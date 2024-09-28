class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;int j=nums.size()-1;
        int n=nums.size();
        vector<int> res(n,0);
        for(int p=n-1;p>=0;p--)
        {
            if(abs(nums[i])>=abs(nums[j]))
            {
                res[p]=nums[i]*nums[i];
                i++;
            }
            else
            {
                res[p]=nums[j]*nums[j];
                j--;
            }

        }
        return res;
    }
};