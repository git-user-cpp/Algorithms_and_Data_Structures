#include <iostream>
#include <list>

using namespace std;

int Factorial(int a)
{
    if(a == 0)
    {
        return 0;
    }
    else if(a == 1)
    {
        return 1;
    }
    else
    {
        return a * Factorial(a-1);
    }
}

int sumFactorial(const list<int> &lst)
{
    int sum = 0;

    for(auto i = lst.cbegin(); i != lst.cend(); i++)
    {
        sum += Factorial(*i);
    }

    return sum;
}

int main()
{
    list<int> list1 = {4, 6};
    list<int> list2 = {5};
    list <int> list3 = {7, 9, 5};
    list<int> list4 = {4, 8, 5};

    cout << sumFactorial(list1) << endl;
    cout << sumFactorial(list2) << endl;
    cout << sumFactorial(list3) << endl;
    cout << sumFactorial(list4) << endl;

return 0;
}