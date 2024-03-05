#include <iostream>


using namespace std;

int nDeLiterais(string fl);


int main(int argc, char** agrv){
	char simbolos[] = {'~', '^', 'v', '=', '-', '(', ')'};
	
	string fl; //formula lógica
	string ltr = "";
	
	cout << "Type a logical equation: ";
	getline (cin, fl);
	
	char literais[nDeLiterais(fl, simbolos, ltr)];
	cout << ltr;
	
	return 0;
}

/*
class Literal{
	public:
		char letra;
		bool valor;
};
*/


int nDeLiterais(string fl, char c[], string &ltr){
	int n=0;
	for(int i=0; i<fl.length(); i++){
		if(fl[i] == ' ') continue;
		else{
			for(int j=0; j < sizeof(c); j++){
				if(fl[i] != c[j]){
					n++;	
					ltr.append(fl[i]);
				}
			}
		}
	}
	return n;
}
