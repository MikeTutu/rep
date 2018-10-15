#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Student{
	string id;
	string Name;
	int Age;
	string Gender;
	double Score;
	char Grade;
};


char getGrade(double score)
{
	char Grade;

	
	if(score >=80 && score <100){
		Grade = 'A';
	}else if (score >=70 && score <80){
		Grade = 'B';
	}else if (score >=60 && score <70){
		Grade = 'C';
	}else if (score >=50 && score < 60){
		Grade = 'D';
	}else if (score >=40 && score < 50){
		Grade = 'E';
	}else {
		Grade = 'F';
	}
	
	return Grade;
}

int main(){
	
	Student r[4];
	
	for(int i=1; i<6; i++)
	{
		cout << "Enter Student " << i << "'s Name:";
		cin >> r[i].Name;
		cout << "Enter Student " << i << "'s Id: ";
		cin >> r[i].id;
		cout << "Enter Student " << i << "'s Age: ";
		cin >> r[i].Age;
		cout << "Enter Student " << i << "'s Gender: ";
		cin >> r[i].Gender;
		cout << "Enter Student " << i << "'s Score: ";
		cin >> r[i].Score;
		r[i].Grade = getGrade(r[i].Score);
	}
	
	
	
	fstream fin;
	fin.open("message.txt");

	fin << "  IdNumber\tName\tAge\tGender\tScore\t\Grade" << endl;
	for(int i=1; i<6; i++)
	{
		fin << i << " " << r[i].id <<"\t\t"<<r[i].Name << "\t" << r[i].Age << "\t" << r[i].Gender<< "\t" << r[i].Score << "\t" << r[i].Grade << endl;
	}
	

	

	return 0;
	
	}
