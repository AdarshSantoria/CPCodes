/*
https://cses.fi/problemset/task/1755
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long takat(long long a,long long b){
    long long c=a;
    if(b==0){
        a=1;
    }
    for(long long i=0;i<b-1;i++){
        a=(a*c)%(ll)(1e9+7);
    }
    return a;
    }
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,a=0,b,x,y=0;
    string s,s1;
    cin>>n;
    vector <string> v1,v2;
    for(ll i=0;i<n;i++){
        s+='0';
    }
    v1.push_back(s);
    cout<<s<<'\n';
    s.pop_back();
    s+='1';
    v1.push_back(s);
    cout<<s<<'\n';
    v2=v1;
    reverse(v1.begin(),v1.end());
    for(ll i=1;i<n;i++){
        for(ll j=0;j<v1.size();j++){
            s=v1[j];
            s[n-i-1]='1';
            v2.push_back(s);
            cout<<s<<'\n';
        }
        v1=v2;
        reverse(v1.begin(),v1.end());
    }
}