#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int total = 0;
  int n;
  cin >> n;

  while (n--) {
    bool p;
    bool v;
    bool t;
    cin >> p >> v >> t;

    if (p && v || p && t || v && t) {
      total++;
    }
  }

  cout << total << '\n';
}