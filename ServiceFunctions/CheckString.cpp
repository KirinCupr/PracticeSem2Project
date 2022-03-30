#include "CheckString.h"

using namespace std;
bool checkEmptyString(string str1, string str2, string str3, string str4, string str5)
{
    if (str1 == "" || str2 == "" || str3 == "" || str4 == "" || str5 == "")
    {
        cout << "\nError: empty field.";
        return true;
    }
}
