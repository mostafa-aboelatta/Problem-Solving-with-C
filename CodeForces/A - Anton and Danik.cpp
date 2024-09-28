#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=0,d=0,n=0;
cin>>n;
char s[n];
cin>>s;
for(int i=0;i<n;i++)
{
 if(s[i]=='A')
 a++;
 else
 d++;
}
if(a==d)
    cout<<"Friendship";
else if(a>d)
    cout<<"Anton";
else
    cout<<"Danik";
 return 0;
}