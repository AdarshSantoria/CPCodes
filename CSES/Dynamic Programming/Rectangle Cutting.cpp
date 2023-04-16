/*
https://cses.fi/problemset/task/1744
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[600][600];
ll n,m;
string s,s1;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m;
    for(ll i=0;i<=n;i++)
        for(ll j=0;j<=m;j++)
            if(i || j) arr[i][j]=INT_MAX;
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++){
            if(i==j) arr[i][j]=0;
            for(ll k=0;k<i;k++) arr[i][j]=min(arr[i][j],1+arr[i-k-1][j]+arr[k][j]);
            for(ll k=0;k<j;k++) arr[i][j]=min(arr[i][j],1+arr[i][j-k-1]+arr[i][k]);
        }
    cout<<arr[n-1][m-1];
}