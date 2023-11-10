#include <stdio.h>

int main() {
    float tong_thu_nhap, tien_giam_tru, thue_thu_nhap, luong_rong;
    printf("Tong thu nhap la: ");
    scanf("%f", &tong_thu_nhap);
    printf("Tien tru: ");
    scanf("%f", &tien_giam_tru);
    float thu_nhap_chiu_thue = tong_thu_nhap - tien_giam_tru;
    if (thu_nhap_chiu_thue <= 5000000) {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.05;
    } else if (thu_nhap_chiu_thue <= 10000000) {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.1;
    } else if (thu_nhap_chiu_thue <= 18000000) {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.15;
    } else if (thu_nhap_chiu_thue <= 32000000) {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.2;
    } else if (thu_nhap_chiu_thue <= 52000000) {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.25;
    } else if (thu_nhap_chiu_thue <= 80000000) {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.3;
    } else {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.35;
    }
    luong_rong = tong_thu_nhap - tien_giam_tru - thue_thu_nhap;
    printf("Thue thu nhap : %.2f\n", thue_thu_nhap);
    printf("Luong rong la : %.2f", luong_rong);
    return 0;
}