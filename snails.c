#include <stdio.h>
int main() {
    int day = 1;
    float depth; //�����֡��͹��
    float up = 2.63; //�ѹ����Թ˹��
    float down = 0.28; //�ѹ����Թ�����ѧ
    float snail = 0; //����Թ�ͧ��·ҡ

    printf("Input depth = ");
    scanf("%f", &depth);

    while (snail < depth) {
        if (day % 2 == 1) {
            snail += up; //�ѹ����Թ˹��
        } else {
            snail -= down; //�ѹ�������ѧ
        }

        printf("�Day %d = Distance %.2f meter \n", day, snail);

        if (snail >= depth) {
            printf("The snail can climb out of the well in %d days \n", day);
            break;
        }
        day++;
    }
    return 0;
}