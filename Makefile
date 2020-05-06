all: so

so: object
	ar rcs libft.so *.o
	ar rcs libft.a *.o
object:
	gcc -Wall -Werror -Wextra -I . -c bonus/*.c part1/*.c part2/*.c

clean:
	rm -f *.o

fclean: clean
	rm -f libft.so
	rm -f libft.a
re: fclean all
