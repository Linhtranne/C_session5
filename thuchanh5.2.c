#include <stdio.h>

int main() {
    float doanh_thu, hoa_hong;
    printf("Doanh thu : ");
    scanf("%f", &doanh_thu);
    if (doanh_thu <= 100000000) {
        hoa_hong = doanh_thu * 0.05;
    } else if (doanh_thu <= 300000000) {
        hoa_hong = doanh_thu * 0.1;
    } else {
        hoa_hong = doanh_thu * 0.2;
    }
    printf("Hoa hong la: %.2f", hoa_hong);
    return 0;
}