#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000 + 5;

int parent[MAX];

int findSet(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = findSet(parent[x]);
}

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> leader(n + 1);
    map<int, int> valueToLeader;
    map<int, int> leaderToValue;
    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (valueToLeader.find(x) == valueToLeader.end()) {
            valueToLeader[x] = i;
            leaderToValue[i] = x;
        }

        leader[i] = valueToLeader[x];
    }
    while()

}
