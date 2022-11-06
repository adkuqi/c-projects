#include <stdio.h>
#include <windows.h>

int main() {

    int h, m, s;
    int d = 1000;

    printf("Set time, enter hours: \n");
    scanf("%d", &h);
    printf("Enter minutes: \n");
    scanf("%d", &m);
    printf("Enter seconds: \n");
    scanf("%d", &s);

    if(h > 24 || m > 60 || s > 60) {
        printf("This is not a valid time.\n");
        exit(0);
    }

    while(1) {
        s++;
        if(s > 59) {
            m++;
            s = 0;
        }
        if (m > 59) {
            h++;
            m = 0;
        }
        if (h > 23) {
            h = 0;
        }

        printf("Clock: ");
        printf("%02d:%02d:%02d\n", h, m, s);
        Sleep(d);
        system("cls");
    }
}