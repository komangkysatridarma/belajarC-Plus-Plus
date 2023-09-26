#include <iostream>
using namespace std;

int main()
{
    //int array 2 dimensi
    string huruf [3][4]= {
        {"|K| |O| |M| |A|"},
        {"|N| |G| |K| |Y|"},
        {"|S| |A| |T| |D|"}

    };

   for  (int  b = 0; b<3; b++)
   {
        for (int k = 0; k<4; k++)
        {
            cout << huruf [b][k] << " ";
        }

        cout << endl;
   }

   
}