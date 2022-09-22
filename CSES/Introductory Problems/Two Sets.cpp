/*
https://cses.fi/problemset/task/1092
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
    if(n%4==1 || n%4==2) cout<<"NO";
    else{
        cout<<"YES\n";
        if (n%4==3){
            cout<<n/2+1<<'\n'<<1<<' '<<2<<' ';
            for(ll i=5;i<=n;i+=2){
                if(i%4==1) cout<<i<<' ';
                else cout<<i-1<<' ';
            }
            cout<<'\n'<<n/2<<'\n'<<3<<' ';
            for(ll i=4;i<=n;i+=2){
                if (i%4==0) cout<<i<<' ';
                else cout<<i+1<<' ';
            }
        }
        else{
            cout<<n/2<<'\n';
            for(ll i=1;i<=n;i+=2){
                if(i%4==1) cout<<i<<' ';
                else cout<<i+1<<' ';
            }
            cout<<'\n'<<n/2<<'\n';
            for(ll i=2;i<=n;i+=2){
                if (i%4==2) cout<<i<<' ';
                else cout<<i-1<<' ';
            }
        }
    }
}