// Zadanie domowe, analiza 5 liczb.
// Wykona³ Jakub Gadecki

#include <iostream>

using namespace std;
float a,b,c,d,e;
float tablica[5];
int main(){
	
	cout<<"\nZadanie z podstaw programowania \nWprowadzamy 5 liczb z klawiatury nastepnie \nwskazujemy najwieksza, najmniejsza \noraz ilosc wystepowania liczb.\n\n\n";
	cout<<"\nPodaj 5 liczb, kazda zatwierdz przyciskiem ENTER";
	for (int i=0; i<5 ; i++){
		cout<<"\nLiczba nr "<<i+1<<": ";
		cin>>tablica[i];
	}
	a = tablica[0];
	for (int i=0; i<5; i++){
		if (tablica[i] < a){
			a = tablica[i];
		}
	}
	cout<<"\nNajmniejsza liczba to: "<<a;
	b = tablica[0];
	for (int i=0; i<5; i++){
		if (tablica[i] > b){
			b = tablica[i];
		}
	}	
	cout<<"\nNajwieksza liczba to: "<<b<<"\n";
	c = tablica[0];
	for (int i=0; i<5; i++){
		d=0;
		for (int j=0; j<5; j++)
		if (tablica[i] == tablica[j] ){
			d = d+1;
		}		
	cout<<"\nIlosc wystepowania liczby nr "<<i+1<<" o wartosci "<<tablica[i]<<" to: "<<d;
	}
	
	
	
cout<<"\n\n\n\n";	
system("PAUSE");
return 0;
}
