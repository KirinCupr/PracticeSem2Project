#include "WriteEmployerInfo.h"

void writeEmployerInfo(Employer _employer)
{
    ofstream inputTo("employersList.txt", ios::out | ios::binary | ios::app);
    if (!inputTo.is_open()) cout << "Error! There are something wrong with file";
    inputTo << _employer.title << '\t' << _employer.activityType << '\t'
            << _employer.address << '\t' << _employer.phoneNumber << '\t'
            << _employer.vacancy << '\n';
    inputTo.close();
}