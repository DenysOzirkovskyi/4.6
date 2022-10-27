// 4,6лаб.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	double k,n,P,S;
	n = 1;
	S = 0;
		while (n<=25) //1спосіб
	{
			P = 1;
			k = 1;
			while (k<=n)
			{
				P *= sqrt(cos(k + n) * cos(k + n));
				k++;
			}

			S += cos(n) + P;
			n++;
			
	}
		cout << "S1= " << S << endl;
		n = 1;
		S = 0;
		do //2спосіб
		{
			P = 1;
			k = 1;
			do
			{
				P *= sqrt(cos(k + n) * cos(k + n));
				k++;
			} while (k<=n);

			S += cos(n) + P;
			n++;
			
		} while (n<=25);

		cout << "S2= " << S << endl;

		S = 0;
		for (n = 1;n <= 25;n++) //3спосіб
		{
			P = 1;
			for(k=1;k<=n;k++)
			{
				P *= sqrt(cos(k + n) * cos(k + n));
				
			} 

			S += cos(n) + P;
		}
		cout << "S3= " << S << endl;

		S = 0;
		   for (n = 25; n>=1; n--)   //4спосіб
		{
			P = 1;
		
			for(k=n;k>=1;k--)
			{
				P *= sqrt(cos(k + n) * cos(k + n));
				
			} 

			S += cos(n) + P;
		   }
		   		cout << "S4= " << S << endl;
		return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
