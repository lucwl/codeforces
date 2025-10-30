#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<string> map(n);

  for (int i = 0; i < n; i++) {
    cin >> map[i];
  }

  queue<array<int, 2>> q;
  vector<vector<char>> moves(n, vector<char>(m));
  vector<vector<bool>> visited(n, vector<bool>(m));

  vector<int> dx = {0, 0, 1, -1};
  vector<int> dy = {1, -1, 0, 0};
  vector<char> d = {'R', 'L', 'D', 'U'};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (map[i][j] != 'A') {
        continue;
      }

      visited[i][j] = true;
      q.push({i, j});

      while (!q.empty()) {
        int u_i = q.front()[0];
        int u_j = q.front()[1];
        q.pop();

        for (int k = 0; k < 4; k++) {
          int to_i = u_i + dx[k];
          int to_j = u_j + dy[k];

          if (to_i < 0 || to_i >= n || to_j < 0 || to_j >= m) {
            continue;
          }

          if (map[to_i][to_j] == '#') {
            continue;
          }

          if (visited[to_i][to_j]) {
            continue;
          }
          visited[to_i][to_j] = true;

          moves[to_i][to_j] = d[k];

          if (map[to_i][to_j] == 'B') {
            cout << "YES" << '\n';
            vector<char> h;

            while (map[to_i][to_j] != 'A') {
              h.push_back(moves[to_i][to_j]);

              switch (moves[to_i][to_j]) {
                case 'R':
                  to_j--;
                  break;
                case 'L':
                  to_j++;
                  break;
                case 'U':
                  to_i++;
                  break;
                case 'D':
                  to_i--;
              }
            }

            cout << h.size() << '\n';

            for (int l = 0; l < h.size(); l++) {
              cout << h[h.size() - 1 - l];
            }
            cout << '\n';

            return 0;
          }

          q.push({to_i, to_j});
        }
      }
    }
  }

  cout << "NO" << '\n';
  return 0;
}
