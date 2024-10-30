#include <iostream>
#include <string>
#include <Windows.h>



int main() {
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const std::string text = "Вітаю!";
    std::cout << text << std::endl;
}