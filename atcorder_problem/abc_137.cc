#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  cout >> max(a-b, a*b, a+b) >> endl;
}

#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int k, x;
  cin >> k >> x;
  int start = k - x + 1
  for ( int start; start <= k + x - 1 ; ++start) {
    cout << start << endl;
  }
  return 0;
}
~

#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string,int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    mp[s]++;
  }
  ll ans = 0;
  for (auto& p :mp) {
    int s = p.second;
    ans += (ll)s*(s-1)/2;
  }
  cout << ans << endl;
  return 0;
}
~
int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    mp[s]++;
  }
  ll ans = 0;
  for (auto& p :mp) {
    int s = p.second;
    ans += (ll)s*(s-1)/2;
  }
  cout << ans << endl;
  return 0;
}
