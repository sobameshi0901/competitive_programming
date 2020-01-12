#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  char s;
  cin >> s;
  cout << 1 + s << endl;
}


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int n,k,m;
  cin >> n >> k >> m;
  vector<int> a(n-1);
  int total = 0;
  rep(i,n-1){
    int t;
    cin >> t;
    total += t;
  }
  int target = n * m;
  if(target - total > k)cout << -1 << endl;
  else if (target - total < 0) cout << 0 << endl;
  else {cout << target - total << endl;}
  return 0;
}


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> p(n);
  vector<string> s(n);
  rep(i,n) {
    cin >> p[i] >> s[i];
  }
  int ac = 0;
  int wa = 0;
  vector<int> acs(n);
  rep(i,n) {
    if(binary_search(acs.begin(), acs.end(), p[i])) {}
    else{
      if(s[i] == "AC"){ 
        v.push_back(p[i]);
        ++ac;
      }
      else{++wa;}
    }
  }
  cout << ac << ' '  << wa << endl;



}


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int h, w;
  vector<int> s(h*w);
  rep(i,h){
    rep(j,w){
      cin >> s[i];
    }
  }
  rep(i, h*w) {
    if(s[i] == '#'){continue;}
    else{ }

}

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;


int main() {
  int wa[105000];
  bool ac[105000];

  int rwa = 0;
  int rac = 0;
  int n,m;
  cin >> n >> m;
  rep(i,m){
    wa[i] = 0;
    ac[i] = false;
  }
  rep(i,m){
    int a;
    string b;
    cin >> a >> b;
    if(ac[a] == true){continue;}
    else{
      if(b == 'AC'){
        ac[a] = true;
        rac++;
        rwa += wa[a];
      } else {
        ++wa[a];
      }
    }
  }
  cout << rac << ' ' << rwa << endl;
}


