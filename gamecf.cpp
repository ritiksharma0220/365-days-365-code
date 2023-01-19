#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i, j, k, t, flag;
void solution()
{
}
int main()
{
    int a,count=0;
    cin>>a;
    int x[a],y[a];
    for(int i=0; i<a; i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(x[i]==y[j])
            {
                count++;
            }
        }
    }
    cout<<count;
}
