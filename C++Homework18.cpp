#include "Emp.h"


int main() {
    Employee emp;

    strcpy_s(emp.surname, sizeof(emp.surname), "Ivanenko");
    emp.birthYear = 1985;
    strcpy_s(emp.position, sizeof(emp.position), "Manager");
    emp.salary = 15000.50;
    strcpy_s(emp.education, sizeof(emp.education), "Higher Education");

    cout << "Surname: " << emp.surname << endl;
    cout << "Birth Year: " << emp.birthYear << endl;
    cout << "Position: " << emp.position << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Education: " << emp.education << endl;

}