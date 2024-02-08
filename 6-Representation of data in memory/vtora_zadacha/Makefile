all:safeadd.exe safedivide.exe safemultiply.exe safesubtract.exe

safedivide.exe:safedivide.c safeint.o safeint.h
	gcc safedivide.c safeint.o -o safedivide

safemultiply.exe:safemultiply.c safeint.o safeint.h
	gcc safemultiply.c safeint.o -o safemultiply

safesubtract.exe:safesubtract.c safeint.o safeint.h
	gcc safesubtract.c safeint.o -o safesubtract

safeadd.exe:safeint.o safeadd.c safeint.h
	gcc safeadd.c safeint.o -o safeadd

safeint.o:safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

clean:
	del *.exe *.o