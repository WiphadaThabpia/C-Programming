#include <stdio.h>
int main() {
    double A; //�ӹǹ��ͷ�����(total wheels)
    double B; //��鹷��������������ʾ��(contact area)
    double F; //���˹ѡ����ͧ�Թ(aircraft weight)
    double P; //�����ѹ�������(pressure)
    
    printf("=====Boeing 747-400=====\n");
    
    printf("Enter Total Wheels(A): ");
    scanf("%lf", &A);
    
    printf("Enter Contact Area(B): ");
    scanf("%lf", &B);
    
    printf("Enter Aircraft Weight(F): ");
    scanf("%lf", &F);
    
    //�ٵäӹǳ�����ѹ��͵��˹�����
    P = F / (A * B);
    
    printf("PressureOfEachWheel = %.2lf\n", P);
    
    return 0;
}