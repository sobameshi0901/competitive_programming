#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  if(n == m){cout << 'Yes' << endl; return 0;}
  cout << 'No' << endl;
}


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  if(a <= b){cout << string(b) << end; return 0;}
  else{ count << string(a,to_string(b)) << endl; return 0;}
}


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n)cin >> p[i];
  int count = 0
  int ma = p[i]
  rep(i, n){
    ma = max(ma, p[i])
    if (p[i] <= max ){++count;}
  }
  cout << count << endl;
}
    
  
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


