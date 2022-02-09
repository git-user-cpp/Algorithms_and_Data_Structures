#include <iostream>

using namespace std;

int main()
{
    int Arr[3][3] = {{3, 10, 89}, {45, 55, 1}, {12, 31, 64}};

    for(int c = 0; c < 3; c++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int i = 0; i < 2; i++)
            {
                if(Arr[c][i] < Arr[c][i+1])
                {
                    int bufer = 0;

                    bufer = Arr[c][i];
                    Arr[c][i] = Arr[c][i+1];
                    Arr[c][i+1] = bufer;
                }
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << Arr[i][j] << '\t';
        }

        cout << endl;
    }

return 0;
}