/*
https://cses.fi/problemset/task/1068
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ll n,a=0,b,x=0,y;
    cin>>n;
    cout<<n<<' ';
    while(n!=1){
        if(n%2){
            n=3*n+1;
        }
        else n/=2;
        cout<<n<<' ';
    }
}