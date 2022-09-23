#include <iostream>
using namespace std;


char A = 1; //oppgave 7
int B = 2;
long C = 3;
float D = 4;
double E = 5;


void greeting() //oppgave 3
{
	cout << "Greetings, what's your name?" << "\n";	 // oppgave 4

	string bruker;
	cin >> bruker;
	
	cout << "nice to meet you " << bruker << ", how are you doing?" << "\n\n";
}

int main()
{
	//cout << "hello world" << "\n";  //oppgave 1
	

	/*string input; // oppgave 2
	cin >> input;
	*/
	
	for (int i = 0; i < 10; i++) // oppgave 5
	{
		greeting(); //oppgave 4
		
		if (i == 5) // oppgave 6
		{

			cout << " Alright this isn't going anywhere...goodbye" << "\n\n";
			break;

		}

		cout << "Size of char:" << sizeof(char) << "\n"; //opgave 7
		cout << "Size of int:" << sizeof(int) << "\n";
		cout << "Size of long:" << sizeof(long) << "\n";
		cout << "Size of float:" << sizeof(double) << "\n";
		cout << "Size of double:" << sizeof(double) << "\n\n";
	}



	
}


