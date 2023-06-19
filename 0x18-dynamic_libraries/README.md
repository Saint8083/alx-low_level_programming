How to create a Dynamic Library
The way to create a Dynamic Library in Linux is with the gcc command using the -c to generate the object files (.o) from the source files (.c) and the -fPIC to make the code position independent. Thus, the following command makes a bunch of .o files from each .c file in the current directory (You can select which functions you want for your library).

gcc -c -fPIC *.c
Next, we are going to put together those objects files into one library. To do this as a Dynamic Library we also use gcc but with the -shared option. The -o is to specify the name of the file you want it to have.

gcc -shared -o liball.so *.o
This way you must have your library created. To verify that you did it and have the right functions as dynamic symbols you can use:

nm -D liball.so
Great! at this point, you have your Dynamic Library created!

How to use it
Now, you have to compile the library with your main.c file to link it and use it as you want. For this to work, you have to add the location of your library files into the environmental variable to know where to find the functions.

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
