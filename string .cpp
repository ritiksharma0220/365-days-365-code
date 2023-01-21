#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i, j, k, t, flag;
void solution()
{
    ss s;
    cin >> s;
    if (s.size() % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    j=s.size()/2;
    i=0;
    while (j<s.size())
    {
        if (s[i]!=s[j])
        {
            cout<<"NO"<<endl;
            return;
        }
        i++,j++;
    }
    cout<<"YES"<<endl;
    return;
}
int main()
{
    cin >> t;
    while (t--)
    {
        solution();
    }
}
