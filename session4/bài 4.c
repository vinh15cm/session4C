#include <stdio.h>

int main() {
    int month;

    printf("Nhap so thang (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("So thang khong hop le.\n");
    } else if (month == 2) {
        printf("Thang %d co 28 hoac 29 ngay (nam nhuan).\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Thang %d co 30 ngay.\n", month);
    } else {
        printf("Thang %d co 31 ngay.\n", month);
    }

    return 0;
}

