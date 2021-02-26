#include <iostream>
#include <string>

using namespace std;

int main() {
  string inp;

  cin >> inp;
  if (inp.find("H") != string::npos || inp.find("Q") != string::npos || inp.find("9") != string::npos) 
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}