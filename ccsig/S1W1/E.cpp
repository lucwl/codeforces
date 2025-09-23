#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;

    v.push_back(t);
  }

  sort(v.rbegin(), v.rend());

  int d = 2;
  int l = 0;
  for (int t : v) {
    if (d + t > l) {
      l = d + t;
    }
    d++;
  }

  cout << l << '\n';
}