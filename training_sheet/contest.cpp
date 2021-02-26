#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c, d;

  cin >> a >> b >> c >> d;
  int ms = max(3 * a / 10, a - a / 250 * c);
  int vs = max(3 * b / 10, b - b / 250 * d);

  if (ms > vs) 
    cout << "Misha\n";
  else if (ms == vs)
    cout << "Tie\n";
  else
    cout << "Vasya\n";

  return 0;
}