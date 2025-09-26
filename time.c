#include <stdio.h>
int main()
    {
        printf("Enter time");
        int seconds;
        scanf("%d", &seconds);
        int hours = seconds/3600;
        int minutes= seconds%3600/60;
        int sec = seconds%3600%60;printf("%d %d %d", hours, minutes, sec);
        return 0;
    }
