#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x = 0;
  int n;
  cin >> n;

  while (n--) {
    string stmt;
    cin >> stmt;

    if (stmt[1] == '+') {
      x++;
    } else {
      x--;
    }
  }

  cout << x << '\n';
}