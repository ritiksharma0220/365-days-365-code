#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
ll i, j, k, flag, t;

int main()
{
    ll n, m, ans=0;
    cin >> n >> m;
    ll a;
    for ( a = 0; a * a <= n && a <= m; ++a)
    {
        ll b = n - a * a;
        if (a + b * b == m)
        {
            ans+= 1;
        }
    }

    cout << ans << endl;
    return 0;
}
