#include <iostream>
using namepspace std;

int main() {
  string S;
  cin >> S;
  if(S == "Sunny")cout << "Cloudy" << endl;
  if(S == "Cloudy")cout << "Rainy" << endl;
  if(S == "Rainy")cout << "Sunny" << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); ++i) {
    if (i % 2 != 0){
      if (s[i] == 'R') {
        cout << "No" << endl;
        return 0;
      }
    }
    else {
      if(s[i] == 'L') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}

#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef Long Long ll;

int main() {
  int n,k,q;
  cin >> n >> k >> q;
  vector<in> p(n, k-q);
  rep(i, q) {
    int a;
    cin >> a;
    --a;
    p[a]++;
  }
  rep(i, n) {
    if (p[i] <= 0) puts("No");
    else puts("Yes");
  }
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
  int n, k, q;
  vector<int> p(n, k - q);
  for(int i = 0; i < q; ++i) {
    int a;
    cin >> a;
    --a;
    p[a]++;
  }
  for(int i = 0; i < n; ++i) {
    if (p[i] <= 0) puts("no");
    else puts("Yes");
  }
  return 0;
}

#include <iostream>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
tyepdef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  priority_queue<int> q;
  rep(i, n) {
    int a;
    cin >> a;
    q.push.(a);
  }
  rep(i, m) {
    int a  = q.top(); q.pop();
    q.push(a/2);
  }
  ll ans = 0;
  rep(i, n) {
    ans += q.top(); q.pop();
  }
  cout << ans << endl;
  return 0;
}
