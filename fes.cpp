#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void getint(vector<int>& arr, int N){
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
}

int main(){
    int N;
    cin >> N;
    vector<int> u(N), m(N), l(N);
    getint(u, N);
    getint(m, N);
    getint(l, N);

    sort(u.begin(), u.end());
    sort(m.begin(), m.end());
    sort(l.begin(), l.end());

    vector<ll> pmid(N, 0);
    for(int i = 0; i < N; i++){
        auto it = upper_bound(l.begin(), l.end(), m[i]);
        pmid[i] = l.end() - it;
    }
    for(int i = 1; i < N; i++){
        pmid[i] += pmid[i - 1];
    }
    ll ans = 0;
    for(int i = 0; i < N; i++){
        auto it = lower_bound(m.begin(), m.end(), u[i]);
        if(it != m.begin()){
            int midx = it - m.begin();
            ans += pmid[midx - 1];
        }
    }
    cout << ans << endl;
}

