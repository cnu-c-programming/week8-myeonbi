#include <stdio.h>

int main() {

    char arr[] = "hello";
    char *p = "hello";

    arr[0] = 'H';
    printf("%s\n", arr);

    return 0;
}
