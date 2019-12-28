#include <iostream>
using namespace std;

int main() {
  int r;
  cin >> r;
  cont << r*r << endl;
}

#include <iostream>
using namespace std;

int main() {
  int N;
  string S;
  cin << N << S;
  string ans;
  if(N % 2 != 0) {
    ans = 'No';
  else {
    int s = S.size();
    s1 = S.substr(0,s/2);
    s2 = S.substr((s/2,s/2);
    if(s1 == s2) ans = 'Yes';
    else ans = 'No';
  }
  cout << ans << endl;
  }
}
