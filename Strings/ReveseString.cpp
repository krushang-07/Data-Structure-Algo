#include <iostream>
using namespace std;

// length
int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// Reverse String function
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[20];

    cout << "enter your name: ";
    cin >> name;
    //  name[2] = '\0'; // null char

    int len = getLength(name);
    reverse(name, len);
     
    cout << "your name is "; // kr
    cout << name << endl;
    return 0;
}