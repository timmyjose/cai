#include <iostream>

using namespace std;

void print_top(int n) {
  for (int i = n/2; i >= 0; i--) {
    for (int j = 0; j < i; j++)
      cout << "*";
    
    for (int k = 0; k < n - 2 * i; k++)
      cout << "D";

    for (int l = 0; l < i; l++)
      cout << "*";
    cout << endl;
  }
}

void print_bottom(int n) {
  for (int i = 1; i <= n/2; i++) {
    for (int j = 0; j < i; j++)
      cout << "*";

    for (int k = 0; k < n - 2 * i; k++)
      cout << "D";

    for (int l = 0; l < i; l++)
      cout << "*";
    cout << endl;
  }
}

int main() {
  int n;

  cin >> n;
  print_top(n);
  print_bottom(n);

  return 0;
}