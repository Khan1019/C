#include <iostream>
using namespace std;
int main() {
  int n;
  double res=1;
  double s=0;
  int a;
  int b;
  cin >> n>>a>>b;
  for (int i = 1; i <= n; ++i) {
    res=1.0/i*res;
    s=s+res;
  }
  printf("%.4f",s);
}