/*
MIT License

Copyright (c) 2022 m!haly4

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
