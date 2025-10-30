#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k, l, r, sa, sk;
  cin >> n >> k >> l >> r >> sa >> sk;

  vector<int> v;
  int t = (sk / k) * k;
  int j = 0;

  if (k > 0) {
    for (int i = 0; i < k; i++) {
      v.push_back(sk / k);
    }
    while (t < sk) {
      v[j]++;
      t++;
      if (v[j] == r) {
        j++;
      }
    }
  }

  if (k < n) {
    int rm = sa - t;
    for (int i = k; i < n + 1; i++) {
      v.push_back(rm / (n - k));
    }
    t = rm / (n - k) * (n - k);
    j = k;

    r = v[k - 1];
    while (t < rm) {
      v[j]++;
      t++;
      if (v[j] == r) {
        j++;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << ' ';
  }
  cout << '\n';
}