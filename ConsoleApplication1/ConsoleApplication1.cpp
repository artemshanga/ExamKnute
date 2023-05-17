#include <iostream>
#include <vector>
#include <Windows.h>


using namespace std;
void delitel(int number) {
    
    if (number > 2147483646) {
        wcout << L"Помилка! Це число занадто велике!";
    }else if(number < -2147483646){
        wcout << L"Помилка! Це число занадто мале!";
    }
    else {
    wcout << L"Дільники числа: ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
             wcout << i << " ";
        }
    }

    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, ".1251");
    int number;

    std::wcout << L"Введите натуральное число: ";
    std::cin >> number;

     delitel(number);

   
}