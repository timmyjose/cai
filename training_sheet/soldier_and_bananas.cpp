#include <iostream>

using namespace std;

int main() {
  int k, n, w;

  cin >> k >> n >> w;
  int s = k * w * (w + 1) / 2 - n;
  if (s <= 0)
    s = 0;
  cout << s << endl;

  return 0;
}