#include "GetArrayOfEmployers.h"
Employer *getArrayOfEmployers()
{
    ifstream outputFrom("employersList.txt", ios::in | ios::binary);
    if (!outputFrom.is_open()) cout << "Error! There are something wrong with file";
    outputFrom.seekg(0, ios_base::beg);
    int count = getCountOfEmployers();
    Employer *listEmployer = new Employer[count];
    for (int i{}; i < count; i++)
    {
        getline (outputFrom, listEmployer[i].title, '\t');
        getline (outputFrom, listEmployer[i].activityType, '\t');
        getline (outputFrom, listEmployer[i].address, '\t');
        getline (outputFrom, listEmployer[i].phoneNumber, '\t');
        getline (outputFrom, listEmployer[i].vacancy, '\n');

        if (outputFrom.eof()) break;
    }
    outputFrom.close();
    cout << endl;
    return listEmployer;
}