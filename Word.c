#include <stdio.h>
#include <string.h>
int main() {
    char text[200];       // ��ͤ���������
    char wordToFind[50];  // �ӷ���ͧ�����
    int position;

    // �Ѻ��ͤ����ҡ�����
    printf("����ͤ���: ");
    scanf("%s", text);

    // �Ѻ�ӷ���ͧ�����
    printf("���ӷ���ͧ�����: ");
    scanf("%s", wordToFind);

    // �� strstr() ���ͤ��Ҥ�����㹢�ͤ���
    char *word = strstr(text, wordToFind);

    if (word != NULL) {
        int position = (word - text) + 1; //�ҵ��˹�������� (������ҡ 1)
        printf("������� '%s' 㹵��˹觵���ѡ�÷�� %d\n", wordToFind, position);
    } else {
        printf("��辺����� '%s' 㹢�ͤ���\n", wordToFind);
    }

    return 0;
}