#include <stdio.h>
#include <stdbool.h>

int weight;
int diameter;
int hardeness;





void setPieces();
bool checkPieces();
bool askContinueWorking();


int main()
{
    int totPieces=0;
    int acceptedPieces=0;
    int deniedPieces=0;
    int countConsecutiveDeniedPieces=0;

    
    bool robotWorking = true;
    bool consecutiveAlarm = false;

    do
    {
        setPieces();
        if (checkPieces())
        {
            acceptedPieces++;
            countConsecutiveDeniedPieces=0;
        }else{
            deniedPieces++;
            countConsecutiveDeniedPieces++;

            if (countConsecutiveDeniedPieces==11)
            {
                consecutiveAlarm=true;
            }
            
        }

        totPieces++;

        robotWorking = askContinueWorking();
        
    } while (robotWorking && countConsecutiveDeniedPieces<=10);

    printf("Report:\n");
    printf("Total Pieces: %d\n", totPieces);
    printf("Accepted Pieces: %d\n", acceptedPieces);
    printf("Denied Pieces: %d\n", deniedPieces);
    printf("Consecutive Alarm: %s\n", consecutiveAlarm ? "True" : "False");

    
    return 0;
}


void setPieces() {
    printf("Set attributes \n");

    printf("Weight: \n");
    scanf("%d", &weight);
    
    printf("Diameter: \n");
    scanf("%d", &diameter);
    
    printf("Hardness: \n");
    scanf("%d", &hardeness);
}

bool checkPieces(){
    return weight>=50 && (diameter>=10 && diameter<=20) && hardeness>=70;
}

bool askContinueWorking(){
    char response;
    printf("Enter 'y' to continue or 'n' to stop\n");
    scanf(" %c", &response);
    return response == 'y';
}

