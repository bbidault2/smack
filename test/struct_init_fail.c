#include <smack.h>

struct a {
  int i;
  int j;
};

int main(void) {
  struct a x = {0,0};
  __SMACK_assert(x.j == 1);
  return 0;
}

