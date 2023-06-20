It is known that the purpose of libraries in C are to order the functions we build and work with. To avoid mistakes and to be efficient, programmers need to be organized in their work, but which kind of library would be better a Static Library or a Dynamic Library (also known as Shared Library)?

In a previous post we talk about what a is Static Library and how to create one, you can see it in the link below:

https://medium.com/@kenneth.ca95/what-you-need-to-know-about-c-static-libraries-69842f925e0a

The main difference from Static Libraries and Dynamic Libraries in Static, the linker makes a copy of all of the selected functions for the library to the executable file and in Dynamic it is not necessary. This means a difference in use of memory but also in risk of data corruption and in how easily the code is handled.

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
Then, you can compile it by typing the following:

gcc -L . 0-main.c -l all -o example
Note that the name we gave to the library in this example was ‘all’. Here we use the -L option to tell the program where to find the library, in this case . that refers to the current directory. The -l option is to tell the compiler to look for the library.
