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