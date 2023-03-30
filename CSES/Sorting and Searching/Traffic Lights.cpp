/*
https://cses.fi/problemset/task/1163
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
    cin>>n>>m;
    m1.insert(n);
    s.insert(0);
    s.insert(n);
    while(m--){
        cin>>a;
        auto it=s.upper_bound(a);
        auto it1=s.lower_bound(a);
        it1--;
        ll d=*it-*it1;
        m1.erase(m1.lower_bound(d));
        m1.insert(*it-a);
        m1.insert(a-*it1);
        it=m1.end();
        it--;
        cout<<*it<<" ";
        s.insert(a);
    }
}