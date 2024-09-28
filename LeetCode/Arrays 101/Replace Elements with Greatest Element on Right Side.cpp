class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int maxi=0;
     for(int i=0;i<arr.size()-1;i++)
     {
      for(int k=i+1;k<arr.size();k++)
      {
       if(arr[k]>maxi)
       {
        maxi=arr[k];   
       }    
      }
      arr[i]=maxi;
      maxi=0;   
     }
     arr[arr.size()-1]=-1;
      return arr;  
        
    }
};