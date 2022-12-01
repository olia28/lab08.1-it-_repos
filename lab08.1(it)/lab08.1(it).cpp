#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str)
{
    if (strlen(str) < 2)
        return 0;

    int k = 0;
    for (int i = 0; str[i] != 0; i++)
        if ((str[i] == 'a' && str[i + 1] == 'a') || (str[i] == 'b' && str[i + 1] == 'b') || (str[i] == 'c' && str[i + 1] == 'c'))
                k++;

    return k;
}

char* Change(char* str)
{
    size_t len = strlen(str + 50);

    if (len < 2)
        return str;

    char* tmp = new char[len];
    char* t = tmp;

    tmp[0] = '\0';
    int i = 0;

    while (str[i + 1] != 0)
    {
        if ((str[i] == 'a' && str[i + 1] == 'a') || (str[i] == 'b' && str[i + 1] == 'b') || (str[i] == 'c' && str[i + 1] == 'c'))
        {
            strcat(t, "***");
            t += 3;
            i += 2;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }

    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}

int main()
{
    char str[101];
    cout << "Enter string:"; cin.getline(str, 100);

    cout << "String contained " << Count(str) << " groups of 'aa'\\'bb'\\'cc'" << endl;

    char* dest = new char[151]; dest[0] = '\0';
    char* param = Change(str);

    cout << "Modified string (param) : " << param << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}