/*
https://cses.fi/problemset/task/1073
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
ll n,a;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    ll ans=0,ans1=0;
    vector<ll> v;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        ll it=upper_bound(v.begin(),v.end(),arr[i])-v.begin();
        if(v.size()==it){
            v.push_back(arr[i]);
        }
        else{
            v[it]=arr[i];
        }
    }
    cout<<v.size();
}