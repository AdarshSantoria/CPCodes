/*
https://cses.fi/problemset/task/1640
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
    cin>>n>>m;
    ll arr1[n],arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    ll lo=0,hi=n-1;
    while(hi>lo){
        a=arr1[hi]+arr1[lo];
        if(a>m){
            hi--;
        }
        else if(a<m){
            lo++;
        }
        else{
            b=1;
            ll i=0,j=0;
            for(;i<n;i++){
                if(arr[i]==arr1[lo]){
                    cout<<i+1<<' ';
                    break;
                }
            }
            for(;j<n;j++){
                if(arr[j]==arr1[hi] && j!=i){
                    cout<<j+1;
                    break;
                }
            }
            break;
        }
    }
    if(!b) cout<<"IMPOSSIBLE";
}