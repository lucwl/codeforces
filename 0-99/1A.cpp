#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n, m, a;
  cin >> n >> m >> a;

  ll x = n / a;
  ll y = m / a;
  ll total = x * y;
  if (total == 0) {
    total = 1;
  }

  bool overflow = false;
  if (x > 0 && n % a != 0) {
    total += y + ((m % a) ? 1 : 0);
    overflow = true;
  }
  if (y > 0 && m % a != 0) {
    total += x + ((n % a) ? 1 : 0);
    if (overflow && x % a) {
      total--;
    }
  }

  cout << total << '\n';
}