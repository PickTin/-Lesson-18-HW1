#include "Emp.h"


int main() {
   
    Employee employees[5];

    strcpy_s(employees[0].surname, sizeof(employees[0].surname), "Ivanenko");
    employees[0].birthYear = 1985;
    strcpy_s(employees[0].position, sizeof(employees[0].position), "Manager");
    employees[0].salary = 15000.50;
    strcpy_s(employees[0].education, sizeof(employees[0].education), "Higher Education");

    strcpy_s(employees[1].surname, sizeof(employees[1].surname), "Petrenko");
    employees[1].birthYear = 1990;
    strcpy_s(employees[1].position, sizeof(employees[1].position), "Engineer");
    employees[1].salary = 12000.75;
    strcpy_s(employees[1].education, sizeof(employees[1].education), "Bachelor's Degree");

    strcpy_s(employees[2].surname, sizeof(employees[2].surname), "Shevchenko");
    employees[2].birthYear = 1982;
    strcpy_s(employees[2].position, sizeof(employees[2].position), "Technician");
    employees[2].salary = 10000.00;
    strcpy_s(employees[2].education, sizeof(employees[2].education), "Associate Degree");

    strcpy_s(employees[3].surname, sizeof(employees[3].surname), "Bondarenko");
    employees[3].birthYear = 1975;
    strcpy_s(employees[3].position, sizeof(employees[3].position), "Director");
    employees[3].salary = 20000.25;
    strcpy_s(employees[3].education, sizeof(employees[3].education), "Master's Degree");

    strcpy_s(employees[4].surname, sizeof(employees[4].surname), "Kovalenko");
    employees[4].birthYear = 1995;
    strcpy_s(employees[4].position, sizeof(employees[4].position), "Intern");
    employees[4].salary = 8000.50;
    strcpy_s(employees[4].education, sizeof(employees[4].education), "Student");

    for (int i = 0; i < 5; ++i) {
        cout << "Employee " << (i + 1) << ":" << endl;
        cout << "Surname: " << employees[i].surname << endl;
        cout << "Birth Year: " << employees[i].birthYear << endl;
        cout << "Position: " << employees[i].position << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << "Education: " << employees[i].education << endl;
        cout << endl;
    }

    
}