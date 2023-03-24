# Printf ()

* This is a collaboration project by **John Miriita** and **Simon Muiaa**, ALX Software Engineering Students.
* The project goal is to create a function _printf that imitates the real `printf()` command.

\_printf() is a function that performs formatted output conversion and prints data. Its prototype is the following:

    int _printf(const char *format, ...)


The format tags prototype is the following:

    %[flags][length]specifier

If the program runs successfully, the **return value** is the amount of chars printed.
| Specifier | Output |
| ------------- | ------------- |
| c | Character |
| d or i | Signed decimal integer |
| s | String of characters |
| b | Signed binary |
| o | Signed octal |
| u | Unsigned integer |
| x | Unsigned hexadecimal |
| X | Unsigned hexadecimal (uppercase) |
| p | Pointer address |
| r | Reverse string of characters |
| R | ROT13 translation of string |
| S | String with special chars replaced by their ASCII value |
| % | Character |