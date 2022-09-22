/*
https://cses.fi/problemset/task/1069
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n,a=1,b,x=1,y;
    string s;
    cin>>s;
    for (ll i=1;i<s.size();i++){
        if(s[i]==s[i-1]) a++;
        else a=1;
        x=max(a,x);
    }
    cout<<x;
}