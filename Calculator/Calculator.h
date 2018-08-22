#pragma once

#include <Windows.h>
#include <iostream>
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
	void ReturnToNum1();
	void Return();
	void AddNewNum(int);

	void RemoveNum();
	void ClearNum();
	void ClearAll();

public:
	Calculator();

	double GetNum1();
	double GetNum2();
	double GetResultNum();

	void SetUpdate(bool);
	bool GetUpdate();

	void KeyPressCB(int);

	CalculatorState GetCalculatorState();
	MathMethod GetMathMethod();
};
