#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> graph(n + 1, vector<int>());
  vector<bool> visited(n + 1);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  vector<int> l;

  queue<int> q;
  for (int i = 1; i < n + 1; i++) {
    if (visited[i]) {
      continue;
    }
    visited[i] = true;
    l.push_back(i);

    q.push(i);
    while (!q.empty()) {
      int c = q.front();
      q.pop();

      for (int p : graph[c]) {
        if (visited[p]) {
          continue;
        }
        visited[p] = true;
        q.push(p);
      }
    }
  }

  cout << l.size() - 1 << '\n';
  for (int i = 0; i < l.size() - 1; i++) {
    cout << l[i] << ' ' << l[i + 1] << '\n';
  }
}
