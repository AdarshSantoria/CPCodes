/*
https://cses.fi/problemset/task/1643
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
bool f(pair<ll,ll> a,pair<ll,ll> b){
    if(a.second!=b.second) return b.second>a.second;
    return b.first>a.first;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,m,k=LLONG_MIN,a=LLONG_MIN,b=LLONG_MAX,c=0;
    string s,s1;
    cin>>n;
    ll arr[n],mn[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(ll i=0;i<n;i++){
        b=min(b,arr[i]);
        mn[i]=b;
    }
    for(ll i=n-1;i>-1;i--){
        a=max(a,arr[i]);
        k=max(k,a-mn[i-1]);
    }
    k=max(k,*max_element(arr,arr+n));
    cout<<k;
}