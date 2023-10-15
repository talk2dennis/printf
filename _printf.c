include <main.h>

/**
 *_printf: my main function
 *
 *@format : the text format
 *
 *Return : lenght
 */


int _printf(const char *format, ...){
  va_list args;
  int len = 0, i = 0;

  va_start(args, format);
  while (format[len] != '\0') {
    if (format[i] != '%') {
      putchar(format[i]);
      len++;
    } 
else {
i++;
      switch (format[i]) {
        case 'c':
          _putchar(va_arg(args, int));
          i++;
          break;
        case 's':
          print_str(va_arg(args, char *);
          len += _strlen(va_arg(args, char *));
          break;
        case '%':
          putchar('%');
          len++;
          break;
        default:
          break;
      }
    }
  }
  va_end(args);
  return len;
}
