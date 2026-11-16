#include "Worker.h"
#include <iostream>

Worker::Worker() : fullName(""), position(""), salary(0.0), hireYear(0), department("") {}

Worker::Worker(const std::string& name, const std::string& pos, double sal,
               int year, const std::string& dept)
    : fullName(name), position(pos), salary(sal), hireYear(year), department(dept) {}

Worker::~Worker() {}

void Worker::setFullName(const std::string& name) { fullName = name; }
void Worker::setPosition(const std::string& pos) { position = pos; }
void Worker::setSalary(double sal) { salary = sal; }
void Worker::setHireYear(int year) { hireYear = year; }
void Worker::setDepartment(const std::string& dept) { department = dept; }

void Worker::display() const {
    std::cout << "ФИО: " << fullName
              << ", Должность: " << position
              << ", Зарплата: " << salary
              << ", Год поступления: " << hireYear
              << ", Отдел: " << department << std::endl;
}

std::string Worker::getFullName() const { return fullName; }
int Worker::getHireYear() const { return hireYear; }

int Worker::getExperience(int currentYear) const {
    return currentYear - hireYear;
}