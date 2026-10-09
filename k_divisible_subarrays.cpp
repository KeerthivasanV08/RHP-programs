#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> dp(n+1,0);
    int r =0;
    map<int,int> m;
    m[0] = 0;
    for(int i=1;i<n+1;i++){
        int curr;cin>>curr;
        r = (r+curr)%k;
        if(m.find(r) != m.end()){
            int previdx  = m[r];
            dp[i] = max(dp[i-1],1+dp[previdx]);
        }
        else{
            dp[i] = dp[i-1];
        }
        m[r]  = i;
    }
    cout<<dp[n]<<endl;
}