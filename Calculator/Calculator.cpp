#include "Calculator.h"

Calculator::Calculator() {
	m_ResultNum = 0.0;
	m_Num1 = 0.0;
	m_Num2 = 0.0;

	m_State = FirstNumber;	
	m_Method = None;

	m_Update = true;
}

void Calculator::StartCalculator() {
	m_ThreadCalculate = new std::thread(&Calculator::CalculateLoop, this);
}

void Calculator::CalculateLoop() {
	int key_now, key_before = 0;

	while (1) {
		key_now = _getch();

		if (key_now != key_before) {
			if (m_State == FirstNumber) {
				if (key_now > 47 && key_now < 58) {
					AddNewNum(key_now);
					m_Update = true;
				}
				else {
					switch (key_now)
					{
					case 8:// BackSpace Key Press
						RemoveNum();
						m_Update = true;
						break;
					case 13:// Enter(Return) Key Press
						Return();
						m_Update = true;
						break;
					case 27:// Esc Key Press
						ClearAll();
						m_Update = true;
						break;
					case 42:// * Key Press
						m_Method = Multiplication;
						m_State = SecondNumber;
						m_Update = true;
						break;
					case 43:// + Key Press
						m_Method = Addition;
						m_State = SecondNumber;
						m_Update = true;
						break;
					case 45:// - Key Press
						m_Method = Subtraction;
						m_State = SecondNumber;
						m_Update = true;
						break;
					case 47:// / Key Press
						m_Method = Division;
						m_State = SecondNumber;
						m_Update = true;
						break;
					case 224:// Delete Key Press
						ClearNum();
						m_Update = true;
						break;
					default:
						break;
					}
				}
			}
			else if (m_State == SecondNumber) {
				if (key_now > 47 && key_now < 58) {
					AddNewNum(key_now);
					m_Update = true;
				}
				else {
					switch (key_now)
					{
					case 8:// BackSpace Key Press
						RemoveNum();
						m_Update = true;
						break;
					case 13:// Enter(Return) Key Press
						Return();
						m_Update = true;
						break;
					case 27:// Esc Key Press
						ClearAll();
						m_Update = true;
						break;
					case 42:// * Key Press
						m_Method = Multiplication;
						ReturnToNum1();
						m_Update = true;
						break;
					case 43:// + Key Press
						m_Method = Addition;
						ReturnToNum1();
						m_Update = true;
						break;
					case 45:// - Key Press
						m_Method = Subtraction;
						ReturnToNum1();
						m_Update = true;
						break;
					case 47:// / Key Press
						m_Method = Division;
						ReturnToNum1();
						m_Update = true;
						break;
					case 224:
						ClearNum();
						m_Update = true;
						break;
					default:
						break;
					}
				}
			}
			else if (m_State == Done) {
				if (key_now > 47 && key_now < 58) {
					m_State = FirstNumber;
					AddNewNum(key_now);
					m_Update = true;
				}
			}

			if (key_now == 115) {
				system("cls");
				std::cout << "Num 1: " << GetNum1() << std::endl;
				std::cout << "Num 2: " << GetNum2() << std::endl;
				std::cout << "Num  : " << GetResultNum() << std::endl;
			}

			key_before = key_now;
		}
	}
}

void Calculator::Return() {
	if (m_Method == Addition) {
		m_ResultNum = m_Num1 + m_Num2;
	}
	else if (m_Method == Subtraction) {
		m_ResultNum = m_Num1 - m_Num2;
	}
	else if (m_Method == Multiplication) {
		m_ResultNum = m_Num1 * m_Num2;
	}
	else if (m_Method == Division) {
		m_ResultNum = m_Num1 / m_Num2;
	}

	m_Num1 = 0.0;
	m_Num2 = 0.0;
	m_State = Done;
	m_Method = None;
}

void Calculator::ReturnToNum1() {
	if (m_Method == Addition) {
		m_Num1 = m_Num1 + m_Num2;
	}
	else if (m_Method == Subtraction) {
		m_Num1 = m_Num1 - m_Num2;
	}
	else if (m_Method == Multiplication) {
		m_Num1 = m_Num1 * m_Num2;
	}
	else if (m_Method == Division) {

	}
}

void Calculator::AddNewNum(int _Num_Ascii) {
	int num = 0;

	switch (_Num_Ascii)
	{
	case 48:// Number 0
		num = 0;
		break;
	case 49:// Number 1
		num = 1;
		break;
	case 50:// Number 2
		num = 2;
		break;
	case 51:// Number 3
		num = 3;
		break;
	case 52:// Number 4
		num = 4;
		break;
	case 53:// Number 5
		num = 5;
		break;
	case 54:// Number 6
		num = 6;
		break;
	case 55:// Number 7
		num = 7;
		break;
	case 56:// Number 8
		num = 8;
		break;
	case 57:// Number 9
		num = 9;
		break;
	default:
		break;
	}

	if (m_State == FirstNumber) {
		m_Num1 = m_Num1 * 10 + num;
	}
	else if (m_State == SecondNumber) {
		m_Num2 = m_Num2 * 10 + num;
	}
}

void Calculator::RemoveNum() {
	double num;
	double remainder = 0.0;

	if (m_Method == FirstNumber) {
		num = m_Num1;

		if (num < 10 && num >0) {
			m_Num1 = m_Num1 - num;
		}
		else {
			remainder = (int)num % 10;
			m_Num1 = (m_Num1 - remainder) / 10;
		}
	}
	else if (m_Method == SecondNumber) {
		num = m_Num2;

		if (num < 10 && num >0) {
			m_Num2 = m_Num2 - num;
		}
		else {
			remainder = (int)num % 10;
			m_Num2 = (m_Num2 - remainder) / 10;
		}
	}		
}

void Calculator::ClearNum() {
	if (m_Method == FirstNumber) {
		m_Num1 = 0.0;
	}
	else if (m_Method == SecondNumber) {
		m_Num2 = 0.0;
	}
}

void Calculator::ClearAll() {
	m_ResultNum = 0.0;
	m_Num1 = 0.0;
	m_Num2 = 0.0;

	m_Method = None;
	m_State = FirstNumber;
}

double Calculator::GetResultNum() {
	return m_ResultNum;
}

double Calculator::GetNum1() {
	return m_Num1;
}

double Calculator::GetNum2() {
	return m_Num2;
}

void Calculator::SetUpdate(bool _update) {
	m_Update = _update;
}

bool Calculator::GetUpdate() {
	return m_Update;
}

CalculatorState Calculator::GetCalculatorState() {
	return m_State;
}

MathMethod Calculator::GetMathMethod() {
	return m_Method;
}
