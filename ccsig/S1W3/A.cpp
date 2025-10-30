#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n, k;
  cin >> n >> k;

  ll o = (n + 1) / 2;

  if (k <= o) {
    cout << 2 * k - 1 << "\n";
  } else {
    cout << 2 * (k - o) << "\n";
  }
  return 0;
}
