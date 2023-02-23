#include <stdio.h>

/*
  So, quick background: to do a project that relies entirely on writing bit 
  operations I really needed to figure out what the sizes of all the 
  C datatypes on my Chromebook  were, as they may not have been the same
  as the sizes on UMD's Grace Machines, which is where I pull all my CMSC216 
  projects from. I looked some stuff up and found that all this info is 
  *supposedly* specified in a certain "limits.h" file on your machine, which is
  typically located under /usr/include/linux/limits.h.

  This file exists on the Chromebook, but it doesn't tell me jack. So I looked
  for the same file under different directories and found 2 others:

  1) /usr/include/limits.h, which explicitly tells me that the number of bits
  in a char is 8.

  2) /usr/lib/gcc/x86_64-linux-gnu/10/include/limits.h, which tells me that
  the number of bits is defined by a macro named "__CHAR_BIT__". This is the 
  macro I used in this program, and the answer it gives corroborates the answer
  #1 gives. 
 */

int main(void){
  printf("Your chars are %d bits = %d bytes!\n", __CHAR_BIT__,
	 (__CHAR_BIT__/8));
  printf("Your shorts are %ld bits = %ld bytes!\n",
	 (sizeof(short)*__CHAR_BIT__),((sizeof(short)*__CHAR_BIT__)/8));
  printf("Your ints are %ld bits = %ld bytes!\n",
	 (sizeof(int)*__CHAR_BIT__),((sizeof(int)*__CHAR_BIT__)/8));
  printf("Your doubles are %ld bits = %ld bytes!\n",
	 (sizeof(double)*__CHAR_BIT__),((sizeof(double)*__CHAR_BIT__)/8));
  
  
  return 0;
}
