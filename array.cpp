Перестановки перебирают способы РАССТАНОВКИ чего-то

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define int ll

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    function<void(int)> rec = [&](int ind) {
        if (ind == n) {
            for (int i = 0; i < n; ++i) {
                cout << arr[i] << ' ';
            }
            cout << '\n';
            return;
        }
        for (int i = 0; i < k+1; ++i) {
            arr[ind] = i;
            rec(ind + 1);
        }
    };
    rec(0);
}
