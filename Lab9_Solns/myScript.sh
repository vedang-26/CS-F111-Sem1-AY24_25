rm -f *.o
rm -f program

gcc -c book_fun.c
gcc -c books_catalog.c
gcc -c main_library.c

gcc book_fun.o books_catalog.o main_library.o -o program

./program
rm -f *.o
