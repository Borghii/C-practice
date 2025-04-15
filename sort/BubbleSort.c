#include <stdio.h>

void bubbleSort(int ages[] );

int main()
{
    int ages [8];

    for (int i = 0; i < 8; i++)
    {
        printf("Ingrese las edades: \n");
        scanf("%d", &ages[i]);
    }

    bubbleSort(ages);

    printArray(ages);

    printf("%d",ages[7]);
    return 0;
}

void bubbleSort(int ages[] ){

    int length = sizeof(ages)/sizeof(ages[0]);


    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (ages[j] > ages[j + 1])
            {
                int temp = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = temp;
            }
        }
    }
    

}

void printArray(int ages[]){

    int length = sizeof(ages)/sizeof(ages[0]);



    for (int i = 0; i < length; i++)
    {
        printf("Ages: %d", ages[i]);
    }
    
}
