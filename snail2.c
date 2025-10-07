#include <stdio.h>
int main() {
    int day = 1;
    int escapeDay = 0; // วันที่หอยขึ้นจากบ่อ
    float depth; //ความลึกบ่อน้ำ
    float up = 2.63; //วันคี่เดินหน้า
    float down = 0.28; //วันคู่เดินถอยหลัง
    float snail = 0; //การเดินของหอยทาก

    printf("Input depth = ");
    scanf("%f", &depth);

    for (day = 1; day <= 7; day++) {
        if (day % 2 == 1)
            snail += up;
        else
            snail -= down;

        printf("Day %d = Distance %.2f meter \n", day, snail);

        if (escapeDay == 0 && snail >= depth)
            escapeDay = day;
    }

    while (snail < depth) {
        day++; // เริ่มนับวันที่ 8 ต่อไป
        if (day % 2 == 1)
            snail += up;
        else
            snail -= down;

        printf("่Day %d = Distance %.2f meter \n", day, snail);

       if (escapeDay == 0 && snail >= depth)
           escapeDay = day;
    }

    printf("The snail can climb out of the well in %d days \n", escapeDay);

    return 0;
}