#include <iostream>
using namespace std;

int main() {
 int a, b, c;
 cin >> a >> b >> c;
 if ((a + b + c) < 22) {
   cout << "win" << endl;
 }
 else {
   cout << "bust" << endl;
 }
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int count, target;
  count = 0;
  target = s.size() / 2;
  for (int i = 0; i < target; ++i) {
    if (s[i] != s[s.size() - i -1]) ++count;
  }
  cout << count << endl;
} 




#include <iostream>
using namespace std;

int N;
int A[20];
int x[20][20];
int y[20][20];

int count (int x){
  if(x == 0) return 0;
  return counter(x >> 1) + (x & 1);
}

void sole() {
  cin >> N;
  for(int i = 1; i <= N; i++) {
    cin >> A[i];
    for(int j =1; j <= A[i]; j++) {
      cin >> x[i][j] >> y[x][i];
    }
  }
  int ans = 0;
  for(int bits = 1; bits < (1 << N; bits++) {
    boo; ok = true;
    for(int i = 1; i <= N; i++) {
      if(!(bits & i (1 << (i-1)))) continue;
      for(int j = 1; j <= A[i]; j++) {
        if(((bits >> (x[i][j]-1)) & 1)^y[i][j]) ok = false;
      }
    }
    if(ok) ans = max(ans, counter(bits));
  }
  cout << ans << endl;
  return;
}

int main() {
  solve();
  return 0;
 }
