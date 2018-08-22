//
//#include <iostream>
//#include <Windows.h>
//#include <stdlib.h>
//#include <conio.h>
//
//#include "Calculator.h"
//
//void main() {
//	Calculator m_calculator;
//	CalculatorState State;
//
//	//m_calculator.StartCalculator();
//	
//	while (1) {
//		State = m_calculator.GetCalculatorState();
//
//		if (m_calculator.GetUpdate()) {
//			system("cls");
//			std::cout << "--------------Read Me--------------" << std::endl;
//			std::cout << "ESC: All Clear" << std::endl;
//			std::cout << "BackSpace: Remove Last Number" << std::endl;
//			std::cout << "Delete: Clear Number" << std::endl;
//			std::cout << "NumberPad: Number 0-9, +, -, *, /" << std::endl;
//			std::cout << "-----------------------------------" << std::endl;
//
//			if (m_calculator.GetCalculatorState() != Done) {
//				std::cout << m_calculator.GetNum1() << std::endl;
//			}
//			else {
//				std::cout << std::endl;
//			}
//			
//
//			if (m_calculator.GetCalculatorState() != SecondNumber) {
//				std::cout << std::endl;
//			}
//			else {
//				char method;
//				switch (m_calculator.GetMathMethod()) {
//				case Addition:
//					method = '+';
//					break;
//				case Subtraction:
//					method = '-';
//					break;
//				case Multiplication:
//					method = '*';
//					break;
//				case Division:
//					method = '/';
//					break;
//				}
//				std::cout << m_calculator.GetNum2() << "(" << method << std::endl;
//			}
//
//			std::cout << "---------" << std::endl;
//
//			if (m_calculator.GetCalculatorState() == Done) {
//				std::cout << m_calculator.GetResultNum() << std::endl;
//			}
//
//			m_calculator.SetUpdate(false);
//		}		
//	}
//}
//
