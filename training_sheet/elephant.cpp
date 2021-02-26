#include <iostream>

using namespace std;

int main() {
  int n, c = 0;
  int s[] = { 5, 4, 3, 2, 1 };

  cin >> n;
  for (int i = 0; i < 5; i++) {
    if (n == 0) break;
    c += n / s[i];
    n %= s[i];
  }

  cout << c << endl;

  return 0;
}