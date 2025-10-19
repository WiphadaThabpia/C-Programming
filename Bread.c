#include <stdio.h>
#define PI 3.14
int main() {
    double a, b; //ความกว้าง,ยาวของช่องว่าง(ส่วนที่เว้นในC)
    double r; //รัศมีส่วนโค้งครึ่งวงกลมแต่ละด้าน
    double L; //ความยาวระหว่างครึ่งวงกลม(ส่วนแนวตั้งของC)
    double W; //ความกว้างรวม(2r)
    double A_rect; //พื้นที่กรอบสี่เหลี่ยม
    double A_C; //พื้นที่ของรูป C
    double A_Bread; //พื้นที่ขนมปังต่อการพิมพ์1ครั้ง
    double A_remaining; //พื้นที่แป้งที่เหลือ
    double Remaining_ratio; //อัตราส่วนที่เหลือ

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

    A_rect = W * (L + 2 * r); //สูตรคำนวณพื้นที่กรอบก่อนตัดขนมปัง
    A_C = ((L * W) + PI * r * r) - (a * b); //คำนวณพื้นที่รูปC
    A_Bread = 2 * A_C; //พิมพ์ขนมปัง1ครั้ง ได้2ชิ้น
    A_remaining = A_rect - A_Bread; //หาพื้นที่แป้งที่เหลือ
    Remaining_ratio = (A_remaining / A_rect) * 100; //หาอัตราส่วน

    printf("Remaining Area = %.2f\n", A_remaining);
    printf("Remaining Ratio = %.2f%% \n", Remaining_ratio);

    return 0;
}