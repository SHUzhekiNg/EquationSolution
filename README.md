# 实验一



#### 函数运行流向：

WelcomeUI()  -------------------->  Run()  --->  CalculateDelta()  --->  PrintAns()

​						|						^			|										|

​						|						|			|										|

​						 ----> Test() ---->			  -------> RunSimple() ------>



#### 文件结构

EquationSolution ---------> equation_solution.h					//  函数声明， 头文件引用

​									|----> equation_solution.cpp				//  函数实现

​									|----> main.cpp										//  函数使用



