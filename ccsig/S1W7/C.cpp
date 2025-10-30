#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  float x;
  cin >> n >> x;

  float s = 0;
  for (int i = 0; i < n; i++) {
    float k;
    cin >> k;
    s += k;
  }

  cout << ceil(abs(s) / x) << '\n';
}