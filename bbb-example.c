 #include <stdio.h>
#include "bbb-example.h"

int main() {
  #ifdef WELCOME
    #if WELCOME == y
      printf("Welcome to Yocto Tutorial.\n");
    #endif
  #endif

  #ifdef HELLO
    #if HELLO == y
      printf("Hello there, I am an example code :)\n");
    #endif
  #endif

  #ifdef BYE
    #if BYE == y
      printf("Bye, keep learning!!\n");
    #endif
  #endif

  return 0;
}
