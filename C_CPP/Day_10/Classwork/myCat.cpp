
// Purpose - Write a program to display the contents of a text file in C++, optionally numbering each line when a -n command-line option is provided.

#include <iostream>
#include <fstream>
using namespace std;

void fileOut(istream&, ostream &,bool lineNu=false);

int main(int argc, char *argv[]){
	if (argc == 2){
		ifstream fObj(argv[1]);
		fileOut(fObj, cout);
	}else if ((argc == 3) && (argv[1][0] =='-') && (argv[1][1]=='n')){
		ifstream fObj(argv[2]);
		fileOut(fObj, cout, true);
	}
}

void fileOut(istream &in, ostream &out, bool lineNu){
	char ch;
	int num = 1;
	if(lineNu)
		cout<<num++<<"\t";
	while(in.get(ch)){
		out<<ch;
		if ((ch=='\n') && lineNu)
			cout<<num++<<"\t";
	}
}

