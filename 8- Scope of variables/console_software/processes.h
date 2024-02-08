#ifndef _PROCESSES_H_
#define _PROCESSES_H_

#define MAX_PROCESSES 5
#define MAX_NAME_LENGHT 30

struct Process{
    long ID;
    char name[MAX_NAME_LENGHT + 1];
};

extern struct Process processes[MAX_PROCESSES];
extern int processescount;

int creatnewprocess(char name[]);
void stopprocess(int id);


#endif