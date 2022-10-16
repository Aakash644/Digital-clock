#include <stdio.h>   // basic input output file
#include <windows.h> // file for all system functions

int main()
{
    int hour, min, sec;
    system("color F0"); // XX   first X for background and second for foreground
                        //   0-black,1-blue,2-green,3-aqua,4-red,5-purple,6-yellow,
                        // 7-white,8-gray,9-light blue,A to F light versions of green to white
    while (hour >= 24 || min >= 60 || sec >= 60)    // loop will get terminated if invalid entries are entered
    { 
        system("CLS");
        printf("Enter your current time:\n");
        printf("Enter hour:\n");
        scanf("%d", &hour);
        printf("Enter min:\n");
        scanf("%d", &min);
        printf("Enter sec:\n");
        scanf("%d", &sec);

        if (hour >= 24 || min >= 60 || sec >= 60)
        {
            printf("invalid input");
        }
        Sleep(1000);
    }
    while (1)
    { // infinite loop
        for (hour; hour < 24; hour++)
        {
            for (min; min < 60; min++)
            {
                for (sec; sec < 60; sec++)
                {
                    system("CLS");
                    printf("\n\n\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------");
                    printf("-------------------------------------------------------------------------Time:%d:%d:%d---------------------------------------------------------------------------", hour, min, sec);
                    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                    Sleep(1000);
                }
                sec = 0;
            }
            min = 0;
        }
        hour = 0;
    }

    return 0;
}
