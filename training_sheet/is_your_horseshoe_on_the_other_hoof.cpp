#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int a, b, c, d;
  unordered_set<int> s;

  cin >> a >> b >> c >> d;
  s.insert(a);
  s.insert(b);
  s.insert(c);
  s.insert(d);

  cout << 4 - s.size() << endl;

  return 0;
}