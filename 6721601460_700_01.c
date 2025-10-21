#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    float r; //รัศมีของวงกลม
    float A1,A2,A3; //ฐาน,สูง,ระยะถึงยอดของสามเหลี่ยม
    float maxA,minA; //ค่าระยะมากสุดและน้อยสุดของ A1, A2, A3
    float areaC; //พื้นที่ของวงกลม
    float areaT; //พื้นที่ของสามเหลี่ยม
    float areaDiff; //พื้นที่ส่วนที่ไม่ซ้อนทับกัน

    printf("รับค่ารัศมีของวงกลม(r): ");
    scanf("%f",&r);
    printf("รับค่าฐานของสามเหลี่ยม(A1): ");
    scanf("%f",&A1);
    printf("รับค่าความสูงของสามเหลี่ยม(A2): ");
    scanf("%f",&A2);
    printf("รับค่าจากศูนย์กลางถึงยอดสามของสามเหลี่ยม(A3): ");
    scanf("%f",&A3);

    maxA = A1; //หาค่ามากสุดแต่ละด้านสามเหลี่ยม
    if(A2 > maxA) maxA = A2;
    if(A3 > maxA) maxA = A3;

    minA = A1; //หาค่าน้อยสุดแต่ละด้านสามเหลี่ยม
    if(A2 < minA) minA = A2;
    if(A3 < minA) minA = A3;

    areaC = PI * r * r; //หาพื้นที่วงกลม
    areaT = 0.5 * A1 * A2; //หาพื้นที่สามเหลี่ยม

    printf("-----แสดงผล-----\n");
    if (r >= maxA) //ถ้าวงกลมมากกว่าสามเหลี่ยม
        printf("= สามเหลี่ยมอยู่ในวงกลม\n");
    else
        printf("= สามเหลี่ยมไม่อยู่ในวงกลม\n");

    if (r <= minA) //ถ้าสามเหลี่ยมมากกว่าวงกลม
        printf("= วงกลมอยู่ในสามเหลี่ยม\n");
    else
        printf("= วงกลมไม่อยู่ในสามเหลี่ยม\n");

    if (r >= maxA) {
        areaDiff = areaC - areaT;
    } else if (r <= minA) {
        areaDiff = areaT - areaC;
    } else {  //หาพื้นที่ที่วงกลมและสามเหลี่ยมทับกัน
        areaDiff = fabs(r - minA)*(maxA - r);
        printf("= วงกลมและสามเหลี่ยมซ้อนกันบางส่วน\n");
    }
    printf("-----แสดงผลการคำนวณหาพื้นที่-----\n");
    printf("พื้นที่วงกลม = %.2f\n",areaC);
    printf("พื้นที่สามเหลี่ยม = %.2f\n",areaT);
    printf("พื้นที่ส่วนที่ไม่ซ้อนทับกัน = %.2f \n",areaDiff);
    return 0;
}
