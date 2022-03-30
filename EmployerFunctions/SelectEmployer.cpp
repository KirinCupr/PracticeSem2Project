#include "SelectEmployer.h"
Employer selectEmployer()
{
    char check;
    Employer *listEmployer = getArrayOfEmployers();
    int choice;
    do {
        cout << "Choose an employer: (enter number of item) "; cin >> choice;
        cout << "Item " << choice <<":\n";
        cout << left
             << setw(10) << listEmployer[choice - 1].title << '\t'
             << setw(10) << listEmployer[choice - 1].activityType << '\t'
             << setw(10) << listEmployer[choice - 1].address << '\t'
             << setw(10) << listEmployer[choice - 1].phoneNumber << '\t'
             << setw(10) << listEmployer[choice - 1].vacancy << endl;
        cout << "\nAre you sure about your choice?(Enter 'Y' - Yes, 'N' - No) \n -->>";
        cin.clear(); cin >> check; cin.ignore();
    } while (check == 'N' || check == 'n');

    return listEmployer[choice];
}