#include <iostream>

using namespace std;

int main() {
  int n, b, d;
  int e, c = 0, s = 0;

  cin >> n >> b >> d;
  for (int i = 0; i < n; i++) {
    cin >> e;
    if (e > b) continue;
    s += e;
    if (s > d) {
      c++;
      s = 0;
    }
  }

  cout << c << endl;

  return 0;
}