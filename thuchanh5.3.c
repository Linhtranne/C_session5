#include <stdio.h>

int main() {
    int tong_so_phut;
    float cuoc_thue_bao, cuoc_50_phut_dau, cuoc_150_phut_tiep_theo, cuoc_200_phut_tiep_theo, cuoc_phut_tiep_theo, tong_cuoc;
    printf("Nhap so phut: ");
    scanf("%d", &tong_so_phut);
    cuoc_thue_bao = 25000;
    if (tong_so_phut <= 50) {
        cuoc_50_phut_dau = tong_so_phut * 600;
        tong_cuoc = cuoc_thue_bao + cuoc_50_phut_dau;
    } else if (tong_so_phut <= 200) {
        cuoc_50_phut_dau = 50 * 600;
        cuoc_150_phut_tiep_theo = (tong_so_phut - 50) * 400;
        tong_cuoc = cuoc_thue_bao + cuoc_50_phut_dau + cuoc_150_phut_tiep_theo;
    } else {
        cuoc_50_phut_dau = 50 * 600;
        cuoc_150_phut_tiep_theo = 150 * 400;
        cuoc_200_phut_tiep_theo = (tong_so_phut - 200) * 200;
        tong_cuoc = cuoc_thue_bao + cuoc_50_phut_dau + cuoc_150_phut_tiep_theo + cuoc_200_phut_tiep_theo;
    }
    printf("Tong cuoc la : %.2f VNÐ", tong_cuoc);
    return 0;
}