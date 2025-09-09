#include <stdio.h>

int main() {
    int i;

    for (i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }

    printf("\nEnd of loop\n");
    return 0;
}
/*กำหนดค่าเริ่มต้น i = 2 เงื่อนไข i <= 10 ทุกครั้งที่วนครบ เพิ่มค่า i += 2 ทำซ้ำจนกว่า i จะเกิน 10*/