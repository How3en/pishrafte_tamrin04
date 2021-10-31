#include<iostream>
using namespace std;
int main()
{
	int SIZE [2],i,j;
        string a,b,c;
        a = "#";
        b = "*";

	for (i = 0; i<2; i++){

        cout << "Enter Size " <<i+1 <<" : ";
        cin >> SIZE[i];

	}

	for (j = 1; j <= SIZE[0]; j++){
        cout<<endl;

        for (i = 1; i <= SIZE[1]; i++){

            if (i % 2 != 0)
            {
                cout << a;
            }
            else if (i % 2 == 0)
            {
                cout << b;
            }
        }

        c = b;
        b = a;
        a = c;
     }


	return 0;
}
