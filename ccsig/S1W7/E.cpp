#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n, t, a, l;
  cin >> n;

  t = 0;
  l = 0;

  for (int i = 0; i < n; i++) {
    cin >> a;
    t += abs(a - l);
    l = a;
  }

  cout << t << '\n';
}