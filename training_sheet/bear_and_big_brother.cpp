#include <iostream>

int main() {
  int l, b, y = 0;

  std::cin >> l >> b;

  while (true) {
    b *= 2;
    l *= 3;

    y++;

    if (l > b) 
      break;
  }

  std::cout << y << "\n";

  return 0;
}