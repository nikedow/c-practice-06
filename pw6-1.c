#include <stdio.h>
int main(void) {
    int c;
    int state = 0;
    int count = 0;
    while ((c = getchar()) != '#' && c != EOF) {
        switch (state) {
            case 0:
                if (c == 'w') state = 1;
                break;

            case 1:
                if (c == 'h') state = 2;
                else if (c == 'w') state = 1;
                else state = 0;
                break;

            case 2:
                if (c == 'i') state = 3;
                else if (c == 'w') state = 1;
                else state = 0;
                break;

            case 3:
                if (c == 'l') state = 4;
                else if (c == 'w') state = 1;
                else state = 0;
                break;

            case 4:
                if (c == 'e') {
                    count++;
                    state = 0;
                } 
                else if (c == 'w') state = 1;
                else state = 0;
                break;
        }
    }
    printf("количество вхождений \"while\": %d\n", count);
    return 0;
}