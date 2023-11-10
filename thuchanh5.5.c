#include <stdio.h>

int main() {
    int day, month;
    printf("ngay : ");
    scanf("%d", &day);
    printf("thang : ");
    scanf("%d", &month);
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Bao Binh\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Song Ngu\n");
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Bach Duong\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Kim Nguu\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
        printf("Song Tu\n");
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        printf("Cu Giai\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Su Tu\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Xu Nu\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Thien Binh\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Bo Cap\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Nhan Ma\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Ma Ket\n");
    }

    return 0;
}