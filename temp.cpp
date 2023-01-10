#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i,j,k,t,flag;
int main(){
    cin>>t;
    while (t--)
    {
        ll n,k,x;
        map<ll, ll> m;
        for ( i = 0; i < n; i++)
        {
            cin>>x;
            if (m.find(i%k!=m.end()))
            {
                m[i%k]=max(m[i%k],x);
                
            }
            else
                {
                    m[i%k]=x;
                }
        }
            flag=0;
            for (auto it:m)
            {
                ans+=it.second();
            }
            cout<<ans<<endl;
        
    }
    
}