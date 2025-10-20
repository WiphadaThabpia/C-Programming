#include <stdio.h>
int main() {
    int A[10][10]; //10*10ช่อง
    float C[10][10]; //เก็บค่าเฉลี่ยที่คำนวณ
    int B[10]; //10ช่อง
    int i, j; //แถว,คอลัมน์

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
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("-------Array B-------\n");
    printf("Enter Array B(10index): ");
    for(i=0;i<10;i++)
        scanf("%d", &B[i]);

    //คำนวณค่าเฉลี่ยประจำดินแดนของตน
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            C[i][j] = (A[i][j] + B[j]) / 2.0;
    //แสดงผลดินแดนA หลังคำนวณค่าเฉลี่ย
    printf("=======Array A (Average)=======\n");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            printf("%.1f ",C[i][j]);
        printf("\n");
    }
    return 0;
}
