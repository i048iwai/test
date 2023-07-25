#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double myRoot(double x) {//関数をdouble型に変更した。
    if (!(x >= 0)) {//xが0以上ではないときという条件文に変えた。
        printf("数ではないです\n");
        exit(1);
    }
    return sqrt(x);
}

int main(void) {
    int i = 0;
    double *x = (double *)malloc(sizeof(double) * 101); // 配列の要素数を101に変更

    while (i <= 100) {
        x[i] = myRoot((double)i);
        i++;
    }

    //以下は確認用(このままで良い)
    printf("x[0]=%f\n", x[0]);
    printf("x[1]=%f\n", x[1]);
    printf("x[2]=%f\n", x[2]);
    printf("x[3]=%f\n", x[3]);
    printf("x[4]=%f\n", x[4]);
    printf("x[99]=%f\n", x[99]);
    printf("x[100]=%f\n", x[100]);

    free(x);
    return 0;
}
