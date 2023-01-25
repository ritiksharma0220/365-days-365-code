#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i,j,k,t,flag=0;
int main(){
    ll a,b,c=0,d=0;
    cin>>t;
    for ( i = 0; i <t; i++)
    {
        cin>>a>>b;
        c+=a;
        d+=b;
        j=d-c;
        flag=max(flag,j);
    }
    cout<<flag<<endl;
}