#include <stdio.h>
#include <math.h>
int main() {
    int hour, minute;
    double hour_hand, minute_hand;
    double result; //ผลลัพธ์การคำนวณหาองศา
    
    printf("Enter time (hour) : ");
    scanf("%d", &hour);
    printf("Enter time (minute) : ");
    scanf("%d", &minute);
    
    //เข็มนาทีช่องละ30องศา* นาทีหาร5ขีดนาที เพื่อหาเลขที่เข็มชี้
    minute_hand = (minute / 5) * 30.0;
    
    //เข็มชม.หาร12เลขชม.*30 + เข็มนาที
    hour_hand = (hour % 12) * 30.0 + (minute / 60.0) * 30.0;
    
    result = fabs(hour_hand - minute_hand);
        
    printf("At %02d:%02d The angle between the clock hands is = %.1f degrees.\n",hour, minute, result);
    return 0;
}
