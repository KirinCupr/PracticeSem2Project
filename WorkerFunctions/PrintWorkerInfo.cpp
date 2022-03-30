#include "PrintWorkerInfo.h"

void printWorkerInfo()
{
    cout << "\n|____Workers' list:____|\n";
    cout << "\nNumber" << "\nLastname"
         << "\t" << "Name" << "\t\t" << "Patronymic"
         << "\t" << "Qualification" << "\t" << "Profession\n"
         << "-----------------------------------------------------------------------\n";

    int count = getCountOfWorkers();
    Worker *listWorker = getArrayOfWorkers();

    for (int i{}; i < count; i++){
        cout << left << i + 1 << '\t'
             << setw(10) << listWorker[i].surname << '\t'
             << setw(10) << listWorker[i].name << '\t'
             << setw(10) << listWorker[i].patronymic << '\t'
             << setw(10) << listWorker[i].qualificationLevel << '\t'
             << setw(10) << listWorker[i].profession << endl;
    }
}