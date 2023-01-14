#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i,j,k,t,flag;
int main(){
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for ( i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        flag=0;
        for ( i = 1; i < n; i++)
        {
            if (a[i]%a[0]==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
            
        }
        if (flag==0)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    
}