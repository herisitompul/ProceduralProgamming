//12S22027 - Ferry Panjaitan
//12S22033 - Mickael Sitompul

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/todo.h"
#include "./libs/repository.h"

int main(int _argc, char **_argv) {
    loadInitialData("./storage/todo-repository.txt");
    
    int looping = 0;
    char command[100];
    
    do {
        command[0] = '\0';
        short k = 0;
        
        do {
            char i = getchar();
            if (i == '\n') {
                break;
            }
            if (i == '\r') {
                continue;
            }
            command[k] = i;
            command[++k] = '\0';
        } while (1 == 1);

        char *input = strtok(command, "#");

        if (strcmp(input, "todo-add") == 0) {
            char *time = strtok(NULL, "#");
            char *activity = strtok(NULL, "#");
            addNewActivity(time, activity);
        } else if (strcmp(input, "todo-print-all") == 0) {
            printAllActivities();
        }
        
        if (strcmp(input, "---") == 0) {
            looping = 1;
        }
    } while (looping != 1);

    return 0;
}
 