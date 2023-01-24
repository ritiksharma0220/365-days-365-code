#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ss string 
ll i,j,k,t,flag;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll h=1;
    for ( i = 0; i < n; i++)
    {
        if (a[i]==0&&a[i+1]==0)
        {
            cout<<-1<<endl;
            return;
        }
        else if (a[i]==1&& a[i-1]==1)
        {
            h=h+5;
    
        }
        else if (a[i]==1)
        {
            h=h+1;
        }
        
    }
    cout<<h<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
