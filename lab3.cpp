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

    mylist.assign(25, 0); //Creating a capacity for 25 elements and initializing them with 0

    for(auto i = mylist.begin(); i != mylist.end(); ++i) //loop for filling the list
    {
        *i = rand()%100; //filling the list by random integers from 0 to 100
    }

    cout << "List 1: ";
    PrintList(mylist);
    cout << "\nSize of list = " << mylist.size() << " ,(15 on the group list + 10 elements)" << endl; //Outputting information about list capacity

    mylist.sort(); //Sorting data in the list

    cout << "\nList 1 (sorted data): ";
    PrintList(mylist);

    list<int> mylist2;

    mylist2.assign(10, 0); //Creating a capacity for 10 elements and initializing them with 0

    for(auto i = mylist2.begin(); i != mylist2.end(); ++i) //loop for filling the list
    {
        *i = rand()%1000; //filling the list by random integers from 0 to 1000
    }

    cout << "\nList 2: ";
    PrintList(mylist2);

    auto it = mylist2.begin(); //Creating an iterator to access elements
    int tempmax = *it; //Creating temporary variable for maximum and initializing it with first element of the list
    int tempmin = *it; //Creating temporary variable for minimum and initializing it with first element of the list

    for(auto i = mylist2.begin(); i != mylist2.end(); ++i) //loop for filling the list
    {
        if(*i > tempmax) //Comparison of the temporary max element with other elements from list
        {
            tempmax = *i; //Asigning a new value to a temporary variable
        }
        else if(*i < tempmin) //Comparison of the temporary min element with other elements from list
        {
            tempmin = *i; //Asigning a new value to a temporary variable
        }
    }

    cout << "\nList 2 (Max): " << tempmax << endl;
    cout << "List 2 (Min): " << tempmin << endl << endl;

    mylist.merge(mylist2); //Merging the lists

    cout << "Merged lists: ";
    PrintList(mylist);

    auto iter = mylist.begin(); //Creating an iterator to access elements

        advance(iter, 2); //Moving iterator to 3rd element
        mylist.erase(iter); //Removing 3rd element from list

        iter = mylist.begin(); //Restoring the position of the iterator

        advance(iter, 4);
        mylist.erase(iter);

        iter = mylist.begin();

        advance(iter, 6);
        mylist.erase(iter);

    cout << "\nErased 3, 6 and 9 element: ";
    PrintList(mylist);

return 0;
}
