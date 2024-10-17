#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *buf, *s = malloc(1024);
  for (int i = 1; i < 100; i++) {
    s = malloc(1024 + i);
	}
  s = "Hello, world!\n";
  printf("%s", s);
  return 0;
}
