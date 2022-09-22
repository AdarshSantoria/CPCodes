/*
https://cses.fi/problemset/task/1072
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
    for(ll i=1;i<=n;i++){
        if(i==3){
            a=1;
        }
        else if(i>3){
            a+=i-2;
        }
        cout<<i*i*(i*i-1)/2-8*a<<'\n';
    }
}