#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string inp;
  int c = 0;

  cin >> n;
  cin >> inp;
  for (int i = 0; i < inp.size() - 1; i++) {
    if (inp[i] == inp[i+1])
      c++;
  }

  cout << c << endl;

  return 0;
}