all : stage1 stage2

stage1 : recursive_fib.o print_fib.o run_fib.o
	clang recursive_fib.o print_fib.o run_fib.o -o stage1 -Wall -Wextra -g

stage2 : iterative_fib.o print_fib.o run_fib.o
	clang iterative_fib.o print_fib.o run_fib.o -o stage2 -Wall -Wextra -g

recursive_fib.o : recursive_fib.c
	clang recursive_fib.c -c -o recursive_fib.o -Wall -Wextra -g

iterative_fib.o : iterative_fib.c
	clang iterative_fib.c -o iterative_fib.o -Wall -Wextra -g

print_fib.o : print_fib.c fib.h
	clang print_fib.c -c -o print_fib.o -Wall -Wextra -g

run_fib.o : run_fib.c print_fib.h
	clang run_fib.c -c -o run_fib.o -Wall -Wextra -g

clean :
	rm *.o stage1 stage2