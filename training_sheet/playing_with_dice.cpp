#include <iostream>

#define ABS(x) ((x) < 0 ? -(x) : (x))

using namespace std;

int main() {
  int a, b;
  int aw = 0, d = 0, bw = 0;

  cin >> a >> b;

  for (int i = 1; i <= 6; i++) {
    if (ABS(a - i) < ABS(b - i))
      aw++;
    else if (ABS(a - i) == ABS(b - i))
      d++;
    else
      bw++;
  }

  cout << aw << " " << d << " " << bw << endl;

  return 0;
}