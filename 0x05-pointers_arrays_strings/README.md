## Pointers, arrays and strings.
* ## 0-reset_to_98.c
  * function that takes a pointer to an int as parameter and updates the value
     it points to to 98
     * prototype:| void reset_to_98(int *n);

* ## 1-swap.c
  * function that swaps the values of two integers
     * prototype:| void swap_int(int *a, int *b);

* ## 2-strlen.c
  * function that returns the length of a string
     * prototype: | int _strlen(char *s);

* ## 3-puts.c
  * function that prints a string, followed by a new line, to stdout
     * prototype:| void _puts(char *str);

* ## 4-print_rev.c
  * function that prints a string, in reverse, followed by a new line
     * prototype:| void print_rev(char *s);

* ## 5-rev_string.c
  *  function that reverses a string
     * prototype: | void rev_string(char *s);

* ## 6-puts2.c
  *function that prints every other character of a string, starting with the
   first character, followed by a new line
     * prototype:| void puts2(char *str);

* ## 7-puts_half.c
  * function that prints half of a string, followed by a new line.
  * function should print the second half of the string
  * If the number of characters is odd, the function should print the last n characters
   of the string, where n = (length_of_the_string - 1) / 2
     * prototype:| void puts_half(char *str);

* ## 8-print_array.c
  * function that prints n elements of an array of integers, followed by a new
    line.
  * where n is the number of elements of the array to be printed
  * Numbers must be separated by comma, followed by a space
  * Numbers stored in the ame order as stored in the array.
    * prototype: | void print_array(int *a, int n);

* ## 9-strcpy.c
  * function that copies the string pointed to by src, including the terminating
    null byte (\0), to the buffer pointed to by dest.
  * return value: the pointer to dest.
    * prototype:| char *_strcpy(char *dest, char *src);