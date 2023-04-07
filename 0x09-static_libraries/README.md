# C - Static libraries

### libmy.a
- This static library elists all object files in the working
  directory.

### create_static_lib.sh
- This script creates a static library called liball.a from
  all the .c files that are in the current directory.
- The trick on this task was writing the command to compile all the
  .c files, then add them in the static library.
