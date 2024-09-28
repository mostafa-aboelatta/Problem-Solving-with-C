class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
     int s=heights.size();   
     int arr[s],counter=0;
     
     for(int i=0;i<heights.size();i++)
     {
      arr[i]=heights[i];   
     }
        
     sort(arr,arr+s);
     
     for(int j=0;j<heights.size();j++)
     {
      if(heights[j] != arr[j])
       counter++;   
     }
       return counter; 
    }
};
