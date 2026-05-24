/* shell.c 
This shell shows utilizes the elibc.h header file
It'll demonstrate some of the commands in elibc.h
WARNING: This is meant as an example, and not suitable
for production purposes
*/

/* This shell assumes you are in the parent directory
and E-Libc isn't installed on your host system
*/

/* Compile with elibc-gcc examples/shell.c -o shell */
/* Being shell.c */

#include "include/elibc.h"

int main(void) {

  for (;;) {
    e_write(1, "sh> ", 4);
    char command[1024];
    int count = e_read(0, command, 1024);
    command[count - 1] = 0; // Warning, if you press ctrl + d the shell may freak out
    e_system(command);

  }
}

/* End shell.c */
