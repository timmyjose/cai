#include <iostream>
#include <string>

using namespace std;

int main() {
  string x, y;

  cin >> x >> y;

  if (x.size() != y.size())  {
    cout << "NO\n";
    return 0;
  }

  for (int i = 0, j = x.size() - 1; i < x.size(); i++, j--) {
    if (x[i] != y[j]) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";

  return 0;
}