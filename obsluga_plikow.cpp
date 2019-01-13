#include<iostream>
#include<fstream>

int main(){
	
	std::fstream plik;
	plik.open( "pliczek.txt", std::ios::in | std::ios::out );
	if(plik.good() == true ){
	    std::cout << "Uzyskano dostep do pliku!" << std::endl;
	    //tu operacje na pliku
	    
	} else {
		std::cout << "Dostep do pliku zostal zabroniony lub pliku nie ma" << std::endl;
		std::ofstream nowyPlik("pliczek2.txt");
		nowyPlik << "Jakastam zawartosc" << std::endl;
		nowyPlik << "Jeszcze wiecej zawartosci" << std::endl;
	}
	plik.close();
	
}
