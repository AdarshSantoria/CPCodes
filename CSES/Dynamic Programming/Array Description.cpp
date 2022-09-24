/*
https://cses.fi/problemset/task/1746
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
ll m[100][100000];
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,k,a=0,b=1,c=0;
    string s,s1;
    cin>>n>>k;
    string srr[n];
    ll arr[n],lo[n],hi[n];
    for(long long i=0;i<n;i++){ 
        cin>>arr[i];
        if(arr[i]){
            lo[i]=arr[i];
            hi[i]=arr[i];
        }
        else if(i==0){
            lo[i]=1;
            hi[i]=k;
        }
        else{
            hi[i]=min(k,hi[i-1]+1);
            lo[i]=max(b,lo[i-1]-1);
        }
    }
    for(long long i=n-1;i>0;i--){
        hi[i-1]=min(1+hi[i],hi[i-1]);
        lo[i-1]=max(-1+lo[i],lo[i-1]);
    }
    for(ll j=lo[0];j<=hi[0];j++){
        m[j-1][0]++;
    }
    for(long long i=1;i<n;i++){
        for(ll j=lo[i];j<=hi[i];j++){
            if(j-2>-1 && j<100) m[j-1][i]=(m[j-1][i-1]+m[j][i-1]+m[j-2][i-1])%(ll)(1e9+7);
            else if(j-2>-1) m[j-1][i]=(m[j-1][i-1]+m[j-2][i-1])%(ll)(1e9+7);
            else m[j-1][i]=(m[j-1][i-1]+m[j][i-1])%(ll)(1e9+7);
        }
        cout<<'\n';
    }
    for(ll j=lo[n-1];j<=hi[n-1];j++){
        a=(a+m[j-1][n-1])%(ll)(1e9+7);
    }
    cout<<a;
}