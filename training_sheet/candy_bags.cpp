#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int k = n * n;
  int c = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n/2; j++) {
      cout << c << " " << k - c + 1 << " ";
      c++;
    }
    cout << endl;
  }

  return 0;
}