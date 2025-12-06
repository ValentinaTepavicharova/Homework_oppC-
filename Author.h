#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
using namespace std;

class Author {
    
private:
    string name;  
    int birthYear;     

public:
    // Конструктор по подразбиране
    Author() : name("Unknown"), birthYear(1900) {}
    
    // Конструктор с параметри
    Author(const string& name, int birthYear) 
        : name(name), birthYear(1900) { setBirthYear(birthYear); }
        
    // Връща името
    const string& getName() const { return name; }
    
    // Връща годината на раждане
    int getBirthYear() const { return birthYear; }

    // Задаване на стойност с проверка
    void setBirthYear(int year) {
        if (year >= 1850 && year <= 2025)
            birthYear = year;
    }

    // Преобразуване в string
    string to_string() const {
        return name + " (" + std::to_string(birthYear) + ")";
    }
};

#endif

