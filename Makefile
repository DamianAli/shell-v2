all:
	gcc -Wall -Werror -pedantic -Wextra *.c -o hsh && cp man_1_hsh hsh.1 && gzip hsh.1 && sudo cp hsh.1.gz /usr/share/man/man1 && mandb
gdb:
	gcc -Wall -Werror -pedantic -Wextra *.c -ggdb -g -o hsh
run:
	./hsh
run-v:
	valgrind -v ./hsh
run-m:
	valgrind --leak-check=full --show-leak-kinds=all ./hsh
run-e:
	valgrind --track-origins=yes ./hsh
clean:
	sudo rm hsh *~ /usr/share/man/man1/hsh.1.gz hsh.1.gz hsh.1 && mandb
