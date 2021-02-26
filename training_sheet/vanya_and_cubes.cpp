#include <iostream>

using namespace std;

int main() {
  int n, h = 1, t = 1;

  cin >> n;
  while (t <= n) {
    h++;
    t += h * (h+1) / 2;
  }

  cout << h - 1 << endl;

  return 0;
}