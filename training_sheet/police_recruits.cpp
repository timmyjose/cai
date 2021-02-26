#include <iostream>

using namespace std;

int main() {
  int n;
  int c = 0, p = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == -1) {
      if (p > 0)
        p--;
      else
        c++;
    } else
      p += x;
  }

  cout << c << endl;

  return 0;
}