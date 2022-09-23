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
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,m,k,a=0,b=0,c=0,g=0;
    string s,s1;
    cin>>n>>m;
    ll arr[n];
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    for(ll i=1;i<n;i++){
        if(mp[i]>mp[i+1]) g++;
    }
    while(m--){
        cin>>a>>b;
        c=0;
        a--;
        b--;
        if(arr[a]!=n){
            if(mp[arr[a]+1]>a && mp[arr[a]+1]<=b) c++;
            else if (mp[arr[a]+1]<a && mp[arr[a]+1]>=b) c--;
        }
        if(arr[a]!=1){
            if(mp[arr[a]-1]<a && mp[arr[a]-1]>=b) c++;
            else if (mp[arr[a]-1]>a && mp[arr[a]-1]<=b) c--;
        }
        if(arr[b]!=n){
            if(mp[arr[b]+1]>b && mp[arr[b]+1]<=a) c++;
            else if (mp[arr[b]+1]<b && mp[arr[b]+1]>=a) c--;
        }
        if(arr[b]!=1){
            if(mp[arr[b]-1]<b && mp[arr[b]-1]>=a) c++;
            else if (mp[arr[b]-1]>b && mp[arr[b]-1]<=a) c--;
        }
        if(abs(arr[a]-arr[b])==1){
            if((a-b)*(arr[a]-arr[b])>0){
                c--;
            }
            else c++;
        }
        swap(arr[a],arr[b]);
        mp[arr[a]]=a;
        mp[arr[b]]=b;
        g+=c;
        cout<<g+1<<'\n';
    }
}