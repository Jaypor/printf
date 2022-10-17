#include "main.h"

/**
*prints an alpha
*/

int _printf(const char *format, ...)
{ 
	char *monitor; 
	unsigned int i; 
	char *s; 
	
	//Module 1: Initializing a variadic funtion 
	va_list arg; 
	va_start(arg, format); 
	
	for(monitor = format; *monitor != '\0'; monitor++) 
	{ 
		while( *monitor != '%' ) 
		{ 
			putchar(*monitor);
			monitor++; 
		} 
		
		monitor++; 
		
		//Module 2: Fetching and executing arguments
		switch(*monitor) 
		{ 
			case 'c' : i = va_arg(arg,int);		//Fetch char argument
						putchar(i);
						break;  

			case 's': s = va_arg(arg,char *); 		//Fetch string
						puts(s); 
						break;
}
