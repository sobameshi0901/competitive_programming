#include <iostream>
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;
  cout << t + s << endl;
}

#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  ll a,b,k;
  cin >> a >> b >> k;
  if(a > k){
    cout << a - k << endl;
    cout << b << endl;
  }
  else
  {
    cout << 0 << endl;
    if((a+b) > k)cout << a+b-k << endl;
    else{cout << 0 << endl;}
  }
   return 0;
}
    
#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

boolean sosu(int i)
  double sqrtNum = sqrt(i);
  for(int j = 3; j <= sqrtNum; j += 2)
     {
       if(i % j == 0)return false;
     }
   }
   return true;
}

int main() {
  int x;
  cin >> x;
  if(x==2){
    cout << 2 << endl;
  }
  for(int i = x; i < 100003; i++){
    if(i%2 == 0)continue;
    if(sosu(i))cout << i << endl & return 0;
  }
}

#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int r,s,p;
  cin >> r >> s >> p;
  string t;
  cin >> t;
  int score=0;
  for(int i=0;i < n;i++){
    if(i < k){
      if(s[i] == 'r')score += p;
      if(s[i] == 's')score += r;
      if(s[i] == 'p')score += s;
    }
    else{
      if(s[i-k] == 'r'){

      }
    }
  }
}
