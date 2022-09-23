/*
https://cses.fi/problemset/task/1090
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
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll hi=n-1,lo=0;
    while(hi>=lo){
        c=0;
        if(hi>=lo && b+arr[hi]<=m){
            b+=arr[hi];
            hi--;
            c++;
        }
        if(hi>=lo && b+arr[hi]<=m){
            b+=arr[hi];
            hi--;
            c++;
        }
        if(hi>=lo && b+arr[lo]<=m && c<2){
            b+=arr[lo];
            lo++;
            c++;
        }
        if(hi>=lo && b+arr[lo]<=m && c<2){
            b+=arr[lo];
            lo++;
            c++;
        }
        a++;
        b=0;
    }
    cout<<a;
}