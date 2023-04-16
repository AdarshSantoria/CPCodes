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
        ll n1=n/26,i=0;
        while(i*(i+1)/2<=n1) i++;
        i--;
        n-=26*i*(i+1)/2;
        i++;
        if(n==0) cout<<"Case #"<<a+1<<": Z\n";
        else cout<<"Case #"<<a+1<<": "<<(char)('A'+(n-1)/i)<<'\n';
    }
}