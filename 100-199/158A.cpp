#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  int k;
  cin >> n >> k;

  vector<int> nums;
  while (n--) {
    int n;
    cin >> n;
    nums.push_back(n);
  }

  int total = 0;

  for (int n : nums) {
    if (n >= nums[k-1] && n > 0) {
      total += 1;
    }
  }

  cout << total << '\n';
}