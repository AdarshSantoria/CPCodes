/*
https://cses.fi/problemset/task/1638
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
ll m[(ll)(1e7)];
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,k,a=0,b=0,c=0,g=0;
    string s,s1;
    cin>>n;
    string srr[n];
    ll arr[n][n];
    for(long long i=0;i<n;i++){ 
        cin>>srr[i];
    }
    for(long long i=0;i<n;i++){ 
        for(long long j=0;j<n;j++){
            arr[i][j]=0;
        }
        if(srr[0][0]!='*') arr[0][0]=1;
        for(long long j=0;j<n;j++){
            if(j>0 && srr[i][j]!='*') arr[i][j]=(arr[i][j]+arr[i][j-1])%(ll)(1e9+7);
            if(i>0 && srr[i][j]!='*') arr[i][j]=(arr[i][j]+arr[i-1][j])%(ll)(1e9+7);
        }
    }
    cout<<arr[n-1][n-1];
}