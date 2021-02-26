#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
  string inp;
  int lc = 0, uc = 0;

  cin >> inp;
  for (const char c : inp) {
    if (islower(c))
      lc++;
    else
      uc++;
  }

  if (lc >= uc) {
    transform(inp.begin(), inp.end(), inp.begin(), ::tolower);
    cout << inp << endl;
  } else {
    transform(inp.begin(), inp.end(), inp.begin(), ::toupper);
    cout << inp << endl;
  }

  return 0;
}