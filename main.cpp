//Kole Earhart
//9/11/2017

#include<fstream>

using std::ifstream;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include<string>

using std::string;





int main()

{

	string file;                        //Local variable to store filename

	double buffer[4];

	int count(0);

	cout << "Enter name of text file: " << endl;      // prompt user for file name

	cin >> file;

	ifstream inFile;

	inFile.open(file);              //Open file


	if (!inFile)                        //error testing

	{

		cout << "Could not open " << file << endl;

		inFile.close();

		inFile.clear();

		return 1;

	}


	inFile >> buffer[0];         //reads first two numbers

	count++;

	inFile >> buffer[1];

	count++;

	while (!inFile.eof() && !inFile.fail())            // gets total amount of numbers

	{

		int temp;

		inFile >> temp;

		count++;

	}

	inFile.seekg(0, ios::beg);                         // goes back to the beginning of the file


	for (int i = 0; i < count - 2; i++)

	{

		int temp;

		inFile >> temp;

	}



	inFile >> buffer[2];                             //reads last 2 numbers

	inFile >> buffer[3];



	cout << "The first two numbers, followed by the last two numbers: " << endl;             // prints 1st 2 numbers and last two numbers

	for (int i = 0; i < 4; i++)

	{

		cout << buffer[i] << endl;

	}

	cout << "Total numbers in file: " << count << endl;  // prints total numbers

	inFile.close();

	return 0;

}
