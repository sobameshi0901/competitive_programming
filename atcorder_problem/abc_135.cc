#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  ll a,b;
  if(a%2 != b%2) {
    cout << "IMPOSSIBLE" << endl;
  } else {
    cout << (a + b) / 2 << endl;
  }
  return 0;
}

#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i,n)cin >> p[i];
  int dif = 0;
  rep(i,n) if(p[i] != i + 1)++dif;
  if(dif <= 2)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n+1);
  vector<int> b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  int total = 0;
  int res = a[0];
  rep(i,n){
    if (rep <= b[i] ) {
      total += rep;
      if(a[i+1] >= b[i] - rep) {
        rep = a[i+1] - b[i] - rep;
        total += (b[i] - rep);
      } else {
        rep = 0;
        total += a[i+1];
      }
    } else {
      rep = a[i+1];
      total += b[i];
    }
  }
}

