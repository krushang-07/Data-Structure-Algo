#include <iostream>
using namespace std;




int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);  
    int con = 0;
    int vow = 0;
    for (char i = 0; i < s.length(); i++)

    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        { 
            vow++;
        }
        else if(isalnum(s[i]))
        {
            con++;
        }
    }

    cout << vow << " " << con << endl;
}