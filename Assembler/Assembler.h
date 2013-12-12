/**
 * Manchester Baby Assembler header file
 * Contains a header to be inserted into the top of the program
 * displays the progress bar whenever called in during execution of the converstion
 * @ "Kyle Harrison"
 * @ (28/11/2011)
 */
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int progress=0;
string progressBar [100];


void header()
{
	cout << "<---------------------------------------------->" << endl;
	cout << ""<<" 	Manchester Baby Assembler" << endl;
	cout << "<---------------------------------------------->" << endl;
	cout << ""<<"  Author   : Kyle Harrison" << endl;
	cout << ""<<"  ID#      : 110009870" << endl;
	cout << ""<<"  Module   : AC21009 - Computer Systems 2a: " << endl;
	cout << ""<<"             Architecture Fundamentals  And Unix" << endl;
	cout << ""<<"  Project  : Assignment 6 - Baby Assembler" << endl;
	cout << ""<<"  Date     : 28/11/2011" << endl;
	cout << "<----------------------------------------------> " << endl;

}

void displayProgress()
{
	cout << string( 50, '\n' );

	if(progress!=100)
	{
		cout << " Progress : " << progress << " %" << endl;
		cout << "<---------------------------------------------->" << endl;
		if((progress%2)==1)
		{
			progressBar[progress]="|";
		}

		for(int index = 0; index <progress; index++)
		{
			cout << progressBar[index];
		}
		cout << "\n<---------------------------------------------> " << endl;
		progress=progress+1;
		//sleep(1);
		usleep(200000);
	}
	else
	{
		cout << " Progress : " << progress << " %" << endl;
		cout << "<------------------------------------------------->" << endl;
		//progressBar[progress]="|";

		for(int index = 0; index <50; index++)
		{
			cout << "|";
		}
		cout << "\n<--------------------------------------------------> " << endl;

	}
}
