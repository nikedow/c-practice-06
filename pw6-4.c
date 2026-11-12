#include <stdio.h>
int main(void) {
    double copies;
    printf("Введите тираж книги: ");
    if (scanf("%lf", &copies) == 1 && copies > 0) {
        double tier1 = 0.0;
        double tier2 = 0.0;
        double tier3 = 0.0;
        if (copies <= 10000) {
            tier1 = copies * 0.10;
        } 
        else if (copies <= 50000) {
            tier1 = 10000 * 0.10;
            tier2 = (copies - 10000) * 0.12;
        } 
        else {
            tier1 = 10000 * 0.10;
            tier2 = 40000 * 0.12;
            tier3 = (copies - 50000) * 0.15;
        }
        double total = tier1 + tier2 + tier3;
        printf("\n-------- Результаты расчета --------\n");
        printf("исходный тираж:              %.0f шт.\n", copies);
        printf("ступень 1 (10%% до 10 000):   %.2f\n", tier1);
        printf("ступень 2 (12%% 10k-50k):     %.2f\n", tier2);
        printf("ступень 3 (15%% свыше 50k):   %.2f\n", tier3);
        printf("------------------------------------\n");
        printf("итоговая сумма роялти:       %.2f\n", total);
    } else {
        printf("ошибка: тираж должен быть положительным числом.\n");
    }
    return 0;
}
 /*
  * для денежных расчетов используется тип double, так как он обеспечивает 
  * 15-17 значащих цифр точности (в отличие от 6-7 у float). При расчете 
  * крупных сумм в типе float накапливается погрешность и теряются копейки.
  */