#include<bits/stdc++.h>
using namespace std;
#define ll long long
// map<char,string> m1;
map<string,ll> m2;
ll t,r,c,n;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>t;
    for(ll a=0;a<t;a++){
        cin>>n>>r>>c;
        ll t=100;
        if(r%2==0){
            t/=2;
            r/=2;
        }
        if(r%2==0){
            t/=2;
            r/=2;
        }
        if(r%5==0){
            t/=5;
            r/=5;
        }
        if(r%5==0){
            t/=5;
            r/=5;
        }
        bool b1=1;
        if(n<t) b1=0;
        ll hi=99,lo=1;
        if(r==0) lo--;
        if(t==r) hi++;
        if(b1 && c>=lo && c<=hi) cout<<"Case #"<<a+1<<": POSSIBLE\n";
        else cout<<"Case #"<<a+1<<": Broken\n";
    }
}