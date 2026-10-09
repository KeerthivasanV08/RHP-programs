#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for(int i = 0; i < n; i++)cin >> a[i];
    sort(a.begin(), a.end());
    long long carry = 0;

    for(int i = 0; i <= a[n-1]; i++){
        auto it = lower_bound(a.begin(), a.end(), i);
        int c = a.end() - it;
        carry += c;
        ans.push_back(carry % 10);
        carry /= 10;
    }

    while (carry != 0) {
        ans.push_back(carry % 10);
        carry /= 10;
    }
    
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
