all:main.exe quadraticroots.o

main.exe:main.c quadraticroots.o
	gcc main.c quadraticroots.o -o program.exe

quadraticroots.o:quadraticroots.h quadraticroots.c
	gcc -c quadraticroots.c -o quadraticroots.o

clean:
	del *.o *.exe