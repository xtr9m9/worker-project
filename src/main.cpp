#include <iostream>
#include <list>
#include <string>
#include "Worker.h"

int main() {
    std::list<Worker> workers;
    int n;
    std::cout << "Введите количество работников: ";
    std::cin >> n;
    std::cin.ignore(); // очистка буфера

    for (int i = 0; i < n; ++i) {
        std::string name, pos, dept;
        double salary;
        int year;
        std::cout << "\nРаботник " << i + 1 << ":\n";
        std::cout << "Фамилия и инициалы: ";
        std::getline(std::cin, name);
        std::cout << "Должность: ";
        std::getline(std::cin, pos);
        std::cout << "Зарплата: ";
        std::cin >> salary;
        std::cout << "Год поступления: ";
        std::cin >> year;
        std::cin.ignore();
        std::cout << "Отдел: ";
        std::getline(std::cin, dept);

        workers.emplace_back(name, pos, salary, year, dept);
    }

    int threshold;
    std::cout << "\nВведите минимальный стаж (лет): ";
    std::cin >> threshold;

    const int CURRENT_YEAR = 2026; // можно заменить на текущий год
    bool found = false;
    std::cout << "\nРаботники со стажем более " << threshold << " лет:\n";
    for (const auto& w : workers) {
        if (w.getExperience(CURRENT_YEAR) > threshold) {
            std::cout << w.getFullName() << " (стаж: "
                      << w.getExperience(CURRENT_YEAR) << " лет)\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "Таких работников нет.\n";
    }

    return 0;
}