#include <stdio.h>
#define PI 3.14
int main() {
    double a, b; //�������ҧ,��Ǣͧ��ͧ��ҧ(��ǹ�������C)
    double r; //�������ǹ�駤���ǧ������д�ҹ
    double L; //������������ҧ����ǧ���(��ǹ�ǵ�駢ͧC)
    double W; //�������ҧ���(2r)
    double A_rect; //��鹷���ͺ����������
    double A_C; //��鹷��ͧ�ٻ C
    double A_Bread; //��鹷�袹��ѧ��͡�þ����1����
    double A_remaining; //��鹷���駷�������
    double Remaining_ratio; //�ѵ����ǹ��������

    printf("Enter Gap_Width(a): ");
    scanf("%lf", &a);

    printf("Enter Gap_Length(b): ");
    scanf("%lf", &b);

    printf("Enter Radius(r): ");
    scanf("%lf", &r);

    printf("Enter Length(L): ");
    scanf("%lf", &L);

    printf("Enter Width(W): ");
    scanf("%lf", &W);

    A_rect = W * (L + 2 * r); //�ٵäӹǳ��鹷���ͺ��͹�Ѵ����ѧ
    A_C = ((L * W) + PI * r * r) - (a * b); //�ӹǳ��鹷���ٻC
    A_Bread = 2 * A_C; //����좹��ѧ1���� ��2���
    A_remaining = A_rect - A_Bread; //�Ҿ�鹷���駷�������
    Remaining_ratio = (A_remaining / A_rect) * 100; //���ѵ����ǹ

    printf("Remaining Area = %.2f\n", A_remaining);
    printf("Remaining Ratio = %.2f%% \n", Remaining_ratio);

    return 0;
}