#include "print.h"

void kernel_main()
{
	print_clear();
	print_set_color(PRINT_COLOR_CYAN, PRINT_COLOR_BLACK);
	print_str("Welcome to the kernel!");
	print_char('>');
}
