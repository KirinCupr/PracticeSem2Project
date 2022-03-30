#include "PrintEmployerInfo.h"

void printEmployerInfo()
{
    cout << "\n|____Employers' list:____|\n";
    cout << "\nNumber" << '\t' << "Title"
         << "\t\t" << "Activity" << "\t\t" << "Address"
         << "\t\t" << "Phone" << "\t\t" << "Vacancy \n"
         << "--------------------------------------------------------------------------------\n";

    int count = getCountOfEmployers();
    Employer *listEmployer = getArrayOfEmployers();

     for (int i{}; i < count; i++)
     {
       cout << left << i + 1 << '\t'
            << setw(10) << listEmployer[i].title << '\t'
            << setw(16) << listEmployer[i].activityType << '\t'
            << setw(10) << listEmployer[i].address << '\t'
            << setw(10) << listEmployer[i].phoneNumber << '\t'
            << setw(10) << listEmployer[i].vacancy << endl;
     }
}