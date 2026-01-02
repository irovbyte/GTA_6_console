#include "center.h"

#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>

int getTerminalWidth() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    return w.ws_col;
}

void printCentered(const char* text) {
    int width = getTerminalWidth();
    int len = strlen(text);

    int padding = (width - len) / 2;
    if (padding < 0) padding = 0;

    for (int i = 0; i < padding; i++) printf(" ");

    printf("%s\n", text);
}