#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double tinhchieudaicanhhuyen(double a) {
    return (double) (sqrt(a));
}

double tinhtongbinhphuong2canh(int canh1, int canh2) {
    int a, b;
    if (canh1 <= 0 || canh2 <= 0) {
        printf("Khong hop le");
        return 0;
    } else {
        a = canh1 * canh1;
        b = canh2 * canh2;
    }
    return (a + b);
}

int main() {
    int canh1, canh2;
    printf("Vui long nhap vao chieu dai canh so 1: ");
    scanf("%d", &canh1);
    printf("Vui long nhap vao chieu dai canh so 2: ");
    scanf("%d", &canh2);
    printf("Chieu dai canh huyen la: %.lf", tinhchieudaicanhhuyen(tinhtongbinhphuong2canh(canh1, canh2)));
    return 0;
}