#include <iostream>
#include "EmployerFunctions/EmployerFunctions.h"
#include "WorkerFunctions/WorkerFunctions.h"
#include <Windows.h>
// g++ -o main.exe main.cpp EmployerFunctions.cpp EmployerFunctions.h Employer.h Worker.h
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
//    cout << "Hello! Select, who you are:"
//        "\n1.Employer"
//        "\n2.Worker"
//        "\n3.Manager (not for public using!)"
//        "\n-->> ";
    cout << "Добрый день! Выберите вашу роль: "
            "\n1. Работодатель "
            "\n2. Работник "
            "\n3. Менеджер (не для общего использования!)"
            "\n-->>";
    int choise{};
    cin >> choise;
    cin.ignore();
    cin.clear();
    system("cls");

    switch (choise)
    {
    case 1:
    {
        cout << "\nIn case 1: ";
        Employer temp;
        temp = getEmployerInfo();
        writeEmployerInfo(temp);
        printEmployerInfo();
        /* launch of employer script */
        break;
    }
    case 2:
    {
        cout << "\nIn case 2: ";
        Worker workerTemp;
        workerTemp = getWorkerInfo();
        writeWorkerInfo(workerTemp);
        //printWorkerInfo();
        break;
    }
    case 3:
    {
      cout << "\nIn case 3: ";
        int inputPassword;
        int password = 111;
        cout << "Enter password: ";  cin >> inputPassword;
        if (inputPassword != password)
        {
            cout << "Incorrect password! Exit...";
            break;\
        }
      cout << '\n' << "" << "Number of employers: " <<getCountOfEmployers() << '\n';
      printEmployerInfo();
      printWorkerInfo();
      selectEmployer();
      selectWorker();
      cout << endl;
      break;
    }
    default:
        cout << "\nSomething going wrong ";
        break;
    }
    system("pause");
    return 0;
}
