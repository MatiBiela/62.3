#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;



int main(int argc, char** argv) {
	ifstream input;
	ifstream output;
	int liczba1, liczba2;
	int liczbarowna, liczbawieksza;
	
	input.open("liczby1.txt");
	output.open("liczby2.txt");
	if(input.good()) {
		while(!input.eof()) 
		{
			for(int i=0; i<1000; i++)
			{
				input >> oct >> liczba1;
				output >> dec >> liczba2;
				if(liczba1 == liczba2)
				liczbarowna++;
				else if(liczba1 > liczba2)
				liczbawieksza++;
			}
			cout << "Liczby o tych samych wartosciach: " << liczbarowna << "," << endl;
			cout << "Liczba z pierwszego pliku jest wieksza od liczby z drugiego w pliku w  " << liczbawieksza << " linijkach";
		}
}
	return 0;
}
