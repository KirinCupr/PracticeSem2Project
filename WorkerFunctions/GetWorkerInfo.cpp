#include "GetWorkerInfo.h"

Worker getWorkerInfo() {
    Worker _worker;
    char check;

    cout << "\n||___Employer____||"
            "\nPlease, write information about you:\n";

    do
    {
        cin.clear();
        cout << "\n1. Your lastname (maximum of 32 characters): ";
        getline(cin, _worker.surname); cout << endl;
        cout << "\n2. Your name (maximum of 32 characters):";
        getline(cin, _worker.name); cout << endl;
        cout << "\n3. Your patronymic (maximum of 32 characters): ";
        getline(cin, _worker.patronymic); cout << endl;
        cout << "\n4. Your qualification level: ";
        getline(cin, _worker.qualificationLevel); cout << endl;
        cout << "\n5. Your desired position: ";
        getline(cin, _worker.profession); cout << endl;

        cout << "\nCheck input information: ";
        cout << "\nYour lastname- " << _worker.surname;
        cout << "\nYour name - " << _worker.name;
        cout << "\nYour patronymic - " << _worker.patronymic;
        cout << "\nYour qualification level - " << _worker.qualificationLevel;
        cout << "\nYour desired position - " << _worker.profession;
        cout << "\nAre information correct? (Enter 'Y' - Yes, 'N' - No)\n-->>";

        cin.clear(); cin >> check; cin.ignore();
        if (check == 'N' || check == 'n') cout << "\n||___Rewriting info___||\n";
    } while (check == 'N' || check == 'n');
    return _worker;
}