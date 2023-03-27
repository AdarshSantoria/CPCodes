/*
https://cses.fi/problemset/task/2165
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
void solve(int a, int b, int c, int n) {
	if (n == 0) return;
	solve(a, c, b, n-1);
	cout<<a<<' '<<c<<endl;
	solve(b, a, c, n-1);
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    cout<<takat(2,n)-1<<'\n';
    solve(1,2,3,n);
}