#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string digits;
  cin >> digits;

  int n = 0;
  char lastChar = 0;
  bool dangerous = false;

  for (char c : digits) {
    if (c == lastChar) {
      n++;
      if (n == 7) {
        dangerous = true;
        break;
      }
    } else {
      n = 1;
      lastChar = c;
    }
  }

  cout << (dangerous ? "YES" : "NO") << '\n';
}