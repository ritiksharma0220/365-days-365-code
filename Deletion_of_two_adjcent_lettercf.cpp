#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ss string 
ll i,j,k,t,flag;

void solve()
{
    ss s;
    cin>>s;
    ll l=s.size();
    char st;
    cin>>st;
    flag =0;
    for ( i = 0; i <l; i++)
    {
        if (s[i]==st    )
        {
            ll left=i-0, right=l-i-1;
            if (left%2==0 && right%2==0)
            {
                flag=1;
                break;
            }
            
        }
        
    }
    if (flag==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
