#include <stdio.h>
int main() {
    int day, hour;
    double price; //�Ҥ��Թ��ҷ����������ѹ
    double dailyLimit = 150; //�Է������ѹ
    double totalQuota = 3000; //�Է����ʹ�ç���
    double govPay; //�Ѱ����
    double peoplePay; //��ЪҪ�����
    double totalgovPay; //����Ѱ���·�����
    double totalpeoplePay; //�����ЪҪ����·�����

    printf("-------�ç��ä��Ф���-------\n");
    //��˹�1-14�ѹ,��͹����Ѻ�������
    for(day = 1; day <= 14; day++) {
        printf("�ѹ���: %d \n", day);
        printf("���ҷ�����Է���(�������): ");
        scanf("%d", &hour);

        //������������������͹䢷���˹��Т��������Է��������
        if(hour < 6 && hour >= 23) {
            printf(" �������ö���Է�����(�����������ҷ���˹�) \n");
            continue;
        }
        printf("�Ҥ��Թ��ҷ�����: ");
        scanf("%lf", &price);

        //�ӹǳ�ҤҤ��Ф��觷���Ѱ��л�ЪҪ���ͧ����
        govPay = price * 0.5;
        peoplePay = price * 0.5;

        //������Է����Թ150����ѹ ���.��ͧ����
        if(govPay > dailyLimit) {
            govPay = dailyLimit;
            peoplePay = price - govPay;
        }
        //������Թ�Է����ʹ�ç���(3000)���.����
        if(govPay > totalQuota) {
            govPay = totalQuota;
            peoplePay = price - govPay;
        }
        //�Դ�ʹ��è��·�����14�ѹ
		    totalQuota -= govPay;
		    totalgovPay += govPay;
            totalpeoplePay += govPay;

        //�ʴ��������ѹ
        printf("�Ѱ��Ũ����: %.2lf \n",govPay);
        printf("��ЪҪ������: %.2lf \n",peoplePay);
        printf("�Է����褧�����: %.2lf \n",totalQuota);

        //�Է��������ѹ�Ѵ仺ǡ�Ѻ�Է�����ҷ�������
        dailyLimit = 150;
    }
    //�ʴ��š���Ѻ�Է���ҡ�Ѱ��ѧ14�ѹ
    printf("-------����ش�ç���-------\n");
    printf("����ʹ����Ѱ��Ũ��·�����: %.2lf \n",totalgovPay);
    printf("����ʹ����ЪҪ����·�����: %.2lf \n",totalpeoplePay);
    printf("�Է����褧����ͷ�����: %.2lf \n",totalQuota);

    return 0;
}