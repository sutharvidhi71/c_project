#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<unistd.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

enum 
int main(){

    int choice;
     printf("<                   Welcome To                   >\n");
    printf("<==========> Rock, Paper and Scissors <==========>\n");
    printf("PLAYER VS COMPUTER\n");
    printf("PLAYER VS PLAYER\n");
    printf("SCOREBOARD\n");
    printf("EXIT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

     switch(choice){
        case 1:
            PVSC();
            break;
        case 2:
            PVSP();
            break;
        case 3:
            scoreboard();
            break;
        case 4:
            printf("Exiting the game...\n");
            sleep(2);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
printf("Thank you for playing! Goodbye!\n");
    return 0;
}

