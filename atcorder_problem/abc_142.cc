#include <iostream>
using namespace std;

int N;

void solve() {
  cin >> N;
  cout.precision(10);
  cout << (double)(N-N/2)/(double)N << endl;
  return;
}

int main() {
  solve();
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int cnt=0;
  for(int i=0; i<n; i++){
    int h;
    cin >> h;
    if(h>=k) cnt++;
  }

  cout<<cnt<<endl;
  return 0;
}

#include <iostream>
#incldue <vector>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  
  for(int i=0;i<n;i++) cin>>a[i];

  vector<int> rev(n);
  for(int i=0;i<n;i++) rev[a[i]-1]=i+1;
  for(int i=0;i<n;i++) cout << rev[i]<<endl;
  return 0;
}


