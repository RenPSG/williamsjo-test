#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *buf, *s = malloc(1024);
  s = "Hello, world!\n";
  printf("%s", s);
  return 0;
}
