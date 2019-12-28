#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if(A >= 1 && A <= 9){
    if(B >= 1 && B <= 9) {
      cout << A*B << endl;
    }
    else{cout << -1 << endl;}
  }
  else{cout << -1 << endl;}
}

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      if(N == (i*j)){
        cout << "Yes";
        return false;
      }
    }
   }
   cout << "No" << endl;
 }

#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  ll N;
  cin >> N;
  ll ans = N-1;
  for (ll i = 1; i*i <= N; ++i) {
    if (N%i != 0) continue;
    ll j = N/i;
    ans = min(ans, i+j-2);
  }
  cout << ans << endl;
  return 0;
} 


