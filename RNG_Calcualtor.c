#include<stdio.h>
#include<stdlib.h>

//It favours smallers number a lot.
int main()
{
    //declaration of variables
    int from, to, range, number, random,count=0;
    char exit;

    //asking the user for the range
    printf("\n\nRNG Calculator, insert the range:");
    do{
        printf("\nFrom: ");
        scanf("%d",&from);
        printf("\nTo: ");
        scanf("%d",&to);
        if(from>=to){
            printf("\n\nError: (from) must be smaller than (to)");
        }
    }while(from>=to);

    //asking the user for the number they want
    do{
        printf("\n\nInsert the number you want to get: ");
        scanf("%d",&number);
        if(number>to||number<from)
            printf("Error: (number) must be greater than (from) and smaller than (to)");
    }while(number>to||number<from);

    //looking for the number in the inserted range
    do{
        count++;
        random = from + (rand() % (int)(to - from + 1));
        printf("\n%d --> %d",count, random);
    }while(random != number);

    printf("\n\nYour number was found, it only took %d attempts\n\n\n", count);

    system("ping 127.0.0.1 -n 6 > nul");

    return 0;
}
