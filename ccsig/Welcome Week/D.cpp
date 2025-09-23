#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<string> v;

  for (int i = 0; i < n; i++) {
    string w;
    cin >> w;
    v.push_back(w);
  }

  string t;
  cin >> t;

  for (string w : v) {
    int i = ((t[0] - 97) - (w[0] - 97) % 26);

    if (i < 0) {
      i += 26;
    }

    vector<char> l;

    for (char c : w) {
      l.push_back(97 + ((c - 97) + i) % 26);
    }

    string f(l.begin(), l.end());

    if (f == t) {
      cout << w << '\n';
      return 0;
    }
  }
}