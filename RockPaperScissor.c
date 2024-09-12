#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char p1,p2;
    char p1Name[100],p2Name[100];
    
    printf("Enter Player 1 Name: ");
    scanf("%s",p1Name);
     printf("Enter Player 2 Name: ");
    scanf("%s",p2Name);
    
    printf("Enter %s's input (R/P/S): ",p1Name);
    scanf(" %c", &p1); 
    printf("Enter %s's input (R/P/S): ",p2Name);
    scanf(" %c", &p2); 
    
    p1 = toupper(p1);
    p2 = toupper(p2);
    
    if(p1==p2){
        printf("Its tie!\n");
    }
    else if((p1=='R' && p2=='S')||(p1=='P' && p2=='R')||(p1=='S' && p2=='P')){
        printf("%s Wins!\n",p1Name);
    }
    else if((p1=='S' && p2=='R')||(p1=='R'&&p2=='P')||(p1=='P' && p2=='S')){
        printf("%s Wins!\n",p2Name);
    }
    else{
        printf("Invalid input\n");
    }
    return 0;
}