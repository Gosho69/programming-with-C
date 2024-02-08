#include <stdio.h>
#include "processes.h"

void printMenu() {
    printf("\nOptions:\n");
    printf("1. Create a new process\n");
    printf("2. List all processes\n");
    printf("3. Stop a process\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main(void){
   int choice;
   char name[MAX_NAME_LENGHT + 1];
   int processId;
   do{
        printMenu();
        scanf("%d", &choice);
        switch(choice){
            case 1:{
            printf("Enter a name for the process:");
            scanf("%s", name);
            int newProcessID = creatnewprocess(name);
            if(newProcessID != 0){
                printf("Process cerated successfully, Process ID:%d\n",newProcessID);
            }else{
                printf("No more space left for new processes, stop one to create a new one\n");
            }
            }
            break;

            case 2:{
            printf("Processes:\n");
            for(int i=0;i<processescount;i++){
                printf("Process ID:%d, name: %s\n",processes[i].ID,processes[i].name);
            }
            }
            break;

            case 3:{
            printf("Enter id of the process you want to stop:");
            scanf("%d", &processId);
            if(processId > 0 && processId <= processescount){
            stopprocess(processId);
            printf("Process with ID %d stopped.\n",processId);
            }else{
                printf("Invalid process ID.\n");
            }
            }
            break;

            case 4:{
            printf("Exiting the program.\n");
            }
            break;

            default:{
            printf("Invalid choice,Please try again\n");
        }
      }
   }while(choice != 4);

    return 0;
}