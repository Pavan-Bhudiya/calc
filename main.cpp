#include <iostream>
using namespace std;
int calculate(int num1,int num2,char op) {
  int results;
  switch(op){
    case '+':
      results=num1+num2;
       break;  
   case '-':
       results=num1-num2;
       break;
   case '*':
      results=num1*num2;
      break;
   case '/':
     if(num2==0){
        cout<<"Division Error"<<endl;
        return 1;
        }
      else{ 
      results=num1/num2;
      break;
      }
    default:
      cout<<"Invalid operation"<<endl;
      return 1;
      }
    return results;
 }
 
 
int main(){
 int num1,num2;
 char op;


  cout<<"Enter first number "<<endl;
  cin>>num1;
  cout<<"Enter second number"<<endl;
  cin>>num2;
  cout<<"Enter operation"<<endl;
  cout<<"+ , - , * /"<<endl;
  cin>>op;
  int results=calculate(num1,num2,op);
  cout<<results;
return 0;
}
