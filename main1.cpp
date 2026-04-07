#include <iostream>
#include <string>

using namespace std;

// Hàm hiển thị lời chào
void printWelcome() {
    cout << "==============================" << endl;
    cout << "CHUONG TRINH TINH TOAN BASIC" << endl;
    cout << "==============================" << endl;
}

int main() {
    printWelcome();

    int a = 10;

    int b = 20;


    // TODO: Thuc hien phep tinh o day
    int result = a + b; 

    cout << "Ket qua cua phep tinh la: " << result << endl;

    return 0;
}