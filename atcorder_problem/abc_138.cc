#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll; 

int main() {
  int a; 
  string s;
  cin >> a >> s;
  if(a >= 3200) cout << s << endl;
  else puts("red");
}
  

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
typedef long long ll;

int main() {
  int n;
  double ans = 0.0, a;
  cin >> n;
  for(int i = 1; i <= n; ++i) {
    cin >> a;
    ans += 1.0/a;
  }
  ans = 1.0/ans;
  cout << setprecision(16) << ans << endl;
}



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for(int i = 0; i < n; ++i) cin >> v[i];
  sort(a.begin(), a.end());
  double val = (double)h[0];
  for(int i = 1; i < n; ++i) {
    val = (val + h[0])/2;
  }
  cout << val << endl;
}

#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i,n) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double ans = v[0];
  for(int i = 1; i < n; i++) ans = (ans+v[i])/2;
  printf("%.10f\n", ans);
  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

vector<int> to[200005];

void dfs(int vl int p =01) {
  for (int u : to[v]) {
    if (u==p) continue;
    ans[u] += ans[v];
    dfs(u, v);
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  rep(i, n-1) {
    int a, b;
    cin >> a >> b;
    --a; iib;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  ans.resize(n);
  rep(i, q) {
    int p, x;
    cin >> p >> x;
    --p;
    ans[p] += x;
  }
  dfs(0);
  return 0;
}

int main() {


}
