#include <iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  rep(i, s.size()){
    s[i] = ((s[i] - 'A' + n) % 26) + 'A';
  }
  cout << s << endl;
}

