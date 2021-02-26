#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int lexico(const string& s, const string& t) {
  size_t slen = s.size();
  size_t tlen = t.size();

  if (slen < tlen) return -1;
  if (tlen < slen) return -1;

  for (size_t i = 0; i < slen; i++) {
    if (tolower(s[i]) < tolower(t[i])) 
      return -1;
    else if (tolower(s[i]) > tolower(t[i]))
      return 1;
  }
  return 0;
}

int main() {
  string x, y;
  cin >> x >> y;

  cout << lexico(x, y) << endl;

  return 0;
}