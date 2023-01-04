#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ss a,b;
        cin>>a;
        cin>>b;
        ll sign=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]!=b[i]&&(a[i]=='R'||b[i]=='R'))
            {
                sign=1;
                break;
            }
        }
        if (sign==1)
        {
            cout<<"NO"<<endl;
        }
        else{
        cout<<"YES"<<endl;
        }
    }
    
}