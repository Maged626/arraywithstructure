#include <iostream>
#include <string>
using namespace std;

// using array  and structure and fuctions

struct StrInfo
{
    string name;
    int roll;
    float total;
    float percentage;
    char grade;
};

void input(StrInfo &student)
{
    cout << "Enter the name of the StrInfo: \n";
    cin >> student.name;
    cout << "Enter the roll number of the StrInfo: \n";
    cin >> student.roll;
    cout << "Enter the total marks of the StrInfo: \n";
    cin >> student.total;
    cout << "Enter the percentage of the StrInfo: \n";
    cin >> student.percentage;
    cout << "Enter the grade of the StrInfo: \n";
    cin >> student.grade;
}

void output(StrInfo student)
{
    cout << "*************************************\n";

    cout << "The name of the StrInfo is: " << student.name << endl;
    cout << "The roll number of the StrInfo is: " << student.roll << endl;
    cout << "The total marks of the StrInfo is: " << student.total << endl;
    cout << "The percentage of the StrInfo is: " << student.percentage << endl;
    cout << "The grade of the StrInfo is: " << student.grade << endl;

    cout << "*************************************\n";
}

// with array of two persons
void ReadpersonInfo (StrInfo person[2])
{
    input(person[0]);
    input(person[1]);

}

void PrintpersonInfo (StrInfo person[2])
{
    cout << "*************************************\n";

    output(person[0]);
    output(person[1]);
}

int main()
{
    StrInfo person[2];
    ReadpersonInfo(person);
    PrintpersonInfo(person);
    return 0;
}