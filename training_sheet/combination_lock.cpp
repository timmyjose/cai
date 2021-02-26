#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n;
  string from, to;
  
  cin >> n >> from >> to;
  int m = 0;
  for (int i = 0; i < from.size(); i++) {
    int d1 = abs((from[i] - '0') - (to[i] - '0'));
    m += min(d1, 10 - d1);
  }

  cout << m << endl;

  return 0;
}