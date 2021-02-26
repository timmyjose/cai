#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, b, a;
  string name;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> name >> b >> a;
    if (b >= 2400 && a > b) {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";

  return 0;
}