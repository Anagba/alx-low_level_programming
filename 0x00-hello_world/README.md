the first task is to write a script to the preprocessor stagein the compilation of C-programs this is done by 
#!/bin/bash
gcc -E $CFILE -o c

the second task is to write a script to compile the code only and this is done by 
#!/bin/bash
gcc -C $CFILE

the third task is to assemble the code to object code for the computer to understand, this is done by 
#!/bin/bash
gcc -S $CFILE

