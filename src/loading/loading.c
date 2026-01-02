#include "loading.h"

#include <stdio.h>
#include <unistd.h>

#include "center.h"

void showLoading() {
    const char* frames[] = {"[=             ]", "[==            ]", "[====          ]", "[======        ]",
                            "[=========     ]", "[==========    ]", "[===========   ]", "[============  ]",
                            "[============= ]", "[==============]"};

    int frameCount = sizeof(frames) / sizeof(frames[0]);

    for (int i = 0; i < frameCount; i++) {
        printf("\033[2J\033[H");
        printCentered(frames[i]);
        usleep(200000);
    }

    printf("\033[2J\033[H");
    printCentered("========== Загрузка завершена ==========");
    printf("\033[2J\033[H");
    sleep(1);
}