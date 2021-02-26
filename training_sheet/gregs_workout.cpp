#include <iostream>

using namespace std;

int main() {
  int n, a = 0, b = 0, c = 0;
  int d;

  cin >> n;
  int t = 0;
  for (int i = 1; i <= n; i++) {
    cin >> d;
    if (t % 3 == 0)
      a += d;
    else if (t % 3 == 1)
      b += d;
    else
      c += d;
    t++;
  }

  if (a > b) {
    if (a > c)
      cout << "chest\n";
    else
      cout << "back\n";
  } else {
    if (b > c)
      cout << "biceps\n";
    else
      cout << "back\n";
  }

  return 0;
}