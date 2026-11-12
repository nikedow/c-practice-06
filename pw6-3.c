#include <stdio.h>
int main(void) {
    int num;
    int count1 = 0;
    long long sum1 = 0;
    int count2 = 0;
    long long sum2 = 0;

    while (scanf("%d", &num) == 1 && num != 0) {
        int treugol = 0;
        if (num > 0) {
            int current = 0;
            int step = 1;
            while (current < num) {
                current = current + step;
                step++;
            }
            if (current == num) {
                treugol = 1;
            }
        }

        if (treugol == 1) {
            count1++;
            sum1 = sum1 + num;
        }   
        else {
            count2++;
            sum2 = sum2 + num;
        }
    }
    double avg1 = 0.0;
    if (count1 > 0) {
        avg1 = (double)sum1 / count1;
    }
    double avg2 = 0.0;
    if (count2 > 0) {
        avg2 = (double)sum2 / count2;
    }
    printf("треугольные числа: количество = %d, среднее = %.2f\n", count1, avg1);
    printf("остальные числа:   количество = %d, среднее = %.2f\n", count2, avg2);
    return 0;
}
 /*
  * ленивое вычисление:
  * в выражении (A && B) если A ложно, B даже не вычисляется, 
  * так как общий результат уже точно будет ложью.
  * в выражении (A || B) если A истинно, B не вычисляется, 
  * так как результат уже точно будет истиной
  */