#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, s, m;
    cin >> n >> s >> m;

    int lr = 0;
    bool ok = false;

    for (int j = 0; j < n; j++) {
      int l, r;
      cin >> l >> r;

      if (l - lr >= s) {
        ok = true;
      }
      lr = r;
    }

    if (m - lr >= s) {
      ok = true;
    }

    cout << (ok ? "YES" : "NO") << '\n';
  }
}
