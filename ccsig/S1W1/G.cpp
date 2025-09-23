#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  vector<int> v;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    if (v.size() == 0 || v.back() != a) {
      v.push_back(a);
    }
  }

  vector<int> s(k, 0);

  for (int i = 0; i < v.size() - 2; i++) {
    if (v[i] == v[i + 2]) {
      s[v[i + 1] - 1] += 2;
    } else {
      s[v[i + 1] - 1] += 1;
    }
  }

  s[v[0] - 1] += 1;
  s[v.back() - 1] += 1;

  int m = 0;
  int e = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] > m) {
      m = s[i];
      e = i + 1;
    }
  }

  cout << e << '\n';
}