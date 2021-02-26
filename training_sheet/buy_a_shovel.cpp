#include <iostream>

using namespace std;

int main() {
  int k, r;

  cin >> k >> r;

  int m = 1;
  while (true) {
    if ((k * m )% 10 == 0 || (k * m) % 10 == r) {
      cout << m << endl;
      break;
    }
    m++;
  }

  return 0;
}