#pragma once

#include <Windows.h>
#include <iostream>
#include <thread>
#include <conio.h>

typedef enum {
	FirstNumber,
	SecondNumber,
	Done
}CalculatorState;

typedef enum {
	None,
	Addition,
	Subtraction,
	Multiplication,
	Division
}MathMethod;

class Calculator {
private:
	double m_ResultNum;
	double m_Num1;
	double m_Num2;

	bool m_Update;

	CalculatorState m_State;
	MathMethod m_Method;
protected:
	std::thread* m_ThreadCalculate;

	void CalculateLoop();

	void ReturnToNum1();
	void Return();
	void AddNewNum(int);

	void RemoveNum();
	void ClearNum();
	void ClearAll();

public:
	Calculator();

	void StartCalculator();

	double GetNum1();
	double GetNum2();
	double GetResultNum();

	void SetUpdate(bool);
	bool GetUpdate();

	CalculatorState GetCalculatorState();
	MathMethod GetMathMethod();
};
