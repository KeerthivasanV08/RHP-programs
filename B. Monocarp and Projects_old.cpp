#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    vector<ll> arr(3);
    for(int i=1;i<=3;i++){
        cin>>arr[i];
    }
    int x = arr[1];
    int y = arr[0];
    int ans  = 0;
    for(int i=1;i<arr[3];i++){
        ans += x%y;
        x = x+1;
        y = y+1;
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