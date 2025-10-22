#include <stdio.h>
int main() {
    int A[10][10], B[10]; //A มี100ช่อง , B มี10ช่อง
    int i, j, k; //กำหนดตัวนับในloop
    int sum, count; //ผลรวมตัวเลข,นับจำนวนตัวเลขรวม
    float average; //ค่าเฉลี่ย

   //กำหนดค่าArray A
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
             if(i == 9)
                A[i][j] = 0;
            else
                A[i][j] = j;
        }
    }
    printf("-------Array A-------\n");
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    // รับค่า Array B
    printf("Enter Array B (10 index): ");
    for(i=0; i<10; i++)
        scanf("%d", &B[i]);

    //คำนวณค่าเฉลี่ยของแต่ละส่วน
    for(i=0; i<3; i++) {
        sum = 0;
        count = 0;
        if(i == 0) {  //ดินแดนที่1(แถว0-3)
            for(k=0; k<=3; k++)
                for(j=0; j<10; j++){
                    sum += A[k][j];
                    count++;
                }
        }
        else if(i == 1) {  // ดินแดนที่2(แถว4-6)
            for(k=4; k<=6; k++)
                for(j=0; j<10; j++) {
                    sum += A[k][j];
                    count++;
                }
        }
        else {  // ดินแดนที่3(แถว7-9)
            for(k=7; k<=9; k++)
                for(j=0; j<10; j++) {
                    sum += A[k][j];
                    count++;
                }
        }
        average = sum / count;
        printf("ค่าเฉลี่ยของจักรวาล A ในส่วนของดินแดนที่ %d = %.2f\n",i+1,average);
    }
    return 0;
}
