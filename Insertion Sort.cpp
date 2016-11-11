#include <iostream>

#include <conio.h>

using namespace std;

int main()

{

    int a[6], i, j, k, temp;

    cout<<"enter the 6 elements\n";

    for (i = 0; i < 6; i++)

    {

        cin>>a[i];

    }

    for (i = 1; i < 6; i++)

    {

        for (j = i; j >= 1; j--)

        {

            if (a[j] < a[j-1])

            {

                temp = a[j];

                a[j] = a[j-1];

                a[j-1] = temp;

            }

            else

                break;

        }

    }

    cout<<"sorted array\n"<<endl;

    for (int z = 0; z < 6; z++)

    {

	cout<<a[z]<<endl;

    }

    getch();

}
