#include "SelectWorker.h"
Worker selectWorker()
{
    char check;
    Worker *listWorker = getArrayOfWorkers();
    int choice;
    do {
        cout << "Choose an worker: (enter number of item) "; cin >> choice;
        cout << "Item " << choice <<":\n";
        cout << left
             << setw(10) << listWorker[choice - 1].surname << '\t'
             << setw(10) << listWorker[choice - 1].name << '\t'
             << setw(10) << listWorker[choice - 1].patronymic << '\t'
             << setw(10) << listWorker[choice - 1].qualificationLevel << '\t'
             << setw(10) << listWorker[choice - 1].profession << endl;
        cout << "\nAre you sure about your choice?(Enter 'Y' - Yes, 'N' - No)\\n-->>\"\n";
        cin.clear(); cin >> check; cin.ignore();
    } while (check == 'N' || check == 'n');

    return listWorker[choice];
}