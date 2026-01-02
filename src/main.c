#include <stdio.h>
#include <stdlib.h>

#include "center.h"
#include "loading.h"
#include "welcome.h"

int main() {
    int choice = menuSelect();

    switch (choice) {
        case 1:
            system("clear");
            showLoading();
            printCentered("Игра началась!\n");
            break;

        case 2:
            printCentered("Продолжаем игру...\n");
            break;

        case 3:
            printCentered("Открываем кредиты...\n");
            break;

        default:
            printCentered("Неверный ввод.\n");
            break;
    }

    return 0;
}