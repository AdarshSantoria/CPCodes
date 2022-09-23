/*
https://cses.fi/problemset/task/1621
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
    ll n,a=0,b,x,y=0;
    string s,s1;
    cin>>n;
    unordered_map<ll,bool> m;
    for(ll i=0;i<n;i++){
        cin>>b;
        m[b]=1;
    }
    cout<<m.size();
}