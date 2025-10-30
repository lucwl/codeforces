#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> v;

  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;

    v.push_back(s);
  }

  set<int> f;
  int m = n;
  int o = 0;
  int i = 0;
  while (1) {
    if (v[i] == m) {
      cout << v[i] << ' ';
      if (v[i] == 1) {
        break;
      }

      while (1) {
        m--;
        if (f.count(m)) {
          cout << m << ' ';
          f.erase(m);
          if (m == 1) {
            cout << '\n';
            return 0;
          }
        } else {
          break;
        }
      }
    } else {
      f.insert(v[i]);
    }
    i++;
    cout << '\n';
  }
}