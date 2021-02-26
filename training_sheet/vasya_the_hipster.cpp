#include <iostream>

using namespace std;

int main() {
  int a, b;
  int f = 0, n = 0;

  cin >> a >> b;
  if (a < b) {
    f = a;
    a = 0;
    b -= f;
  } else {
    f = b;
    b = 0;
    a -= f;
  }

  if (a != 0) {
    n = a / 2;
  } else {
    n = b / 2;
  }

  cout << f << " " << n << endl;

  return 0;
}