#include <stdio.h>
#include <stdlib.h>

void doMemoryLeak() {
  printf("Leaking memory now\n");
  char *s = NULL;
  for (int i = 0; i < 100; i++) {
    s = malloc(i);
  }
  return;
}

void useAfterFree() {
  char *s = malloc(1024);
  s[0] = 'h';
  s[1] = 'e';
  s[2] = 'l';
  s[3] = 'l';
  s[4] = 'o';
  s[5] = '\n';
  free(s);
  printf("Value of freed memory: %s", s);
  return;
}

void overflowBuffer() {
  char *input = malloc(1);
  printf("Enter some text: ");
  scanf("%s", input);
  printf("%s\n", input);
  return;
}

int main(int argc, char *argv[]) {
  doMemoryLeak();
  useAfterFree();
  overflowBuffer();
  return 0;
}
