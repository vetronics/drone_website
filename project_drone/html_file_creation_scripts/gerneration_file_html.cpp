// imprtazione delle librerie 
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	// settaggio cli 
	
	system("cls");
	system("color a");
	system("title generazione file htlm");
	
		system("python -m  pyfiglet generation hml file ");
		
		
	// dichiarazione variabili 
	int i ;
	
	printf("genrazione dei file in corso \n\n");
	
	// genrazione dei file richiesti in modo atomatico
	
	for(i=1;i<=2;i=i+1){
		
		system("echo >> storia.htm");
		
		system("echo >> uso_civili.htm");
		
		system("echo >> usi_militari.htm");
		
		system(" echo >> sitografia.htm");
		
			
		

	}
	system("pause >nul ");
	
	return 0;
}
