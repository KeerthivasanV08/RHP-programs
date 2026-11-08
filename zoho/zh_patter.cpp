#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ct = n - 1;

    for (int i = 1; i <= n; i++) {

        cout << string(ct * 2, ' ');
        ct--;

        int k = i;
        int gap = n - 1;

        for (int j = 1; j <= i; j++) {
            cout << k << "\t";
            k += gap;
            gap--;
        }

        cout << endl;
    }

    return 0;
}
