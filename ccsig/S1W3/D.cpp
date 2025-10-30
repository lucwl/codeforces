#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> v;

  v.push_back(0);
  v.push_back(5);
  v.push_back(10);

  sort(v.begin(), v.end());

  for (int i = 0; i < 3; i++) {
    cout << v[i] << '\n';
  }

  return 0;
}
