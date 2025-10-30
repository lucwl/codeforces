#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, t, c, k;
  cin >> n >> t >> c;

  int r = 0;
  int s = 0;

  for (int i = 0; i < n; i++) {
    cin >> k;

    if (k > t) {
      r += max(0, s - c + 1);
      s = 0;
    } else {
      s++;
    }
  }
  r += max(0, s - c + 1);

  cout << r << '\n';
}