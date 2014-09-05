malloc_demo : malloc_demo.o libmalloc.so
	gcc -o malloc_demo malloc_demo.o -L. -lmalloc

libmalloc.so : malloc.h malloc.o
	gcc malloc.o -shared -fPIC -o libmalloc.so

malloc.o : malloc.h malloc.c
	gcc -fPIC -c malloc.c

malloc_demo.o : malloc_demo.c
	gcc -fPIC -c malloc_demo.c

clean:
	rm -rf *.o *.so malloc_demo
