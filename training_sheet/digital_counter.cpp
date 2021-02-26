#include <iostream>

const int a[10] = { 2, 7, 2, 3, 3, 4, 2, 5, 1, 2 };

using namespace std;

int main() {
  int n;

  cin >> n;
  cout << a[n % 10] * a[(n/10)%10] << endl;

  return 0;
}