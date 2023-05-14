/*
MIT License

Copyright (c) 2022 Andrew Kushyk

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
#include <set> 

using namespace std;

template<typename t>
void PrintSet(const set<t> &temp) //creating a templated function for outputting data from sets
{
    for(auto &item : temp)
    {
        cout << item << '\t';
    }
    cout << endl;
}

template<typename t>
void SearchSet(const set<t> &temp) //creating a templated function for searching data in sets
{
    t value; //templated value for different data types
    int counter;

    cout << "Enter the number of items to search: ";
    cin >> counter;

    for(int i = 0; i < counter; i++)
    {
        cout << "Enter a " << i + 1 << " value to search: ";
        cin >> value;

        if(temp.find(value) != temp.end())
        {
            cout << "Value " << value << " found" << endl;
        }
        else
        {
            cout << "Value " << value << " not found" << endl;
        }
    }
}

template<typename t>
void EraseSet(set<t> &temp) //creating a templated function for removing data from sets
{
    int i;
    cout << "Enter the number of items to delete: ";
    cin >> i;

    t value; //templated value for different data types

    for(int j = 0; j < i; j++)
    {
        cout << "Enter a "<< j + 1 << " value to delete: ";
        cin >> value;

        temp.erase(value); //Removing an element
    }
}

template<typename t>
void ComOfSets(const set<t> &temp, const set<t> &tem) //creating a templated function to compare data in sets
{
    if(temp == tem)
    {
        cout << "Sets are identical" << endl;
    }
    else
    {
        cout << "Sets aren`t identical" << endl;
    }
}

int main()
{
    set<int> Myset;
        Myset.insert(5); //Setting a value in a custom set

    cout << "Output from \"Myset\": ";
    PrintSet(Myset); //Outputting data from a set
    cout << endl;

    set<int> Myset2 = {0, 10, 5, 7, 99, 6};

    SearchSet(Myset2); //Searching data in a set

    cout << "\nOutputting \"Myset2\" before deleting items: ";
    PrintSet(Myset2); //Outputting data from a set

        EraseSet(Myset2); //Deleting data in a set

    cout << "Outputting \"Myset2\" after deleting items: ";
    PrintSet(Myset2); //Outputting data from a set
    cout << endl;

    set<int> Myset3 = {15, 7, 1, 9, 2, 6};

    ComOfSets(Myset2, Myset3); //Comparising data in a set

return 0;
}
