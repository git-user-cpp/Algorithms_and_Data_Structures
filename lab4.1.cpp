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
    list<int> mylist;

    mylist.assign(20, 0); //Creating a capacity for 20 elements and initializing them with 0

    for(auto i = mylist.begin(); i != mylist.end(); ++i) //loop for filling the list
    {
        *i = rand()%100; //filling the list by random integers from 0 to 100
    }

    list<int> mylist2;

    mylist2.assign(20, 0); //Creating a capacity for 20 elements and initializing them with 0

    for(auto i = mylist2.begin(); i != mylist2.end(); ++i) //loop for filling the list
    {
        *i = rand()%100; //filling the list by random integers from 0 to 100
    }

    cout << "List 1: ";
    PrintList(mylist);

    cout << "\nList 2: ";
    PrintList(mylist2);

    mylist.swap(mylist2); //Swapping the lists

    //Output results
    cout << "\nList 1: ";
    PrintList(mylist);

    cout << "\nList 2: ";
    PrintList(mylist2);

    list<int> repetition {0, 0, 0, 0, 0, 0, 7, 8, 9, 0, 0, 0, 0, 5, 6, 4, 6, 0, 0, 7}; //Creating a list of static data

    cout << "\nList before removing 0: ";
    PrintList(repetition);

    repetition.remove(0); //Removing redundant data

    cout << "\nList after removing 0: "; //Result
    PrintList(repetition);

return 0;
}
