#include <iostream>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int count = 0;
  for(int i = 0; i <3; ++i) {
    if(s[i] == t[i])++count;
  }
  cout << count << endl;
}

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans=0;
  int outlet = 1;
  while ( outlet < b) {
    --outlet;
    outlet += a;
    ++ans;
  }
  cout << ans << endl;
}
    
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int last;
  cin >> last;
  int count = 0;
  int current = 0;
  for(int i = 0; i < n; ++i){
    int h;
    cin >> h;
    if(h <= last) {
      ++current;
    }
    else {
      count = max(count, current);
      current = 0;
    }
  }
  cout << count << endl;
}

#include <iosream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vectro<int> h(n);
  rep(i, n) cin >> h[i];
  reverse(h.begin(), h.end());
  int ans = 0;
  int val = 0;
  for ( int i = 1; i < n; i++) {
    if(h[i-1] <= h[i]) val++;
    else val = 0;
    ans = max(ans, val);
  }
  cout << ans << endl;
  return 0;
}
