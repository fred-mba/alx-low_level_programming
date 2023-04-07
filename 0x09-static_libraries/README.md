# C - Static libraries

### libmy.a
- This is a static library elisting all object file in the current
  directory.

### create_static_lib.sh
- This is a script that creates a static library called liball.a from
  all the .c files that are in the current directory.
- The secrete in this file is to write the command to compile all th
  .c files, then add them in the static library.
