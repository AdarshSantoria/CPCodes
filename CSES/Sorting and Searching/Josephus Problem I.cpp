/*
https://cses.fi/problemset/task/2162
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
ll n,m,a;
set<ll> s;
multiset<ll> m1;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    for(ll i=1;i<=n;i++) s.insert(i);
    auto it=s.begin();
    while(s.size()){
        if(it==s.end()){
            it=s.begin();
        }
        it++;
        if(it==s.end()){
            it=s.begin();
        }
        cout<<*it<<' ';
        auto i=it;
        it++;
        s.erase(i);
    }
}