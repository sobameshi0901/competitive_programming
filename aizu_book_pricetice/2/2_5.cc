#include<iostream>
#include<alogrithm>
using namespace std;
static const int MAX = 20000;

int main() {
  int R[MAX], n;
  cin >> n;
  for ( int i = 0; i < n; i++) cin >> R[i];

  int maxv = -20000000; //十分に小さい値
  int minv = R[0];

  for ( int i = 1; i < n; i++) {
    maxv = max(maxv, R[i] - minv);
    minv = min(minv, R[i]);
  }

  cout << maxv << endl;

  return 0;
}

