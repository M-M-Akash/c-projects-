//============================================================================
// Name        : Studen_database.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include"Result.h"
#include <iostream>

#include<string>

#include<vector>

using namespace std;

int main() {
	vector<vector<int> >id { {171701,171703,171709},//physics
			                    {171802,171806,171818} };//chemistry

	    vector<vector<string> >name {{"Rishad","Rajib","Istiak"},//physics
	    	                        {"Tonmoy","Jaber","Nafis"}};//chemistry
	    vector<vector<vector<float> > >marks{{{3.14,3.16,3.50},{3.12,3.15,3.40},{3.21,3.11,3.14}},//physics
	    	                               {{3.20,3.34,3.35},{3.13,3.16,3.19},{3.25,3.40,3.25}}};//chemistry

	    vector<string> dept{"physics","chemistry"};
	    vector<vector<string> >course_name{{"phy 2203","phy 2205","phy2201"},//physics
	                                      {"che 2202","che 2206","che 2204"}};//chemistry
	    vector<vector<int> >course_credit{ {3,3,3},//physics
	    	                               {3,3,3} };//chemistry
	    string S;
	    string T;
	    int x;
	cout<<"1.Student information"<<endl<<"2.Students Result"<<endl<<"3.Individual result"<<endl;

	    cin>>x;


	    if(x==1){

	    	 cout<<"Which discipline? physics or chemistry"<<endl;
	    	    cin>>S;
	    	    Result obj(id,name,marks,dept,course_name,course_credit);
	    	obj.student_inform(S);
	    }
	    if(x==2){
	    	cout<<"Which discipline? physics or chemistry"<<endl;

	    	cin>>S;
	    	Result obj(id,name,marks,dept,course_name,course_credit);
	    	obj.students_rslt(S);

	    }
	    if(x==3){
	    	Result obj(id,name,marks,dept,course_name,course_credit);
	    	obj.individual_student();
	    }


	    		return 0;


}
