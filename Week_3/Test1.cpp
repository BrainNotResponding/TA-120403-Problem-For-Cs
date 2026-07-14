#include<stdio.h>
int main(){
    float PI = (float)22/7;// สามารถใช้ได้หลายแบบ (float)22/7 | (float)22/(float)7 | 22.0 / 7.0
    float circumference,radius; // circumference = เส้นรอบวง | radius = รัศมี
    printf("INPUT RADIUS :");
    scanf("%f",&radius); // รับค่า %__=ชนิดข้อมูล &__=ตัวแปร
    circumference = 2 * PI * radius;
    printf("CIRCUMFERENCE = %.3f\n",circumference);//ใช้ % เพื่อเอาค่าออกจากตัวแปร
    //เช่น อยากเอาค่าออกจากตัวแปร circumference ต้องใช้ %f สามารถลดตำแหน่งทศนิยมได้ ใช้จุดหลัง % แล้วเขียนว่าจะเอากี่ตำแหน่ง
    // ใช้งานผ่านคำสั่ง print --> print("%f",circumference);

    return 0;
}
