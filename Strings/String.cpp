#include <iostream>
using namespace std;

// length function
int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "enter your name: ";
    cin >> name;
    //  name[2] = '\0'; // null char

    cout << "your name is "; // kr
    cout << name << endl;

    cout << "Length: " << getLength(name) << endl;
    return 0;
}