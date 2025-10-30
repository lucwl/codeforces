#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  vector<string> map(n);

  cout << "test" << '\n';

  for (int i = 0; i < n; i++) {
    cin >> map[i];
  }

  queue<array<int, 2>> q;
  set<pair<int, int>> visited;

  int x = 0;
  int y = 0;
  int rooms = 0;

  vector<int> dx = {0, 0, 1, -1};
  vector<int> dy = {1, -1, 0, 0};

  while (visited.size() < n * m) {
    cout << x << ' ' << y << '\n';
    switch (map[y][x]) {
      case '#':
        visited.insert({x, y});
        break;
      case '.':
        if (visited.count({x, y})) {
          break;
        }
        rooms++;
        q.push({x, y});
        visited.insert({x, y});

        while (!q.empty()) {
          int u_x, u_y;
          u_x = q.front()[0];
          u_y = q.front()[1];
          q.pop();

          for (int i = 0; i < 4; i++) {
            int to_x = u_x + dx[i];
            int to_y = u_y + dy[i];

            if (!(to_x >= 0 && to_x < n && to_y >= 0 && to_y < m)) {
              continue;
            }

            if (visited.count({to_x, to_y})) {
              continue;
            }

            if (map[to_y][to_x] == '#') {
              continue;
            }

            visited.insert({to_x, to_y});
            q.push({to_x, to_y});
          }
        }
    }
    x++;
    if (x == m - 1) {
      x = 0;
      y++;
    }
  }
}