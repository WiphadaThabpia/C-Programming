#include <stdio.h>
#include <math.h>
int main() {
    int hour, minute;
    double hour_hand, minute_hand;
    double result; //���Ѿ���äӹǳ��ͧ��

    printf("Enter time (hour) : ");
    scanf("%d", &hour);
    printf("Enter time (minute) : ");
    scanf("%d", &minute);

    //����ҷժ�ͧ��30ͧ��* �ҷ����5�մ�ҷ� �������Ţ���������
    minute_hand = (minute / 5) * 30.0;

    //�����.���12�Ţ��.*30 + ����ҷ�
    hour_hand = (hour % 12) * 30.0 + (minute / 60.0) * 30.0;

    result = fabs(hour_hand - minute_hand);

    printf("At %02d:%02d The angle between the clock hands is = %.1f degrees.\n",hour, minute, result);
    return 0;
}