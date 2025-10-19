#include <stdio.h>
int main() {
    double A; //จำนวนล้อทั้งหมด(total wheels)
    double B; //พื้นที่แต่ละล้อสัมผัสพื้น(contact area)
    double F; //น้ำหนักเครื่องบิน(aircraft weight)
    double P; //ความดันแต่ละล้อ(pressure)
    
    printf("=====Boeing 747-400=====\n");
    
    printf("Enter Total Wheels(A): ");
    scanf("%lf", &A);
    
    printf("Enter Contact Area(B): ");
    scanf("%lf", &B);
    
    printf("Enter Aircraft Weight(F): ");
    scanf("%lf", &F);
    
    //สูตรคำนวณความดันล้อต่อหนึ่งล้อ
    P = F / (A * B);
    
    printf("PressureOfEachWheel = %.2lf\n", P);
    
    return 0;
}