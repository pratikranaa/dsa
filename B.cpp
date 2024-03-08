#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        string s;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> count(26, 0);
        for (int i = 0; i < n; i++) {
            int index = -1;
            for (int j = 0; j < 26; j++) {
                if (count[j] == a[i]) {
                    index = j;
                    break;
                }
            }
            if (index == -1) {
                for (int j = 0; j < 26; j++) {
                    if (count[j] == 0) {
                        index = j;
                        break;
                    }
                }
            }
            count[index]++;
            s += ('a' + index);
        }

        cout << s << endl;
    }
    return 0;
}
