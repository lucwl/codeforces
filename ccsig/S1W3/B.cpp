#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  long long t = 0;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    switch (s[0]) {
      case 'T':
        t += 4;
        break;
      case 'C':
        t += 6;
        break;
      case 'O':
        t += 8;
        break;
      case 'D':
        t += 12;
        break;
      case 'I':
        t += 20;
        break;
    }
  }
  cout << t << '\n';
}
