#include <stdio.h>
int main() {
    int day = 1;
    float depth; //ความลึกบ่อน้ำ
    float up = 2.63; //วันคี่เดินหน้า
    float down = 0.28; //วันคู่เดินถอยหลัง
    float snail = 0; //การเดินของหอยทาก

    printf("Input Depth = ");
    scanf("%f", &depth);
    
    printf("The total distance over 7 days is 9.68 meter. \n");

    while (snail < depth) {
        if (day % 2 == 1) {
            snail += up; //วันคี่เดินหน้า
        } else {
            snail -= down; //วันคู่ถอยหลัง
        }

        printf("่Day %d = Distance %.2f Meter \n", day, snail);

        if (snail >= depth) {
            printf("The snail can climb out of the well in %d days. \n", day);
            break;
        }
        day++;
    }
    return 0;
}

