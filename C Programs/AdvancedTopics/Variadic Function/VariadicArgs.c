#include <stdarg.h>
#include <stdio.h>

int sum(int num_args, ...);

int main(void) {
    printf("Sum of 10, 20 and 30 = %d\n",  sum(3, 10, 20, 30) );
    printf("Sum of 4, 20, 25 and 30 = %d\n",  sum(4, 4, 20, 25, 30) );

    printf("\n\nFor details on how this is implemented:\nhttps://stackoverflow.com/questions/12371450/how-are-variable-arguments-implemented-in-gcc\n");
    return 0;
}

/* 
* Create the list variable
* Initialise (va_start) this variable with the number of args
* Get elemenets from the list
* De-init (va-end) the list
*/
int sum(int num_args, ...) {
   int val = 0;
   va_list argPtr;
   int i;

   va_start(argPtr, num_args);
   for(i = 0; i < num_args; i++) {
      val += va_arg(argPtr, int);
   }
   va_end(argPtr);

   return val;
}

/* 
// The C library macro void va_start(va_list argPtr, last_arg) initializes argPtr variable to be used with the va_arg and va_end macros.
// The last_arg is the last known fixed argument being passed to the function i.e. the argument before the ellipsis.
// This macro must be called before using va_arg and va_end.

// The C library macro type va_arg(va_list argPtr, type) retrieves the next argument in the parameter list of the function with type. 
// This does not determine whether the retrieved argument is the last argument passed to the function.

// https://stackoverflow.com/questions/12371450/how-are-variable-arguments-implemented-in-gcc
 */