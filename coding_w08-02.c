#include <stdio.h>
int main() {
    int start, stop;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter stop number: ");
    scanf("%d", &stop);

    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("----------------------\n");

    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\nThank you.\n");
    return 0;
}
/*รับค่าจากแป้นพิมด้วยการ scanf() เก็บไว้ในตัวแปร start และ stop
แสดงข้อความว่า Start number is … and stop number is …
ใช้ for loop นับจาก start ไปจนถึง stop
เงื่อนไขถ้า start = 1 และ stop = 9 จะได้ลำดับ 1 2 3 4 5 6 7 8 9
และพิมพ์คำว่า "Thank you." ปิดท้ายโค้ด*/