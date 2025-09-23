#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    int c = k;

    int n = 0;
    int d;

    if (x < y && c >= a) {
      n += (c - a) / x + 1;
      c -= n * x;
    } else if (c >= b) {
      n += (c - b) / y + 1;
      c -= n * y;
    }

    if (c >= a) {
      n += (c - a) / x + 1;
      c -= ((c - a) / x + 1) * x;
    }
    if (c >= b) {
      n += (c - b) / y + 1;
      c -= ((c - b) / y + 1) * y;
    }

    cout << n << '\n';
  }
}