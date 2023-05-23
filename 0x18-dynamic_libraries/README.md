C - Dynamic libraries

- Also known as a Shared library..

Dynamic Libraries contain code and data (resources and tools) that can be used by Multiple Programs at the same time (at runtime).

When a program is executed, it dynamically Loads the necessary shared library into its address space allowing the program to access the functions, data in the shared library as if they were part of the program itself.

To create a Shared Library.👇🏿

- Create object files of your source code


		gcc -c myfile.c


- Link the object files


		gcc -shared -o libmyfile.so myfile.o

In this peoject we are going to learn more on:-☺️

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

We wil also 👇🏿

Create the dynamic library libdynamic.so containing all the functions listed below:

		int _putchar(char c);
		int _islower(int c);
		int _isalpha(int c);
		int _abs(int n);
		int _isupper(int c);
		int _isdigit(int c);
		int _strlen(char *s);
		void _puts(char *s);
		char *_strcpy(char *dest, char *src);
		int _atoi(char *s);
		char *_strcat(char *dest, char *src);
		char *_strncat(char *dest, char *src, int n);
		char *_strncpy(char *dest, char *src, int n);
		int _strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_memcpy(char *dest, char *src, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);
