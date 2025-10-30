#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int e = 0;
  int d = 0;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int h;
    cin >> h;
    v.push_back(h);
  }

  d += v[0];

  for (int i = 1; i < n; i++) {
    e += v[i - 1] - v[i];
    if (e < 0) {
      d += -e;
      e = 0;
      continue;
    }
  }

  cout << d << '\n';
}