#include <iostream>
using namespace std;

int main() {

    int number[2],temp,i;

for (i = 0; i<2; i++){

        cout << "Enter number " <<i+1 <<" : ";
        cin >> number[i];}

    while(true){

        if(number[2] == 0) break;
        temp = number[0]%number[1];
        number[0] = number[1];
        number[1] = temp;
    }

    cout<<"B.M.M : "<<number[0];

    return 0;
}
