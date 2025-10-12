#include <stdio.h>
int main() {
    int beaker = 3000; //ขนาดบีกเกอร์
    int water = 0; //ปริมาณน้ำ
    int add = 250; //เติมน้ำครั้งละ250ml
    int apple; //ปริมาตรแอปเปิ้ล
    int step = 0; //จำนวนครั้งที่เติมน้ำ
    double h = 0; //ระยะห่างระหว่างก้นแก้วกับแอปเปิ้ล

    printf("Input Apple = ");
    scanf("%d", &apple);

    printf("Start: add %d ml water each time. \n", add);

    while(water <= beaker) {
        step++;
        water += add; //เติมน้ำไปเรื่อยๆทีละ250
        printf("Step %d: Added water = %d ml, Total water = %d ml.\n", step, add, water);

        //แอปเปิ้ลจะลอยเมื่อน้ำ >= ปริมาตรแอปเปิ้ล
        if(water >= apple && h == 0) {
            h = 1.0; //ระยะห่าง h น้อยที่สุด

            printf("The apple starts floating and Distance from beaker botton = %.2f cm\n", h);
            break;
        }
    }
    //ถ้าน้ำเต็มบีกเกอร์แต่แอปเปิ้ลยังไม่ลอย
    if(water > beaker)
       printf("Beaker is full but the apple has not floated\n");

    return 0;
}