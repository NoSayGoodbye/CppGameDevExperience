#include <cstdlib>
#include <hello_lib.hxx>

int main(int, char *[]) {
  bool check = greetings("Dmitri");
  int result = check ? EXIT_SUCCESS : EXIT_FAILURE;
  return result;
}