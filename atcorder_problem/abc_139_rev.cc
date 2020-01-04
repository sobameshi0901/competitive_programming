#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  for(int i = 0; i < n; ++i) cin >> h[i];
  h.reverse(h.begin(), h.end());
  int ans = 0;
  int value = 0;
  for(int i = 1; i < n; ++i) {
    if(h[i] >= h[-1])++value;
    else{ ans = max(value, ans); value = 0; }
  }
}
      

