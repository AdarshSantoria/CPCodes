/*
https://cses.fi/problemset/task/1158
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
    string srr[n];
    pair<ll,ll> arr[n];
    for(long long i=0;i<n;i++){ 
        cin>>arr[i].first;
    }
    for(long long i=0;i<n;i++){ 
        cin>>arr[i].second;
    }
    sort(arr,arr+n);
    for(ll l=0;l<n;l++){
        for(ll i=k;i-arr[l].first>=0;i--){
            if(m[i-arr[l].first]){
                m[i]=max(m[i],m[i-arr[l].first]+arr[l].second);
            }
        }
        m[arr[l].first]=max(m[arr[l].first],arr[l].second);
    }
    for(ll l=1;l<=k;l++){
        g=max(g,m[l]);
    }
    cout<<g;
}