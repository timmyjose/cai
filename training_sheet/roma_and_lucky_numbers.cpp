#include <iostream>

using namespace std;

int main() {
  int n, k, d, c = 0;

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> d;
    int lc = 0;
    while (d) {
      if (d % 10 == 4 || d % 10 == 7)
        lc++;
      d /= 10;
    }
    if (lc <= k)
      c++;
  }

  cout << c << endl;

  return 0;
}