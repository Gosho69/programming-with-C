#include <stdio.h>
#include "processes.h"
#include <stdlib.h>
#include <string.h>

struct Process processes[MAX_PROCESSES];
int processescount = 0;

static int nextprocessid(){
    static int currentProcessID = 1;
    if(processescount < MAX_PROCESSES){
        int nextID = currentProcessID;
        currentProcessID++;
        return nextID;
    }else{
        return 0;
    }
}

int creatnewprocess(char name[]){
    if(processescount < MAX_PROCESSES){
        int newID = nextprocessid();
        if(newID != 0){
            processes[processescount].ID = newID;
            strncpy(processes[processescount].name, name, MAX_NAME_LENGHT);
            processes[processescount].name[MAX_NAME_LENGHT + 1  ] = '\0';
            processescount++;
            return newID; 
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

void stopprocess(int id){
    if(id<0 || id>processescount){
        return;
    }
    int processIndex = -1;
    for(int i=0;i<processescount;i++){
        if(processes[i].ID == id){
            processIndex = i;
            break;
        }
    }

    if(processIndex != -1){
        for(int i = processIndex; i<processescount; i++){
            processes[i] = processes[i+1];
        }
        processescount--;
    }
}