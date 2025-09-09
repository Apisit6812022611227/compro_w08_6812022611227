#include <stdio.h>

int main() {
    int i = 2;

    while (i <= 10) {
        printf("%d ", i);
        i += 2;
    }

    printf("\nEnd of loop\n");
    return 0;
}

/*while loop เริ่มจาก i = 2 ตรวจสอบเงื่อนไข i <= 10 ถ้าเป็นจริง แสดงค่าของ i แล้วเพิ่มทีละ 2 ทำซ้ำจนกว่า i จะเกิน 10*/