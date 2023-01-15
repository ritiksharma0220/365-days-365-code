#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solution(int N){
    if (N==1||N==0)
    {
        return 1;
    }
    int recres=solution(N-1);
    int result=N*recres;
    return result;
}
int main(){
    ll N;
    cin>>N;
    int sol=solution(N);
    cout<<sol;
} 