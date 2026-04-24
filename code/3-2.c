#include <stdio.h>
#include <string.h>

int main(int args, char *argv[]) {

    for (int i = args - 1; i > 1; i--) {
        for (int j = 1; j < i; j++) {
            if (strcmp(argv[j], argv[j + 1]) > 0) {
                char *temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }

    for(int i = 1; i < args; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
