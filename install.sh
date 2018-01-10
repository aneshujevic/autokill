#!/bin/bash
	printf "Please enter sudo password if needed..\n"

#Gives the script and source code of a program read,write and execute permissions for everyone
	chmod 777 unlock proc_id.c
	printf "Execute permissions for script and C program given..\n"


#Compiles the program and gives it read,write and execute permissions for everyone
	gcc proc_id.c -o proc_id
	printf "Compiling done..\n"
	chmod 777 proc_id
	printf "Program is now readable,writeable and executable too..\n"

#Moves program and script so it can be executable as any other binary 
	sudo cp proc_id /usr/local/bin/
	sudo cp unlock /usr/local/bin/
