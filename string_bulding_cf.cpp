#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll i, j, k, flag;
#define ss string
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        flag=1;
        ll cnt;
        for (i = 0; i <s.size(); i++)
        {
            int cnt=1;
            while (s[i]==s[i+1]&& i+1<s.size())
            {
                cnt++;
            }
            if (cnt<2)
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
}