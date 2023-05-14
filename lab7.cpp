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
