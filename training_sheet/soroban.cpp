#include <iostream>
#include <string>

using namespace std;

const string digits[] = { "O-|-OOOO", "O-|O-OOO", "O-|OO-OO", "O-|OOO-O", "O-|OOOO-", "-O|-OOOO", "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-" };

int main() {
  int n;

  cin >> n;

  do {
    int d = n % 10;
    cout << digits[d] << endl;
    n /= 10;
  } while (n);

  return 0;
}