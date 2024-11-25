#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi, soDien;
    double tienDien = 0;

    // Nh?p ch? s? c? và m?i
    printf("Nhap chi so cu: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    // Ki?m tra ch? s? m?i ph?i l?n hõn ch? s? c?
    if (chiSoMoi < chiSoCu) {
        printf("Chi so moi phai lon hon hoac bang chi so cu.\n");
        return 1;
    }

    // Tính s? ði?n tiêu th?
    soDien = chiSoMoi - chiSoCu;

    // Tính ti?n ði?n
    if (soDien <= 50) {
        tienDien = soDien * 10000;
    } else if (soDien <= 100) {
        tienDien = 50 * 10000 + (soDien - 50) * 15000;
    } else if (soDien <= 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    } else if (soDien <= 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
    }

    // In k?t qu?
    printf("So dien tieu thu: %d (kWh)\n", soDien);
    printf("Tien dien phai tra: %.0f VND\n", tienDien);

    return 0;
}

