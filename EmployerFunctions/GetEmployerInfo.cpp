#include "GetEmployerInfo.h"

Employer getEmployerInfo()
{
    Employer _employer;
    char check;
    cout << "\n||___Employer____||"
            "\nPlease, write information about you:\n";

    do
    {
        cin.clear();
        cout << "\n1. Title of Your organization (maximum of 32 characters): ";
        getline(cin, _employer.title); cout << endl;
        cout << "\n2. Type of activity of Your organization (maximum of 32 characters):";
        getline(cin, _employer.activityType); cout << endl;
        cout << "\n3. Address of Your organization (maximum of 32 characters): ";
        getline(cin, _employer.address); cout << endl;
        cout << "\n4. Phone number of Your organization (example: 89007776655): ";
        getline(cin, _employer.phoneNumber); cout << endl;
        //cin >> _employer.phoneNumber; cout << endl; cin.clear(); cin.ignore();
        cout << "\n5. Name of open vacancy: ";
        getline(cin, _employer.vacancy); cout << endl;

        cout << "\nCheck input information: ";
        cout << "\nTitle of organization - " << _employer.title;
        cout << "\nType of activity of organization - " << _employer.activityType;
        cout << "\nAddress of organization - " << _employer.address;
        cout << "\nPhone number of organization - " << _employer.phoneNumber;
        cout << "\nOpen vacancy - " << _employer.vacancy;
        cout << "\nAre information correct? (Enter 'Y' - Yes, 'N' - No)\n-->>";

        if (checkEmptyString(_employer.title, _employer.activityType, _employer.address, _employer.phoneNumber, _employer.vacancy))
        {
            cout << "\n||___Rewriting info___||\n";
            continue;
        }

        cin.clear(); cin >> check; cin.ignore();
        if (check == 'N' || check == 'n') cout << "\n||___Rewriting info___||\n";
    } while (check == 'N' || check == 'n');

    cout << "\nThank You for using our product!\nThe manager has already started searching for suitable candidates\n";
    system("pause");
    return _employer;
}