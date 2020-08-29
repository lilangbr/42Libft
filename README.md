# Libft42

The aim of this project is to code a C library regrouping usual functions that
we’ll be allowed to use in all us other projects at 42.

The most part is in C library (see man). 
Others are'nt in the C library but it will be so usefull further. This functions are described in subject.

Bellow, some function's flowcharts  to understand how they are working. This was important when i thinked about their logic.

- <h2>memset</h2>

Fill a byte string with a byte value.

<b>Header:</b> #include <string.h>

<b>Prototype:</b> void *memset(void *b, int c, size_t len)

<b>Parameters:</b> 
#1. The string to be filled. 
#2. The character to fill.
#3. The quantity of bytes to fill.

<b>Return value:</b> First argument

<b>Description:</b> The memset() function writes <b>len bytes of value c</b> (converted to an unsigned char) to the string b.
