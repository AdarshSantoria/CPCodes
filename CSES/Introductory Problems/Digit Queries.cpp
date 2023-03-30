/*
https://cses.fi/problemset/task/1624
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long takat(long long a,long long b){
    long long c=1;
    while(b>0){
        if(b&1) c=(c*a);
        a=(a*a);
        b/=2;
    }
    return c;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll c = 1;
        for (ll p=9;;n-=p,c++,p=9*takat(10,c-1)*c){
            if (n-p<=0) break;
        }
        n--;
        ll x=n/c,y=n%c;
        ll ans=takat(10,c-1)+x;
        string s=to_string(ans);
        cout<<s[y]<<endl;
    }
}