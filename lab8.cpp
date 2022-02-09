#include <iostream>
#include <string>

using namespace std;

bool Pan(string s) //function for checking a sentence
{
    int arr[26] = {0}; //marker

    for(char &c : s) //checking sentence elements
    {
        if(c >= 97 && c <= 122) //for small letters
        {
            arr[c - 97] = 1;
        }
        else if(c >= 65 && c <= 90) //for big letters
        {
            arr[c - 65] = 1;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(arr[i] == 0) //checking if it isn`t pangram
        {
            return (false);
        }
    }

    return (true);
}

void print(string s) //Outputting result
{
    if(Pan(s))
    {
        cout << s << " is pangram" << endl << endl;
    }
    else
    {
        cout << s << " isn`t pangram" << endl << endl;
    }
}

int main()
{
    string str = "The quick brown fox jumps over the lazy dog";
    string str2 = "The quIck broWn foX jumPs oVer tHe lazY Dog";
    string str3 = "asdkfljalvmosdnvla[vpindakl;;sadjnkkamdklvjkn]";

    print(str);
    print(str2);
    print(str3);

return 0;
}