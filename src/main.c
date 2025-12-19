#include <stdio.h>
#include "welcome.h"

int main() {
    int choice = menuSelect();
    switch (choice)
    {
    case 0:
        printf("Начинаем игру...\n");
        break;
    case 1:
        printf("Продолжаем игру...\n");
        break;
    case 2:
        printf("Открываем кредиты...\n");
        break;
    }
    return 0;
}