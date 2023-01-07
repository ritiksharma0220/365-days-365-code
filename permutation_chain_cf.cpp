#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i,j,k,t,flag;

int main(){
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>a;
        cout<<n<<endl;
        for ( i = 0; i < n; i++)
        {
            a.push_back(i+1);
            cout<<i+1<<" ";
        }
        cout<<endl;
        i=0,j=n-1;
        while (i<j)
        {
            swap(a[i],a[i+1]);
            i++;
            for (auto x:a)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    
}