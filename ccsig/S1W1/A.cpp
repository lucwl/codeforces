#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string input;
  cin >> input;

  int r = 0;
  int b = 0;
  for (char c : input) {
    if (c == 'R') {
      r++;
    } else if (c == 'B') {
      b++;
    }
  }

  if (r > b) {
    cout << "Red" << '\n';
  } else if (b > r) {
    cout << "Blue" << '\n';
  } else {
    cout << "Draw" << '\n';
  }
}
