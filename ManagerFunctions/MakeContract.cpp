#include "MakeContract.h"
void makeContract(Employer employer, Worker worker)
{
    system("chcp 1251");
    ofstream makeContract("contract.txt");
    if(!makeContract.is_open()) cout << "Error! There are something wrong with file";

    makeContract << "\t\t\tContract #..."
                 << "blablabla";
}
