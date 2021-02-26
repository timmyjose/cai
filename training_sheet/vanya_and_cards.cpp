#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, x, d;
  int s = 0;

  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> d;
    s += d;
  }

  cout << ceil(abs(s) / (float) x) << endl;

  return 0;
}