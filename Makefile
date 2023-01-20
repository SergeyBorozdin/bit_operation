all:
	gcc main.c byte.c byte.h -g
	./a.out

clean:
	rm *.gch *.out

rebuild: clean all