/*
https://cses.fi/problemset/task/1094
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n,a=0,b,x,y=0;
    string s;
    cin>>n>>x;
    for (ll i=1;i<n;i++){
        cin>>b;
        a+=max(y,x-b);
        x=max(b,x);
    }
    cout<<a;
}