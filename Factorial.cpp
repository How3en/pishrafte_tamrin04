#include<iostream>
using namespace std;
int main()
{
   int number,i,j;
   
   cout << "Enter your number : ";
   cin >> number;
   j = number;
   cout <<endl;

      for(i = 1; number>1; i++){
            
        if (number % i == 0){
                
            number = number/i;}
        
        else if {
                
            break;}
    }
    
      if(number == 1)
      cout <<j <<" = it's a factorial\n";
      else
      cout <<j <<" = it's not a factorial\n";
      
	return 0;
}
