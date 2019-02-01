#include <iostream>
#include <string_view>

bool greetings(std::string_view user_name) {
  using namespace std;
  string_view hello("Hello, ");
  string_view excl("!");
  cout << hello << user_name << excl << endl;
  return cout.good();
}