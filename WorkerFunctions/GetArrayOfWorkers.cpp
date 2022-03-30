#include "GetArrayOfWorkers.h"
Worker *getArrayOfWorkers()
{
    ifstream outputFrom("workersList.txt", ios::in | ios::binary);
    if (!outputFrom.is_open()) cout << "Error! There are something wrong with file";
    outputFrom.seekg(0, ios_base::beg);
    int count = getCountOfWorkers();
    Worker *listWorker = new Worker[count];
    for (int i{}; i < count; i++)
    {
        getline (outputFrom, listWorker[i].surname, '\t');
        getline (outputFrom, listWorker[i].name, '\t');
        getline (outputFrom, listWorker[i].patronymic, '\t');
        getline (outputFrom, listWorker[i].qualificationLevel, '\t');
        getline (outputFrom, listWorker[i].profession, '\n');

        if (outputFrom.eof()) break;
    }
    outputFrom.close();
    cout << endl;
    return listWorker;
}