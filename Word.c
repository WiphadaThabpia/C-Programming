#include <stdio.h>
#include <string.h>
int main() {
    char text[200];       // ข้อความทั้งหมด
    char wordToFind[50];  // คำที่ต้องการหา
    int position;

    // รับข้อความจากผู้ใช้
    printf("ใส่ข้อความ: ");
    scanf("%s", text);

    // รับคำที่ต้องการหา
    printf("ใส่คำที่ต้องการหา: ");
    scanf("%s", wordToFind);

    // ใช้ strstr() เพื่อค้นหาคำย่อยในข้อความ
    char *word = strstr(text, wordToFind);

    if (word != NULL) {
        int position = (word - text) + 1; //หาตำแหน่งเริ่มต้น (เริ่มจาก 1)
        printf("พบคำว่า '%s' ในตำแหน่งตัวอักษรที่ %d\n", wordToFind, position);
    } else {
        printf("ไม่พบคำว่า '%s' ในข้อความ\n", wordToFind);
    }

    return 0;
}