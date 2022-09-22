/*
https://cses.fi/problemset/task/1070
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,a=0,b,x,y=0;
    string s;
    cin>>n;
    if(n==1) cout<<1;
    else if(n<4) cout<<"NO SOLUTION";
    else{
        for(ll i=2;i<=n;i+=2) cout<<i<<' ';
        for(ll i=1;i<=n;i+=2) cout<<i<<' ';
    }
}