/* 
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
 */

#include<iostream>

using namespace std;

int main(void)
{
    int row, col;

    for(row = 0; row <= 5; row++)
    {
        for(col = 0; col <= 5; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}