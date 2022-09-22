/*
https://cses.fi/problemset/task/1083
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n,a=0,b,x=0,y;
    cin>>n;
    unordered_map<ll,bool> m;
    for(ll i=0;i<n-1;i++){
        cin>>b;
        m[b]=1;
    }
    for(ll i=1;i<n+1;i++){
        if(!m[i]) cout<<i;
    }
}