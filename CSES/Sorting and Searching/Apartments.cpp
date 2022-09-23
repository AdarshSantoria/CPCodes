/*
https://cses.fi/problemset/task/1084
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
    ll n,m,k,a=0;
    string s,s1;
    cin>>n>>m>>k;
    ll arr[n],arr1[m];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<m;i++){
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    for(ll i=0,j=0;i<n && j<m;){
        if(arr[i]<=arr1[j]+k && arr[i]>=arr1[j]-k){
            i++;
            j++;
            a++;
        }
        else if(arr[i]>arr1[j]-k) j++;
        else i++;
    }
    cout<<a;
}