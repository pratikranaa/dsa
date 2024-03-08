#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;

            int i = -1, j = -1;
            for (int idx = l - 1; idx < r; ++idx) {
                for (int jdx = idx + 1; jdx < r; ++jdx) {
                    if (a[idx] != a[jdx]) {
                        i = idx + 2;
                        j = jdx + 1;
                        break;
                    }
                }
                if (i != -1)
                    break;
            }
            cout << i << " " << j << endl;
        }
    }

    return 0;
}
