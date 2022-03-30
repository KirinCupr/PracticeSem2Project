#include "MakeContract.h"
void makeContract(Employer employer, Worker worker, unsigned long &profit)
{
    setlocale(LC_ALL, "Russian");
    int commission = 500;
    system("chcp 1251");
    ofstream makeContract("D:/GIT_HUB/PracticeCopy/contract.txt");
    if(!makeContract.is_open()) cout << "Error! There are something wrong with file";

    makeContract << "\t\t\tДоговор №...\n"
                 <<  "Настоящий договор постановляет, что \n"
                 <<  "организация/фирма " << employer.title
                 <<  ", находящаяся по адресу " << employer.address
                 <<  " \n(в дальнейшем Работодатель) принимает на работу "
                 <<  worker.name << ' ' << worker.surname << ' ' << worker.patronymic
                 <<  " \n(в дальнейшем Работник) в должности "
                 <<  employer.vacancy << '.'
                 <<  "\nДоговор вступает в силу с момента его заключения";
    cout << "\nКонтракт создан";
    makeContract.close();
    profit += commission;
}
