#include <stdio.h>
int main() {
    int day = 1;
    int escapeDay = 0; // �ѹ�����¢�鹨ҡ���
    float depth; //�����֡��͹��
    float up = 2.63; //�ѹ����Թ˹��
    float down = 0.28; //�ѹ����Թ�����ѧ
    float snail = 0; //����Թ�ͧ��·ҡ

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
        day++; // ������Ѻ�ѹ��� 8 ����
        if (day % 2 == 1)
            snail += up;
        else
            snail -= down;

        printf("�Day %d = Distance %.2f meter \n", day, snail);

       if (escapeDay == 0 && snail >= depth)
           escapeDay = day;
    }

    printf("The snail can climb out of the well in %d days \n", escapeDay);

    return 0;
}