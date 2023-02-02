#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ss string
ll i,j,k,l,flag,t;

int main(){
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n>>k;
        flag=0;
        vector<ll>v(n);
        for ( i = 0; i <n; i++)
        {
            cin>>v[i];
    
        }
        
            ll num=1,total =0;
            for ( i = 0; i < n; i++)
            {
                if(v[i]==num){
                    num++;
                }
                else
                {
                    total+=1;
                }
                
            }
            ll ans=(total+k-1)/k;
            cout<<ans<<endl;
        
        
    }
    
}
