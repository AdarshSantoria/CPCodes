/*
https://cses.fi/problemset/task/2216
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
    ll n,m,k,a=0,b=0,c=0;
    string s,s1;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    for(ll i=1;i<n;i++){
        if(mp[i]>mp[i+1]) a++;
    }
    cout<<a+1;
}