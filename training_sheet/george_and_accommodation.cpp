#include <iostream>

using namespace std;

int main() {
  int n;
  int p, q, c = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    if (p + 2 <= q)
      c++;
  }

  cout << c << endl;

  return 0;
}