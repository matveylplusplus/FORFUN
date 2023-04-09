#include <stdio.h>

int main(void){
  short s;
  scanf("%hd", &s); /* if I put in a number over 32767 in here... */
  printf("s = %hd\n", s); /* we do not get that number out! */
  
  return 0;
}
