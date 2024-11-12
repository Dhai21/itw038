#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
        long long  int n,sum=0;
        vector<long long> a;
         cin>>n;
         for(int i=0;i<n;i++)
{
    long long x;
    cin>>x;
    a.push_back(x);
   
    sum+=abs(x);
}
cout<<sum<<endl;
     }
}