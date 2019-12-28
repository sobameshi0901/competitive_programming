#include <iostream>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int ans;
  ans = a - b*2;
  ans = (ans > 0) ? ans : 0;
  cout << ans << endl;
}

#include <iostream>
using namespace std;

int main() {
  int n;
  int a[110];
  int ans = 0;
  for(int i = 0; i < n; ++i)cin << a[i]
  for(int i = 0; i < n; ++i){
    for(int j = i; j < n; j++){
      ans += a[i] * a[j];
    }
  }
}

#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  string las = 'aaa';
  count = 0
  for(int i = 0; i < n; ++i){
    if(s[i]!=las)++count;
    las = s[i];
  }
  cout << count << endl;
}


