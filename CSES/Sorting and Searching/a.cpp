/*
https://cses.fi/problemset/task/1193
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool arr[2000][2000];
string srr[2000];
string str;
queue<pair<ll,ll>> q;
queue<string> q1;
void bfs(ll n,ll k){
    while(q.size()){
        if(str.size()) break;
        ll a=q.front().first,b=q.front().second;
        q.pop();
        string s1=q1.front();
        q1.pop();
        if(a && srr[a-1][b]!='#' && !arr[a-1][b]){
            arr[a-1][b]=1;
            q.push({a-1,b});
            q1.push(s1+'U');
            if(srr[a-1][b]=='B'){
                str=s1+'U';
                break;
            }
        }
        if(b && srr[a][b-1]!='#' && !arr[a][b-1]){
            arr[a][b-1]=1;
            q.push({a,b-1});
            q1.push(s1+'L');
            if(srr[a][b-1]=='B'){
                str=s1+'L';
                break;
            }
        }
        if(a!=n-1 && srr[a+1][b]!='#' && !arr[a+1][b]){
            arr[a+1][b]=1;
            q.push({a+1,b});
            q1.push(s1+'D');
            if(srr[a+1][b]=='B'){
                str=s1+'D';
                break;
            }
        }
        if(b!=k-1 && srr[a][b+1]!='#' && !arr[a][b+1]){
            arr[a][b+1]=1;
            q.push({a,b+1});
            q1.push(s1+'R');
            if(srr[a][b+1]=='B'){
                str=s1+'R';
                break;
            }
        }
    }
    return;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,k,a=0,b=1,c=0;
    string s="",s1;
    cin>>n>>k;
    for(ll i=0;i<n;i++) cin>>srr[i];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<k;j++){
            if(srr[i][j]=='A'){
                q.push({i,j});
                arr[i][j]=1;
                q1.push("");
                bfs(n,k);
                break;
            }
        }
    }
    if(str.size()) cout<<"YES\n"<<str.size()<<'\n'<<str;
    else cout<<"NO";
}