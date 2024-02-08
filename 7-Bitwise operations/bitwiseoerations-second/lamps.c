#include <stdio.h>
int main(void){
    unsigned char lights = 0;
    int light;
    int choice;
    do{
        printf("Enter your choice(1-Switch light on/off;2-Print the current state of the lights;3-Exit):");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                printf("Enter a light to turn on/off:");
                scanf("%d",&light);
                lights = lights ^ (1<<(light-1));
                }break;
            case 2:{
                printf("The light is on in rooms:");
                for(int i=0;i<8;i++){
                    if((lights & (1<<i)) != 0){
                        printf(" %d",i+1);
                    }
                }
                printf("\n");
                }break;
            default:{
                printf("Wrong choice, please enter a valid one");
            }break;
        }
    }while(choice != 3);


    return 0;
}