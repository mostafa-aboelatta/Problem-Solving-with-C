#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=0,ans=0,c=0;
int arr[3];
cin>>n;
while(c<n)
{
 for(int i=0;i<3;i++)
 {
  cin>>arr[i];
 }
 if((arr[0]==1 && arr[1]==1) || (arr[0]==1 && arr[2]==1) || (arr[2]==1 && arr[1]==1))
 ans++;
 c++;
}
cout<<ans;
 return 0;
}