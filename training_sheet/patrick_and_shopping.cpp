#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int d1, d2, d3;

  cin >> d1 >> d2 >> d3;
  cout << min(min(min(2* (d1 + d2), 2 * (d2 + d3)), 2 * (d1 + d3)), d1 + d2 + d3) << endl;

  return 0;
}