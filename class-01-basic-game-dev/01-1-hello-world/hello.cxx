#include <cstdlib>
#include <iostream>
#include <string_view>

int main(int, char *[]) {
  using namespace std;
  string_view hello("Hello, Special Forces!");
  cout << hello << endl;
  bool check = cout.good();
  int result = check ? EXIT_SUCCESS : EXIT_FAILURE;
  return result;
}