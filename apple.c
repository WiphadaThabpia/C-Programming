#include <stdio.h>
int main() {
    int beaker = 3000; //��Ҵ�ա����
    int water = 0; //����ҳ���
    int add = 250; //�����Ӥ�����250ml
    int apple; //����ҵ��ͻ����
    int step = 0; //�ӹǹ���駷��������
    double h = 0; //������ҧ�����ҧ����ǡѺ�ͻ����

    printf("Input Apple = ");
    scanf("%d", &apple);

    printf("Start: add %d ml water each time. \n", add);

    while(water <= beaker) {
        step++;
        water += add; //�����������������250
        printf("Step %d: Added water = %d ml, Total water = %d ml.\n", step, add, water);

        //�ͻ���Ũ��������͹�� >= ����ҵ��ͻ����
        if(water >= apple && h == 0) {
            h = 1.0; //������ҧ h ���·���ش

            printf("The apple starts floating and Distance from beaker botton = %.2f cm\n", h);
            break;
        }
    }
    //��ҹ������ա�������ͻ�����ѧ������
    if(water > beaker)
       printf("Beaker is full but the apple has not floated\n");

    return 0;
}