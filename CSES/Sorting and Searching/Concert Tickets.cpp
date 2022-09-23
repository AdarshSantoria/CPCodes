/*
https://cses.fi/problemset/task/1091
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
    ll n,m,k,a=0,b=0,c=0;
    string s,s1;
    cin>>n>>m;
    multiset<ll> ms;
    for(ll i=0;i<n;i++){
        cin>>a;
        ms.insert(a);
    }
    while(m--){
        cin>>a;
        if(ms.size()==0) cout<<-1<<'\n';
        else if(*ms.begin()>a) cout<<-1<<'\n';
        else{
            auto it=ms.upper_bound(a);
            it--;
            cout<<*it<<'\n';
            ms.erase(it);
        }
    }
}