#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    int I;
    cin >> I;
    while (I--) {
        int N, M;
        cin >> N >> M;
        vector<int> cnt(M + 1, 0);
        vector<int> psum(M + 1, 0);
        for (int i = 1; i <= N; i++) {
            int curr;
            cin >> curr;
            cnt[curr]++;
        }
        for (int i = 1; i <= M; i++) {
            psum[i] = psum[i - 1] + cnt[i];
        }
        vector<ll> ans(M + 1, 0);
        for (int cut = 1; cut <= min(M, 18); cut++) {
            ll maxc = 0;
            ll limit = (1LL << cut) - 1;
            ll power = (1LL << cut);
            for (int x = 1; x <= M; x++) {
             ll currc = 0;
                for (int mul = 1; 1LL * mul * x <= M; mul++) {
                    int lt = mul * x;
                    int rt = min(M, lt + x - 1);
                    ll count = psum[rt] - psum[lt - 1];
                    currc += min(1LL * mul, limit) * count;
                
                if (power * x <= M) {
                    currc += cnt[power * x];
                }
                maxc = max(maxc, currc);
            }
            ans[cut] = maxc;
        }
        for (int cut = 1; cut <= M; cut++) {
            cout << ans[min(cut, 18)]
                 << (cut == M ? '\n' : ' ');
        }
    }
}
    return 0;
}