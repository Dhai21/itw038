#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int k,l,m,n,d;
        cin>>k>>l>>m>>n>>d;
int count =0;
        for(int i=1;i<=d;i++)
        {
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            {
                count++;
            }
            else{}
            if(d<k && d<l && d<l && d<m){
                count=0;
                break;
            }
        }
        cout<<count<<endl;
        
    }
