#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int h;
    cin >> h;

    v.push_back(h);
  }

  int m = 0;
  for (int i = 0; i < n; i++) {
    int c = 1;
    int j = i;
    while (j > 0) {
      j--;
      if (v[j] <= v[j+1]) {
        c++;
      } else {
        break;
      }
    }

    j = i;
    while (j < v.size() - 1) {
      j++;
      if (v[j] <= v[j-1]) {
        c++;
      } else {
        break;
      }
    }

    if (c > m) {
      m = c;
    }
  }

  cout << m << '\n';
}