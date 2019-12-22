#include <iostream>
using namespace std;

int main() {
  int N;
  int d[110];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> d[i];

  int num[110] = {0};
  for (int i = 0; i < N; ++i) {
    num[d[i]]++;
  }

  int res = 0;
  for (int i = 1; i <= 100; ++i) {
    if (num[i] {
      ++res;
    }
  }
  cout << res << endl;
}

#include <iostream>
using namespace std;

int main() {
  int A;
  int B;
  cin >> A >> B;
  int ans;
  for (int i = 1; i <= 3; ++i) {
    if (A != i && B != i) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}

#include <iostream>
using namespace std;

int main() {
  int N;
  string S;
  string T;
  cin >> N;
  cin >> S >> T;

  string w;
  for (int i = 0; i < N; ++i) {
    w = w + S[i];
    w = w + T[i];
  }
  cout << str << endl;
}

    
#include <iostream>
using namespace std;
    
int main() {
  int a;
  int b;
  int tmp;
  cin >> a >> b;
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }

  int r;
  int x;
  x = a * b;
  r = a % b;

  while(r != 0){
    a = b;
    b = r;
    r = a % b;
  }

  cout << b << endl;
  cout << x/b << endl;
}


#include <iostream>
using namespace std;

int main() {
  int N;
  int d[200000];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> d[i];
  int res = N
  int ans
  while(true) {
    if



N = gets.to_i
a = N.times.map{gets.to_i}
n_c = a.count
res = n_c
c = 1
unless a.include(1)
  p -1
else
  while true
    i = a.find_index(c)
    unless i then res = n_c - c - 1 end
    a.slice![0...i]
    res -= i
    break if c >= res
    c += 1
  end
end
p res
