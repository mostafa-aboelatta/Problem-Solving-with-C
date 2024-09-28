#include<bits/stdc++.h>
using namespace std;
int main()
{
int c=0,diff=0,flag=1;
cin>>c;
int arr[c]={0};
 
 
for(int i=0;i<c;i++)
    cin>>arr[i];
 
 
while(flag>0)
{
 flag=0;
 
 for(int j=0;j<c-1;j++)
{
 if(arr[j]>arr[j+1])
 {
  diff=arr[j]-arr[j+1];
  arr[j]-=diff;
    arr[j+1]+=diff;
 for(int p=0;p<c-1;p++)
 {
   if(arr[p]>arr[p+1])
    flag++;
 }
 }
}
}
 
 
for(int l=0;l<c;l++)
    cout<<arr[l]<<" ";
 
 return 0;
}