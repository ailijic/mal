#!/usr/bin/tcc -run -ledit

#include <editline/readline.h>
#include <editline/history.h>

#include <stdio.h>
#include <stdlib.h>

char const* READ(char const* str) {
  return str;
}

char const* EVAL(char const* str) {
  return str;
}

char const* PRINT(char const* str) {
  return str;
}

char const* rep(char const* str1) {
  char const* str2 = READ(str1);
  char const* str3 = EVAL(str2);
  char const* str4 = PRINT(str3);
  return str4;
}

enum BUFF { BUFF_SZ = 256 };
static char BUFF_G[BUFF_SZ];

int main() {
  for ( ; ; ) {
    char const* str1 = readline("user> ");
    add_history(str1);
    char const* str2 = rep(str1);
    printf("%s\n\n", str2);
    free(str1);
  }
}
