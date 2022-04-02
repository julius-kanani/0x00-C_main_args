# Input-Output in C.
There are three main functions of any program. Take data as input, process this data and give the output.
Input functions like `scanf()` and `getchar()`. Output functions like `printf()` and `putchar()`.
These functions use conversion specifiers to specify the type and size of data.
* Each conversion specification must begin with a percent sign (%).
| Conversion specifier | Description |
| --- | --- |
| %c | a single character |
| %d | a decimal integer |
| %f | a floating point number |
| %e | a floating point number |
| %g | a floating point number |
| %lf | long range of a floating point number (for double data type).
| %h | a short integer |
| %o | an octal integer |
| %x | a hexadecimal |
| %i | a decimal, octal, or hexadecimal integer |
| %s | a string. |
| %u | an unsigned decimal integer |
## Note:
* modifier h can be used before conversion specifiers `d, i, o, u, x` to specify short integer.
* modifier l can be used before them to specify a long integer.
* Modifier `l` can be used before conversion specifiers `f, e, g` to specify double while modifier `L` can be used before them to to specify a long double.
> For example `%ld, %hd, %Lf, %hx` are valid conversion specifications.
## Reading Input Data.
`scanf("control string", address1, address2, ....);`
## Character I/O
`getchar()` and `putchar()`.
`getchar()` - reads a single character.
`putchar()` - outputs one character at atime.
