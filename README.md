# E-Libc

E-Libc is a fork of musl with our own elibc.h and format.h header files

## elibc.h

elibc.h contains of the usual commands that the creator of ENux uses, like
read, write, system and etc

## format.h

format.h makes formatting variables easier. Instead of you memorizing what is
the format specifier of int, you can format specifie int by %int.

Another example is char is %char, long is %long and long long is %longlong

## How to Install E-Libc

- git clone the E-Libc repo
- cd into the cloned elibc repo and then run ./configure
- After that run make to compile everything, and then make install to install E-Libc to your host system
- Run elibc-install to install the extra headers of E-Libc

