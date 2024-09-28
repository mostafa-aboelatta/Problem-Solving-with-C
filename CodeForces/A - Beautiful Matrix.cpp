#include<bits/stdc++.h>
using namespace std;
int main()
{
int r=0,arr[5]={0},ans=0;
while(r<5)
{
 for(int c=0;c<5;c++)
 {
   cin>>arr[c];
   if(arr[c]==1)
   {
    ans=abs(2-r)+abs(2-c);
    break;
   }
 }
 r++;
}
cout<<ans;
 return 0;
}