#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,r,c,n,m;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>t;
    for(ll a=0;a<t;a++){
        cin>>n;
        map<ll,bool> m1;
        ll arr[n];
        bool b1=1;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(i && arr[i]==arr[i-1]) continue;
            if(m1[arr[i]]) b1=0;
            m1[arr[i]]=1;
            v.push_back(arr[i]);
        }
        if (b1){
            cout<<"Case #"<<a+1<<": ";
            for(int i:v) cout<<i<<' ';
            cout<<'\n';
        }
        else cout<<"Case #"<<a+1<<": IMPOSSIBLE\n";
    }
}