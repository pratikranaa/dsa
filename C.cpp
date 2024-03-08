#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int num = k / 2;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int n1 = 0, n2 = 0;

        if (binary_search(a.begin(), a.end(), 1) || binary_search(b.begin(), b.end(), 1)){
            for (int i = 0; i < n; i++) {
                if (binary_search(b.begin(), b.end(), a[i] -1) || binary_search(b.begin(), b.end(), a[i] + 1 )|| binary_search(b.begin(), b.end(), 1))
                    n1++;
            }
            for (int i = 0; i < m; i++) {
                if (binary_search(a.begin(), a.end(), b[i] - 1) || binary_search(a.begin(),a.end(), b[i] + 1))
                    n2++;
            }
        }
        if (n1 >= num && n2 >= num)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
