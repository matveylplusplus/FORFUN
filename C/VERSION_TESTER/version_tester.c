#include <stdio.h>

int main(){
  if (__STDC_VERSION__ >= 201710L)
    printf("We are using C17/18!\n");
  else if (__STDC_VERSION__ >= 201112L)
    printf("We are using C11!\n");
  else
    printf("We are using C99!\n");

  // if using C89/C90, the macro is undefined and compiler will shit bricks
}
