#pragma once
#ifndef EQUALATION_SOLUTION_H_
#define EQUALATION_SOLUTION_H_

#include <iostream>
#include <cstring>
using namespace std;

inline bool CalculateDelta(double& delta, double a, double b, double c);
bool RunSimple(double a, double b, double c);
bool Run(double a, double b, double c);
bool WelcomeUI(void);

#endif