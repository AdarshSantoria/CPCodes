/*
https://cses.fi/problemset/task/1633
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long takat(long long a,long long b){
    long long c=a;
    if(b==0){
        a=1;
    }
    for(long long i=0;i<b-1;i++){
        a=(a*c)%(ll)(1e9+7);
    }
    return a;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,k,a=0,b=0,c=0,g=0;
    string s,s1;
    cin>>n;
    unordered_map<ll,ll> m;
    m[0]=1;
    for(ll i=1;i<=n;i++){
        m[i]=(m[i-1]+m[i-2]+m[i-3]+m[i-4]+m[i-5]+m[i-6])%(ll)(1e9+7);
    }
    cout<<m[n];
}