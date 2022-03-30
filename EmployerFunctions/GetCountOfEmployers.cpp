#include "GetCountOfEmployers.h"
int getCountOfEmployers()
{
    int countOfEmployers{};
    Employer _employer;
    ifstream outputFrom("employersList.txt", ios::in | ios::binary);
    if (!outputFrom.is_open()) cout << "Error! There are something wrong with file";
    outputFrom.seekg(0, ios_base::beg);
    while (true)
    {
        getline (outputFrom, _employer.title, '\t');
        getline (outputFrom, _employer.activityType, '\t');
        getline (outputFrom, _employer.address, '\t');
        //getline (outputFrom, _employer.phoneNumber, '\t');
        outputFrom >> _employer.phoneNumber;
        getline (outputFrom, _employer.vacancy, '\n');
        if (outputFrom.eof()) break;
        ++countOfEmployers;
    }
    outputFrom.close();
    return countOfEmployers;
}