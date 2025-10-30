#include <bits/stdc++.h>

#define ll long long

using namespace std;

void testCase() {
  char odd = 0;
  char even = 0;

  int n, m;
  cin >> n >> m;

  vector<string> grid(n + 1, "");

  for (int i = 1; i < n + 1; i++) {
    cin >> grid[i];
    grid[i] = ' ' + grid[i];
  }

  // odd row and odd column OR even row and even column
  // even row and odd column OR odd row and even column

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < m + 1; j++) {
      if (grid[i][j] == '.') {
        continue;
      }

      if (odd == even) {
        if (i % 2 == j % 2) {
          if (grid[i][j] == 'R') {
            even = 'R';
            odd = 'W';
          } else {
            even = 'W';
            odd = 'R';
          }
        } else {
          if (grid[i][j] == 'R') {
            even = 'W';
            odd = 'R';
          } else {
            even = 'R';
            odd = 'W';
          }
        }
        continue;
      }

      if ((i % 2 == j % 2) && (grid[i][j] == odd)) {
        cout << "NO" << '\n';
        return;
      } else if ((i % 2 != j % 2) && (grid[i][j] == even)) {
        cout << "NO" << '\n';
        return;
      }
    }
  }

  if (odd == even) {
    odd = 'R';
    even = 'W';
  }

  cout << "YES" << '\n';

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i % 2 == j % 2) {
        cout << even;
      } else {
        cout << odd;
      }
    }
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    testCase();
  }
}