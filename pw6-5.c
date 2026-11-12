#include <stdio.h>
#define PI 3.1415926535
int main(void) {
    int choice;
    double r, h, a, v;
    while (1) {
        printf("\n--- КАЛЬКУЛЯТОР ОБЪЕМА ---\n");
        printf("1. сфера (по радиусу)\n");
        printf("2. куб (по стороне)\n");
        printf("3. цилиндр (по радиусу и высоте)\n");
        printf("4. конус (по радиусу и высоте)\n");
        printf("5. выход\n");
        printf("выберите действие (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("ошибка: введено не число.\n");
            while (getchar() != '\n');
            continue;
        }
        if (choice < 1 || choice > 5) {
            printf("ошибка: неверный пункт меню. Выберите от 1 до 5.\n");
            continue;
        }
        if (choice == 5) {
            printf("выход из программы.\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("введите радиус сферы: ");
                scanf("%lf", &r);
                v = (4.0 / 3.0) * PI * r * r * r;
                printf("объем сферы: %.2f\n", v);
                break;
            case 2:
                printf("введите сторону куба: ");
                scanf("%lf", &a);
                v = a * a * a;
                printf("объем куба: %.2f\n", v);
                break;
            case 3:
                printf("введите радиус и высоту цилиндра: ");
                scanf("%lf %lf", &r, &h);
                v = PI * r * r * h;
                printf("объем цилиндра: %.2f\n", v);
                break;
            case 4:
                printf("введите радиус и высоту конуса: ");
                scanf("%lf %lf", &r, &h);
                v = (1.0 / 3.0) * PI * r * r * h;
                printf("объем конуса: %.2f\n", v);
                break;
        }
    }
    return 0;
}