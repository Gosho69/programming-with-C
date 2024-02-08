all.exe:help.exe strcompare.exe strconcat.exe strlength.exe

help.exe:instructions.c
	gcc instructions.c -o help.exe

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

strlength.exe:strlength.c mystrings.o mystrings.h
	gcc strlength.c mystrings.o -o strlength

strcompare.exe:strcompare.c mystrings.o mystrings.h
	gcc strcompare.c mystrings.o -o strcompare.exe

strconcat.exe:strconcat.c mystrings.o mystrings.h
	gcc strconcat.c mystrings.o -o strconcat.exe

clean:
	del *.exe *.o
