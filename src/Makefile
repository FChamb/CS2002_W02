all : stage1

stage1 : recursive_fib.o print_fib.o run_fib.o
	clang recursive_fib.o print_fib.o run_fib.o -o stage1 -Wall -Wextra -g

recursive_fib.o : recursive_fib.c
	clang recursive_fib.c -c -o recursive_fib.o -Wall -Wextra -g

print_fib.o : print_fib.c fib.h
	clang print_fib.c -c -o print_fib.o -Wall -Wextra -g

run_fib.o : run_fib.c print_fib.h
	clang run_fib.c -c -o run_fib.o -Wall -Wextra -g

clean :
	rm *.o stage1