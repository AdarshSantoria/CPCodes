/*
https://cses.fi/problemset/task/1619/
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
map<ll,ll> mp;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,m,k,a=0,b=0,c=0;
    string s,s1;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll lo=0,hi=n;
while(hi>lo+1){
    ll mid=(hi+lo)/2;
    a=0;
    b=0;
        for(ll i=0;i<n;i++){
            a+=abs(arr[i]-arr[mid]);
            b+=abs(arr[i]-arr[mid+1]);
        }
        if(a>b){
            lo=mid;
        }
        else if(a<b){
            hi=mid;
        }
        else{
            lo=mid;
            break;
        }
}
a=0;
b=0;
for(ll i=0;i<n;i++){
    if(hi!=n) a+=abs(arr[i]-arr[hi]);
    b+=abs(arr[i]-arr[lo]);
}
if(a && b) cout<<min(a,b);
else cout<<max(a,b);
}