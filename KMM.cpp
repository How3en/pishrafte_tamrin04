#include <iostream>
using namespace std;

int main() {

    int number[2],container[3],temp,i,KMM;

for (i = 0; i<2; i++){

        cout << "Enter number " <<i+1 <<" : ";
        cin >> number[i];}
        container[0] = number[0];
        container[1] = number[1];

    while(true){

        if(number[1] == 0) break;
        temp = number[0]%number[1];
        number[0] = number[1];
        number[1] = temp;
    }

    container[2] = (container[0]*container[1] / number[0]);

    cout<<"K.M.M = "<<container[2];

    return 0;
}
