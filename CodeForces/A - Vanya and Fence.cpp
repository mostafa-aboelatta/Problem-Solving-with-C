#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n=0,h=0,ans=0;
 cin>>n>>h;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  if(arr[i]<=h)
    ans++;
  else
    ans+=2;
 }
 cout<<ans;
 return 0;
}