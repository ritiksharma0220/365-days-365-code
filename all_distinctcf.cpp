#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i,j,k,flag,t;
int main(){
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        map<ll,ll> m;
        int x;
        for ( i = 0; i < n; i++)
        {
            cin>>x;
            m[x]++;
        }
        ll ans=m.size();
        if ((n-ans)%2!=0)
        {
            ans--;
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
    }
    
}