#include <iostream>

using namespace std;

int main() {
  int w;

  cin >> w;

  if (w < 4 || w % 2 == 1)
    cout << "NO\n";
  else
    cout << "YES\n";

  return 0;
}