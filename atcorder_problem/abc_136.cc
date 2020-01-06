#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  int pre = -999;
  rep(i,n) cin >> h[i];
  rep(i,n) {
    if (pre <= a[i] - 1) {
      pre = a[i] -1;
    } else if (pre <= a[i]) {
      pre = a[i];
    } else {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
