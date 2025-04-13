#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[100];
    int count = 0;
    printf("Ingese el texto: ");
    fgets(text, sizeof(text), stdin);
    for (int i = 0; i < 100; i++)
    {
        char c = tolower(text[i]);
        if (c == 'a' || c =='e' || c =='i'|| c =='o'|| c =='u')
        {
            count++;
        }
       
    }
    printf("La cantidad de vocales es: %d", count);
    return (0);
}
