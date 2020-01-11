#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  rep(i,n-2) {
    if (s.substr(i, 3) == "ABC")++ans;
  }
  cout << ans << endl;
  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  rep(i,n) cin >> p[i];
  rep(i,n) cin >> q[i];
  vector<int> a(n);
  rep(i,n) a[i] = i + 1;
  map<vector<int>, int > mp;
  do{
    mp[a] = mp.size();
  } while ( next_permutation(a.begin(), a.end()));

  int ans = abs(mp[p] - mp[q]);
  cout << ans << endl;
  return 0;


}

map<vector<int>, int > mp;

#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  rep(i,n) cin >> p[i];
  rep(i,n) cin >> q[i];
  vector<int> a(n);
  rep(i,n) a[i] = i + 1;
  map<vector<int>, int> mp;
  do{
    mp[a] = mp.size();
  } while ( next_permutation(a.begin(), a.end()));

  int ans = abs(mp[p] - mp[q]);
  cout << ans << endl;
  return 0;
}
