#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        int n, i = 0, j = 0, count = 0;
        cin >> n;
        cin >> s;
        for (int a = 0; a<n; a++){
            if (s[a] == 'B'){
                i = a;
                break;
            }
        }
        for (int a = n-1; a>0; a--){
            if (s[a] == 'B'){
                j = a;
                break;
            }
        }
        count = j - i + 1;
        cout << count << endl;
    }
    
    return 0;
}
