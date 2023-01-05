#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i,j,k,flag;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for ( i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for ( i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        flag=0;
        ll flag2=1;
        for ( i = 0; i <n; i++)
        {
            if (a[i]!=b[i])
            {
                flag+=1;
            }
        }
        sort(a,a+n);
        sort(b,b+n);
        for ( i = 0; i < n; i++)
        {
            if (a[i]!=b[i])
            {
                flag2+=1;
            }
        }
        
        cout<<min(flag2,flag)<<endl;
    }
    
}