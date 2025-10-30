#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    v.push_back(s);
  }

  int t = 0;
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if (k > 0) {
      if (v[i] > 0) {
        if (k % 2 == 0) {
          k = 0;
        } else {
          k = 1;
        }
      }
      t += -v[i];

      if (v[i + 1] > 0) {
        if (k % 2 == 0) {
          k = 0;
        } else {
          k = 1;
        }
      }

      k--;
    } else {
      t += v[i];
    }
  }

  cout << t << '\n';
}