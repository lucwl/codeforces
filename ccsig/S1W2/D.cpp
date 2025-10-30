#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  int t = 0;

  while (n != m) { 
    if (m % 2 == 0 && m > n) {
      m /= 2;
    } else {
      m++;
    }
    t++;
  }

  cout << t << '\n';
}