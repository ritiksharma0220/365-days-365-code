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

    ss s;
    cin >> s;
    sort(s.begin(),s.end());
    j = s.length();
    flag = 0;
    for (i = 1; i < j; i++)
    {
        if (s[i] != s[i - 1])
        {
            flag++;
        }
    }
    if (flag%2!=0)
    {
        cout << "CHAT WITH HER!";
    }
    else
        cout << "IGNORE HIM!";
    return 0;
}
