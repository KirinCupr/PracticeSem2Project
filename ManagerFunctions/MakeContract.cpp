#include "MakeContract.h"
void makeContract(Employer employer, Worker worker, unsigned long &profit)
{
    setlocale(LC_ALL, "Russian");
    int commission = 500;
    system("chcp 1251");
    ofstream makeContract("D:/GIT_HUB/PracticeCopy/contract.txt");
    if(!makeContract.is_open()) cout << "Error! There are something wrong with file";

    makeContract << "\t\t\t������� �...\n"
                 <<  "��������� ������� ������������, ��� \n"
                 <<  "�����������/����� " << employer.title
                 <<  ", ����������� �� ������ " << employer.address
                 <<  " \n(� ���������� ������������) ��������� �� ������ "
                 <<  worker.name << ' ' << worker.surname << ' ' << worker.patronymic
                 <<  " \n(� ���������� ��������) � ��������� "
                 <<  employer.vacancy << '.'
                 <<  "\n������� �������� � ���� � ������� ��� ����������";
    cout << "\n�������� ������";
    makeContract.close();
    profit += commission;
}
