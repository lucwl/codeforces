#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int m, n;
  cin >> m >> n;

  int a = m / 2;
  int b = m % 2;

  cout << a * n + b * trunc(n / 2) << '\n';
}