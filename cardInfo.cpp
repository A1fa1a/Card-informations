//!/bin/clang

#include <iostream>

using namespace std;

struct strInfo
{
    string firstName, lastName, phone;
    unsigned short age;
};

void readInfo(strInfo person[100], int &len)
{
    cout << "How many persons do you want : ";
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        cout << "\nEnter informations for person " << i + 1 << " :\n";

        cout << "Enter the first name : ";
        cin >> person[i].firstName;

        cout << "Enter the last name : ";
        cin >> person[i].lastName;

        cout << "Enter your age : ";
        cin >> person[i].age;

        cout << "Enter your phone : ";
        cin >> person[i].phone;
    }
}

void printInfo(strInfo person[100], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "\nPerson " << i + 1 << " informations:\n"
          << "*****************************************\n"
          << "The first name : " << person[i].firstName << endl
          << "The last name : " << person[i].lastName << endl
          << "The age : " << person[i].age << endl
          << "The phone : " << person[i].phone << endl
          << "****************************************\n";
    }
}

int main()
{
    strInfo person[100];
    int len;

    readInfo(person, len);
    printInfo(person, len);

    return 0;
}
