#pragma once
#ifndef EQUALATION_SOLUTION_H_
#define EQUALATION_SOLUTION_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool CalculateDelta(double& delta, double a, double b, double c);
void PrintAns(vector<string>& ans);
void RunSimple(vector<string>& ans, double a, double b, double c);
bool InputParams(double& a, double& b, double& c);
void Run(vector<string>& ans, double a, double b, double c);
void Test(vector<string>& ans);
char WelcomeUI(void);

#endif