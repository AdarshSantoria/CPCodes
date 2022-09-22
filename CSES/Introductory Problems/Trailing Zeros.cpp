/*
https://cses.fi/problemset/task/1618
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n,a=0,b=5,x,y=0;
    string s;
    cin>>n;
    while(b<=n){
        a+=n/b;
        b*=5;
    }
    cout<<a;
}