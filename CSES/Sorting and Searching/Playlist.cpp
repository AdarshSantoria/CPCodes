/*
https://cses.fi/problemset/task/2217
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
ll n,a;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    ll ans=0,ans1=0;
    map<ll,ll> m;
    queue<ll> q;
    for(ll i=0;i<n;i++){
        cin>>a;
        if(!m[a]){
            m[a]=1;
            q.push(a);
            ans++;
            ans1=max(ans,ans1);
        }
        else{
            while(q.front()!=a){
                m[q.front()]=0;
                q.pop();
                ans--;
            }
            q.pop();
            q.push(a);
        }
    }
    cout<<ans1;
}