/*
https://cses.fi/problemset/task/1629/
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
    ll n,m,k,a=0,b=0,c=0;
    string s,s1;
    cin>>n;
    pair <ll,ll> arr[n];
    ll arr1[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        arr1[i]=0;
    }
    sort(arr,arr+n,f);
    for(ll i=0;i<n;i++){
        if(arr[i].first>=b){
            a++;
            b=arr[i].second;
        }
    }
    cout<<a;
}