#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i,j,k,flag;
void solution(ll a[], ll n){
    flag=0;
    for ( i = 1; i<n; i++)
    {
        if (a[0]<a[i])
        {
            flag+=1;
        }
    }
    cout<<flag<<endl;
}
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll a[4];
        for ( i = 0; i <4; i++)
        {
            cin>>a[i];
        }
        solution(a,4);
    }
    
}