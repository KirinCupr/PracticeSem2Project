#include "EmployerFunctions.h"

using namespace std;

// void fillEmployerArray()
// {
//     Employer EmployerArray[16]; //random value
//     ifstream outputFrom("employersList.txt", ios::in | ios::binary);
//     if (!outputFrom.is_open()) cout << "Error! There are something wrong with file";
//     outputFrom.seekg(0, ios_base::beg);
//     for (int i{}; i < 16; i++)
//     {
//         getline (outputFrom, EmployerArray[i].title, '\t');
//         getline (outputFrom, EmployerArray[i].activityType, '\t');
//         getline (outputFrom, EmployerArray[i].address, '\t');
//         getline (outputFrom, EmployerArray[i].phoneNumber, '\t');
//         getline (outputFrom, EmployerArray[i].vacancy, '\n');
//
//         if (outputFrom.eof()) break;
//     }
//     outputFrom.close();
//     cout << endl;
//
//     for (int i{}; i < 16; i++)
//     {
//       cout << left << i + 1 << '\t'
//            << setw(10) << EmployerArray[i].title << '\t'
//            << setw(10) << EmployerArray[i].activityType << '\t'
//            << setw(10) << EmployerArray[i].address << '\t'
//            << setw(10) << EmployerArray[i].phoneNumber << '\t'
//            << setw(10) << EmployerArray[i].vacancy << endl;
//     }
//     int choice;
//     do {
//       cout << "Choose item: "; cin >> choice;
//       cout << "Item " << choice <<":\n";
//       cout << left << setw(10) << EmployerArray[choice - 1].title << '\t'
//            << setw(10) << EmployerArray[choice - 1].activityType << '\t'
//            << setw(10) << EmployerArray[choice - 1].address << '\t'
//            << setw(10) << EmployerArray[choice - 1].phoneNumber << '\t'
//            << setw(10) << EmployerArray[choice - 1].vacancy << endl;
//     } while(choice);
//
// }
