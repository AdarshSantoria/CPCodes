/*
https://cses.fi/problemset/task/1071
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,a,b,x,y=0;
    string s;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>=b){
            if(a%2==0){
                cout<<a*a-b+1;
            }
            else cout<<(a-1)*(a-1)+b;
        }
        else{
            if(b%2==1){
                cout<<b*b-a+1;
            }
            else cout<<(b-1)*(b-1)+a;
        }
        cout<<'\n';
    }
}