#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    float r; //����բͧǧ���
    float A1,A2,A3; //�ҹ,�٧,���ж֧�ʹ�ͧ����������
    float maxA,minA; //��������ҡ�ش��й����ش�ͧ A1, A2, A3
    float areaC; //��鹷��ͧǧ���
    float areaT; //��鹷��ͧ����������
    float areaDiff; //��鹷����ǹ�������͹�Ѻ�ѹ

    printf("�Ѻ�������բͧǧ���(r): ");
    scanf("%f",&r);
    printf("�Ѻ��Ұҹ�ͧ����������(A1): ");
    scanf("%f",&A1);
    printf("�Ѻ��Ҥ����٧�ͧ����������(A2): ");
    scanf("%f",&A2);
    printf("�Ѻ��Ҩҡ�ٹ���ҧ�֧�ʹ����ͧ����������(A3): ");
    scanf("%f",&A3);

    maxA = A1; //�Ҥ���ҡ�ش���д�ҹ����������
    if(A2 > maxA) maxA = A2;
    if(A3 > maxA) maxA = A3;

    minA = A1; //�Ҥ�ҹ����ش���д�ҹ����������
    if(A2 < minA) minA = A2;
    if(A3 < minA) minA = A3;

    areaC = PI * r * r; //�Ҿ�鹷��ǧ���
    areaT = 0.5 * A1 * A2; //�Ҿ�鹷������������

    printf("-----�ʴ���-----:\n");
    if (r >= maxA) //���ǧ����ҡ��������������
        printf("= ���������������ǧ���\n");
    else
        printf("= ������������������ǧ���\n");

    if (r <= minA) //��������������ҡ����ǧ���
        printf("= ǧ������������������\n");
    else
        printf("= ǧ���������������������\n");
    
    if (r >= maxA) {  
        areaDiff = areaC - areaT;
    } else if (r <= minA) {
        areaDiff = areaT - areaC;
    } else {  //�Ҿ�鹷����ǧ�����������������Ѻ�ѹ
        areaDiff = fabs(r - minA)*(maxA - r);
        printf("= ǧ������������������͹�ѹ�ҧ��ǹ\n");
    }
    printf("-----�ʴ��š�äӹǳ�Ҿ�鹷��-----\n");
    printf("��鹷��ǧ��� = %.2f\n",areaC);
    printf("��鹷������������ = %.2f\n",areaT);
    printf("��鹷����ǹ�������͹�Ѻ�ѹ = %.2f \n",areaDiff);
    return 0;
}