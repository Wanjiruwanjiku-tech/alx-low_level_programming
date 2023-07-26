Makefiles
---------

Make
-----

- A build automation used to manage the compilation of source code into executable programs.

- Make reads a file called 'Makefile'. The file contains instruction that define rules for building specific targets as well as their dependancies.


		target : dependancies
			commands

Example
-------
		my_executable : file1.o
			gcc -o my_executable file1.o

		file.o : file.c
			gcc -c file.c

- Makefiles ensure only the necessary files are recompiled when changes are made thus improving the development work flow as well as saving time and effort


- This project seeks to dive deeper into makefiles.

