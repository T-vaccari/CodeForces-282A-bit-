#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>




int main (){

    //Variabili


    int x=0;
    int statement;
    char stat[4];

    
    //Input

    scanf("%d",&statement);





    //Elaborazione

    for(int i=0;i<statement;i++){
        scanf("%s",stat);
        if(!(strcmp("X++",stat)) || !(strcmp("++X",stat))){
            x++;
        }
        if(!(strcmp("X--",stat)) || !(strcmp("--X",stat))){
            x--;
        }
    }








    //OutPut
    printf("%d",x);






    


    return 0;
}

