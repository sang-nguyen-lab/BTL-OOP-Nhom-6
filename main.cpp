#include <iostream>
#include "F1.h"
#include "F2.h"
#include "F3.h"
#include "F4.h"
#include "F5.h"
#include "F6.h"
#include "F7.h"
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int choice;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Them cong viec\n";
        cout << "2. Xem danh sach\n";
        cout << "0. Thoat\n";
        cout << "Lua chon: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: addTask(); break;
            case 2: showAllTasks(); break;
            case 0: cout << "Thoat chuong trinh!\n"; break;
            default: cout << "Lua chon khong hop le!\n"; break;
        }
    } while (choice != 0);

    return 0;
}
