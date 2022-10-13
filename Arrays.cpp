#include <iostream>
using namespace std;

//Teori oppgave 1: array er en liste på en egendefinert lengde g tall

//Teori oppgave 2: lengden til en array finner du innefor brakkene på starten av variabelene. det ser slik ut: int ArrayList [10];
//her definerer vi en int med et navn av ArrayList til å ha en lengde på 10

//Teori oppgave 3: første elementet til en array starter alltid på index 0



int main()
{


	int ArrayList[10]; //definerer lengde på liste og navn | oppgave 3

	ArrayList[0] = 1; // definerer verdiene til de 10 plassene til listen | oppgave 1 + 2
	ArrayList[1] = 2;
	ArrayList[2] = 3;
	ArrayList[3] = 4;
	ArrayList[4] = 5;
	ArrayList[5] = 6;
	ArrayList[6] = 7;
	ArrayList[7] = 8;
	ArrayList[8] = 9;
	ArrayList[9] = 10;
	

	
int length = sizeof(ArrayList)/sizeof(int);

	for (int i = 0; i < length; i++)
	{
		cout << "-----------------------------------------\n"; //linjer for å holde det ryddig

		cout << "i: " << i << "\tElement for space i: " << ArrayList[i] << "\n"; //printer verdien til i gjennom hele arrayen på en linje per
		cout << "-----------------------------------------\n"; //linjer for å holde det ryddig
	}
	
	cout << "\nListLength: " << sizeof(ArrayList) / sizeof(int) << "\n";


	//Array av flere dimensjoner
	cout << "\n";
	cout << "-----------------------------------------\n";
	cout << "Dimensions: ";
	int twoD[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}}; //oppgave 5 + 6


	int outer_length = 3; //oppgave 5
	int inner_length = 5;

	for (int i = 0; i < outer_length; i++) //oppgave 7
	{
		for (int j = 0; j < inner_length; j++)
		{
			cout << "\n outer nr: " << i << "\tinner nr: " << j << "\tValue: " << twoD[i][j];
		}
	}
	cout << "\n----------------------------------------- \n\n\n"; //flere nye linjer for å holde det ryddig
}