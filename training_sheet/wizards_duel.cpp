#include <iostream>

using namespace std;

int main() {
  int l, p, q;

  cin >> l >> p >> q;
  cout << (float) l * p / (float) (p + q) << endl;

  return 0;
}