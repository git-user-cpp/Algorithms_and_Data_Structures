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
#include <list>

using namespace std;

template <typename t> //creating a template function for outputting data from lists
void PrintList(const list<t> &lst)
{
    for(auto i = lst.cbegin(); i != lst.cend(); ++i) //loop for data output
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main()
{
    list<string> mylist;
    string temp;

        cout << "Enter a sentence in words (20 words(15 on the group list + 5 elements)):" << endl;
    for(int i = 0; i < 20; i++)
    {
        temp = "";

        cout << "Enter a " << i+1 << " word: ";
        cin >> temp;
        mylist.push_back(temp);
    }

    cout << endl;
    PrintList(mylist);


    mylist.reverse(); //Reversing the list

    PrintList(mylist);

return 0;
}
