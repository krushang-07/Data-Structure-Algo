#include <iostream>
using namespace std;

// // length
int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// // Reverse String function
// void reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
// }

char toLowercase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowercase(a[s]) != toLowercase(a[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char name[20];

    cout << "enter your name: ";
    cin >> name;
    //  name[2] = '\0'; // null char

    int len = getLength(name);
    cout << "ispalindrome : " << isPalindrome(name, len) << endl;

    // cout << "your name is "; // kr
    // cout << name << endl;
    return 0;
}