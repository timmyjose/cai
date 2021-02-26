#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  int c = 0;

  cin >> n >> m;
  for (int a = 0; a <= max(m, n); a++) {
    for (int b = 0; b <= max(m, n); b++) {
      if (a * a + b == n && a + b * b == m)
        c++;
    }
  }

  cout << c << endl;

  return 0;
}