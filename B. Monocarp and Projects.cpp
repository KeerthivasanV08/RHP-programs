#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    ll x,y,k;cin>>x>>y>>k;
    ll ans = 0;ll ctr =0;
    while(ctr<k){
        ll rem = (y+ctr)%(x+ctr);
        if(rem == y-x) break;
        ans += rem;ctr++;
    }
    if(k>ctr){
        ans += (k-ctr)*(y-x);
    }
    cout<<ans<<endl;
}

int main() {
    int I;
    cin >> I;
    while (I--) {
        solve();
    }
    return 0;
}