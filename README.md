# 0x00-C\_main\_args
> C functions wouldn't be very useful if you couldn't ever pass arguments to them -- adding the ability to pass arguments to programs makes them that much more useful.
> In fact, all the arguments you pass on the command line end up as arguments to the main function in your program.
> Main arguments include: 
```C
#include <stdio.h>

int main(int argc, \*argc[])
{
	return (0);
}
```
> The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program.
> The name of the variable argv stands for "argument vector". A vector is a one-dimensional array, and argv is a one-dimensional array of strings.
> Each string is one of the arguments that was passed to the program.
