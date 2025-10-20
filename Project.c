#include <stdio.h>
int main() {
    int day, hour;
    double price; //ราคาสินค้าที่ซื้อแต่ละวัน
    double dailyLimit = 150; //สิทธิ์ต่อวัน
    double totalQuota = 3000; //สิทธิ์ตลอดโครงการ
    double govPay; //รัฐจ่าย
    double peoplePay; //ประชาชนจ่าย
    double totalgovPay; //รวมรัฐจ่ายทั้งหมด
    double totalpeoplePay; //รวมประชาชนจ่ายทั้งหมด

    printf("-------โครงการคนละครึ่ง-------\n");
    //กำหนด1-14วัน,เดือนและรับค่าเวลา
    for(day = 1; day <= 14; day++) {
        printf("วันที่: %d \n", day);
        printf("เวลาที่ใช้สิทธิ์(ชั่วโมง): ");
        scanf("%d", &hour);

        //ถ้าเวลาไม่อยู่ในเงื่อนไขที่กำหนดจะขึ้นว่าใช้สิทธิ์ไม่ได้
        if(hour < 6 && hour >= 23) {
            printf(" ไม่สามารถใช้สิทธิ์ได้(ไม่อยู่ในเวลาที่กำหนด) \n");
            continue;
        }
        printf("ราคาสินค้าที่ซื้อ: ");
        scanf("%lf", &price);

        //คำนวณราคาคนละครึ่งที่รัฐและประชาชนต้องจ่าย
        govPay = price * 0.5;
        peoplePay = price * 0.5;

        //ถ้าใช้สิทธิ์เกิน150ต่อวัน ปชช.ต้องจ่าย
        if(govPay > dailyLimit) {
            govPay = dailyLimit;
            peoplePay = price - govPay;
        }
        //ถ้าใช้เกินสิทธิ์ตลอดโครงการ(3000)ปชช.จ่าย
        if(govPay > totalQuota) {
            govPay = totalQuota;
            peoplePay = price - govPay;
        }
        //คิดยอดการจ่ายทั้งหมด14วัน
		    totalQuota -= govPay;
		    totalgovPay += govPay;
            totalpeoplePay += govPay;

        //แสดงผลแต่ละวัน
        printf("รัฐบาลจ่ายไป: %.2lf \n",govPay);
        printf("ประชาชนจ่ายไป: %.2lf \n",peoplePay);
        printf("สิทธิ์ที่คงเหลือ: %.2lf \n",totalQuota);

        //สิทธิ์ใหม่วันถัดไปบวกกับสิทธิ์เก่าที่เหลือ
        dailyLimit = 150;
    }
    //แสดงผลการรับสิทธิ์จากรัฐหลัง14วัน
    printf("-------สิ้นสุดโครงการ-------\n");
    printf("รวมยอดที่รัฐบาลจ่ายทั้งหมด: %.2lf \n",totalgovPay);
    printf("รวมยอดที่ประชาชนจ่ายทั้งหมด: %.2lf \n",totalpeoplePay);
    printf("สิทธิ์ที่คงเหลือทั้งหมด: %.2lf \n",totalQuota);

    return 0;
}
