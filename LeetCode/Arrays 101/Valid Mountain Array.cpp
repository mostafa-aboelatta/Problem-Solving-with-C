class Solution {
public:
    bool validMountainArray(vector<int>& arr)
    {
     bool check=true;
     int maxi=0, ind=0;   
     int counter=0;
     for(int i=0;i<arr.size()-1;i++)
     {
      if(arr[i]>maxi)
      {
       maxi=arr[i];
       ind=i;   
      }
      if(arr[i]==arr[i+1])
      {
       check=false;
       return check;   
      }   
     }
        
     if(ind==0)
     {
      check=false;
      return check;   
     }
        
     for(int k=0;k<ind-1;k++)
     {
      if(arr[k]>arr[k+1] )
      {
       check=false;
       break;   
      }    
     } 
        
     for(int k=ind;k<arr.size()-1;k++)
     {
      if(arr[k]<arr[k+1] )
      {
       check=false;
       break;   
      }    
     }
         return check;
    }
};