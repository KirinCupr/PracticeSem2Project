#include "WriteWorkerInfo.h"

void writeWorkerInfo(Worker _worker)
{
    ofstream inputTo("workersList.txt", ios::out | ios::binary | ios::app);
    if (!inputTo.is_open()) cout << "Error! There are something wrong with file";
    inputTo << _worker.surname << '\t' << _worker.name << '\t'
            << _worker.patronymic << '\t' << _worker.qualificationLevel << '\t'
            << _worker.profession << '\n';
    inputTo.close();

}