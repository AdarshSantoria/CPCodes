/*
https://cses.fi/problemset/task/1634
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
ll m[(ll)(1e7)];
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,k,a=0,b=0,c=0,g=0;
    string s,s1;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    m[0]=1;
    for(ll i=1;i<=k;i++){
        b=LLONG_MAX;
        for(ll j=0;j<n;j++){
            if(i-arr[j]>-1 && m[i-arr[j]]) b=min(1+m[i-arr[j]],b);
        }
        if(b!=LLONG_MAX) m[i]=b;
    }
    cout<<m[k]-1;
}