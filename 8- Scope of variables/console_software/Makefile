all:taskmanager.exe processes.o

taskmanager.exe:taskmanager.c processes.o processes.h
	gcc taskmanager.c processes.o -o taskmanager

processes.o:processes.c processes.h
	gcc -c processes.c -o processes.o 

clean:
	del *.exe *.o