#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n>>a;
        vector<int> b(105);
        for (int i = 1; i <=n; i++)
        {
            int x;
            cin>>x;
            b[x]++;
        }
        int total=0;
        for (int i = 1; i <=n; i++)
        {
            if (b[i])
            {
                total+=min(a,b[i]);
            }
        }
        cout<<total<<endl;
    }
    
}