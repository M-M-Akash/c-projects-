/*
 * Result.h
 *
 *  Created on: Apr 8, 2019
 *      Author: root
 */

#ifndef RESULT_H_
#define RESULT_H_

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Result {
public:
	Result(vector<vector<int> >ID, vector<vector<string> >nm, vector<vector<vector<float> > >Mrks, vector<string>dpt, vector<vector<string> >cors_name,vector<vector<int> >credit);

	int n=0;
	int m;
	int l;
	float sum_marks=0;
	float sum_credit=0;
	float cgpa=0;

	vector< vector<int> >Id;
	vector< vector<string> >Name;
	vector< vector< vector<float> > >Marks;
	vector<string>Dept;
	vector<vector<string> >Course_Name;
	vector<vector<int> >Credit;

	void student_inform(string T);
	void students_rslt(string U);
	void individual_student();
};

#endif /* RESULT_H_ */
