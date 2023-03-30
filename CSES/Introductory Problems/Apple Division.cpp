/*
https://cses.fi/problemset/task/1623
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
ll n;
ll arr[30];
map<ll,bool> m;
map<ll,ll> m1;
ll func(ll ans,ll i){
    if(i==0) return abs(ans);
    return min(func(ans-2*arr[i],i-1),func(ans,i-1));
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        ans+=arr[i];
    }
    cout<<func(ans,n-1);
}