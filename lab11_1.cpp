#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // แสดงข้อความเริ่มต้น
    cout << "Press Enter 3 times to reveal your future." << endl;

    // รับค่าการกด Enter 3 ครั้ง
    for (int i = 0; i < 3; i++) {
        cin.get();
    }

    // ตั้งค่า Seed สำหรับการสุ่มโดยใช้เวลาปัจจุบัน
    srand(time(0));

    // สุ่มตัวเลข 0-8 เพื่อเลือกเกรด
    int randomIndex = rand() % 9;
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    // แสดงผลลัพธ์
    cout << "You will get " << grades[randomIndex] << " in this 261102." << endl;

    return 0;
}// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
