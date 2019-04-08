/*
 * Result.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: root
 */

#include "Result.h"
#include<string>
#include<vector>
#include<iostream>

using namespace std;

Result::Result(vector<vector<int> >ID, vector<vector<string> >nm, vector<vector<vector<float> > >Mrks, vector<string>dpt, vector<vector<string> >cors_name,vector<vector<int> >credit)
:Id(ID),
 Name(nm),
 Marks(Mrks),
 Dept(dpt),
 Course_Name(cors_name),
 Credit(credit)
{
	       // TODO Auto-generated constructor stub

}

void Result::students_rslt(string U){


	for(unsigned int i=0;i< Dept.size();i++){
			if(U == Dept[i]){
				n=i;

			}
 }
	cout <<"id no."<<"    ";
	for(unsigned int i=0;i< Course_Name[n].size();i++){
				cout<<Course_Name[n][i]<<" ";

			}
	cout <<endl;
	for(unsigned int i=0;i<Id[n].size();i++){
			cout<<Id[n][i]<<"    ";
			for(unsigned int j=0;j<Marks[n][i].size();j++){
				sum_marks=sum_marks+Marks[n][i][j]*Credit[n][j];
				sum_credit=sum_credit+Credit[n][j];
				cgpa=sum_marks/sum_credit;

				cout<<Marks[n][i][j]<<"       ";

			}
			cout << endl;
			cout << "CGPA ";
			cout << cgpa;
			cout <<endl;
			cout<<endl;
	}

}
void Result::student_inform(string T){

	for(unsigned int i=0;i< Dept.size();i++){
		if(T==Dept[i]){
			n=i;
		}
	}
	for(unsigned int i=0;Name[n].size();i++){
		cout<<Name[n][i]<<" ";
		cout<<Id[n][i]<<endl;
	}

}
void Result::individual_student(){
	cout<< "Student ID:";
	cin>>m;
	for(unsigned int i=0;i<Id.size();i++){
		for(unsigned int j=0;j<Id[i].size();j++){
			if(m==Id[i][j]){
				n=i;
				l=j;
			}
		}
	}
	cout<<"       ";
	for(unsigned int i=0;i<Course_Name[n].size();i++){
		cout<<Course_Name[n][i]<<" ";
	}
	cout << endl;
	cout<<Name[n][l]<<" ";
	for(unsigned int j=0;j<Marks[n][l].size();j++){
					sum_marks=sum_marks+Marks[n][l][j]*Credit[n][j];
					sum_credit=sum_credit+Credit[n][j];
					cgpa=sum_marks/sum_credit;

					cout<<Marks[n][l][j]<<"       ";

				}
	cout <<endl;
	cout<<"CGPA ";
	cout << cgpa;
	cout <<endl;
}
