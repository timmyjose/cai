#include <iostream>

using namespace std;

int main() {
  int n, k;
  int c = 0, d;

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> d;
    if (5 -d >= k)
      c++;
  }

  cout << c / 3 << endl;

  return 0;
}