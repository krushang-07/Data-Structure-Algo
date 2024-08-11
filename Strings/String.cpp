#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout << "enter your name: ";
    cin >> name;
    name[2] = '\0'; // null char

    cout << "your name is "; // kr
    cout << name << endl;

    return 0;
}