#include "GetCountOfWorkers.h"
int getCountOfWorkers()
{
    int countOfWorkers{};
    Worker _worker;
    ifstream outputFrom("workersList.txt", ios::in | ios::binary);
    if (!outputFrom.is_open()) cout << "Error! There are something wrong with file";
    outputFrom.seekg(0, ios_base::beg);
    while (true)
    {
        getline (outputFrom, _worker.surname, '\t');
        getline (outputFrom, _worker.name, '\t');
        getline (outputFrom, _worker.patronymic, '\t');
        getline (outputFrom, _worker.qualificationLevel, '\t');
        getline (outputFrom, _worker.profession, '\n');
        if (outputFrom.eof()) break;
        ++countOfWorkers;
    }
    outputFrom.close();
    return countOfWorkers;
}