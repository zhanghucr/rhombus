#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    int i, j;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (i < 4)
            {
                if (j >= (7 - ((i * 2) + 1)))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j < (7 - (i - 3) * 2))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
}
