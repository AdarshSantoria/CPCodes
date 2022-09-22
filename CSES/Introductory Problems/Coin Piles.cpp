/*
https://cses.fi/problemset/task/1754
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n,a,b,x,y=0;
    string s;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(b>a) swap(a,b);
        x=2*b-a;
        if(x>=0 && x%3==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}