#pragma once
#include <string>
#include <iostream>

class Worker {
private:
    std::string fullName;      
    std::string position;      
    double salary;             
    int hireYear;              
    std::string department;    

public:
    Worker();

    Worker(const std::string& name, const std::string& pos, double sal,
           int year, const std::string& dept);

    ~Worker();

    void setFullName(const std::string& name);
    void setPosition(const std::string& pos);
    void setSalary(double sal);
    void setHireYear(int year);
    void setDepartment(const std::string& dept);

    void display() const;
    std::string getFullName() const;
    int getHireYear() const;

    int getExperience(int currentYear) const;
};