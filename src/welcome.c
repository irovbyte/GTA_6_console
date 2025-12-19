#include <stdio.h>
#include <stdlib.h>
#include "welcome.h"

int menuSelect() {
    int choice;

    while (1) {
        system("clear");
        title();
        menu();

        printf("\nВведите номер пункта: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3)
            return choice - 1; 
        else {
            printf("Неверный ввод. Попробуйте снова.\n");
            getchar(); getchar(); // Ждем нажатия клавиши
        }
    }
}


void title() {  //<--- название заголовка изменил на титл
    printf("\033[1;33m"); // цвет рамки теперь желтый
    printf("┌─────────────────────────────────────┐\n");
    printf("│"); printf("\033[1;37m"); printf("        ДОБРО ПОЖАЛОВАТЬ             "); printf("\033[1;33m"); printf("│\n");
    printf("│"); printf("\033[1;37m"); printf("             В ШКОЛУ                 "); printf("\033[1;33m"); printf("│\n");
    printf("└─────────────────────────────────────┘\033[0m\n");
}
void menu() {
    printf("┌─────────────────────────────────────┐\n");
    printf("│                                     │\n");
    printf("│          [1]Начать игру             │\n");
    printf("│                                     │\n");
    printf("│                                     │\n");
    printf("│          [2]Продолжить              │\n");
    printf("│                                     │\n");
    printf("├─────────────────────────────────────┤\n");
    printf("│           [3]Кредиты                │\n");
    printf("└─────────────────────────────────────┘\n");
}