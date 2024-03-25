/******************************************************************************
Elabore um programa que calcule o M.D.C. (máximo 
divisor comum) entre dois valores fornecidos pelo 
usuário. Por exemplo: M.D.C. de 12 e 20 é 4.

*******************************************************************************/
#include <iostream>
using namespace std;


int Xa;
int Xb;

int conta ( int Xa, int Xb);


int main ()
{

  cout << "digite os dois valores" << endl;
  int valores;
  for (int i = 0; i < 1; i++)
	{
	  cin >> Xa;
	  cin >> Xb;
     cout << "MDC = " << conta(Xa,Xb);
	}


}


int conta (int Xa, int Xb){
  
  if(Xa%Xb == 0){
      return Xb;
  }else{
      return conta(Xb, Xa%Xb);
  }
       

}









