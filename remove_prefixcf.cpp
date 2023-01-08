#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string;
ll i, j, k,flag,t;
int main(){
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        map<ll,ll> m;
        ll a[n];
        flag=0;
        ll r=n;
        for ( i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        i=0;
        while (m.size()!=r)
        {
            flag++;
            m[a[i]]--;
            if (m[a[i]]==0)
            {
                m.erase(a[i]);
                i++;
                r--;
            }
        }
        cout<<flag<<endl;
    }
    
}