/*
https://cses.fi/problemset/task/1632/
*/
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ll long long
ll mod;
long long takat(long long a,long long b){
    long long c=1;
    while(b>0){
        if(b&1) c=(c*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return c;
}
ll n,t,m,k;
int main(){
    ll mod=1e9+7;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    t=1;
    while(t--){
        cin>>n>>k;
        ll ans=0;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            v.push_back({b,a});
        }
        sort(v.begin(),v.end());
        multiset<int> m1;
        for(int i=0;i<k;i++) m1.insert(0);
        for(int i=0;i<n;i++){
            auto it=m1.upper_bound(v[i].second);
            if(it==m1.begin()) continue;
            else it--;
            m1.erase(it);
            m1.insert(v[i].first);
            ans++;
        }
        cout<<ans;
    } 
}
