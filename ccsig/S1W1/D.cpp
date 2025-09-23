#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  for (int j = 0; j < t; j++) {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      v.push_back(a);
    }

    for (int i = 0; i < n; i++) {
      int b;
      cin >> b;

      string m;
      cin >> m;

      for (int j = 0; j < b; j++) {
        if (m[j] == 'U') {
          v[i]--;
        } else {
          v[i]++;
        }
        if (v[i] == 10) {
          v[i] = 0;
        } else if (v[i] == -1) {
          v[i] = 9;
        }
      }
    }

    for (int c : v) {
      cout << c << ' ';
    }
    cout << '\n';
  }
}