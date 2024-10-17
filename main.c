#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *buf, *s = malloc(1);
  for (int i = 1; i < 100; i++) {
    s = malloc(1024 + i);
	}
  s = malloc(1);
  s = "out of bounds write\n";
  printf("%s", s);
  return 0;
}
