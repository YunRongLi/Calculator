#pragma once

#include "Calculator.h"

namespace UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	Calculator calculator;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  m_label_Result;
	private: System::Windows::Forms::Label^  m_label_Num1;
	protected:


	private: System::Windows::Forms::Button^  m_button_Num7;
	private: System::Windows::Forms::Button^  m_button_Num8;
	private: System::Windows::Forms::Button^  m_button_Num9;
	private: System::Windows::Forms::Button^  m_button_Num4;
	private: System::Windows::Forms::Button^  m_button_Num5;
	private: System::Windows::Forms::Button^  m_button_Num6;
	private: System::Windows::Forms::Button^  m_button_Num1;
	private: System::Windows::Forms::Button^  m_button_Num2;
	private: System::Windows::Forms::Button^  m_button_Num3;
	private: System::Windows::Forms::Button^  m_button_ClearNum;
	private: System::Windows::Forms::Button^  m_button_Clear;
	private: System::Windows::Forms::Button^  m_button_Delete;
	private: System::Windows::Forms::Button^  m_button_Num0;
	private: System::Windows::Forms::Button^  m_button_Division;
	private: System::Windows::Forms::Button^  m_button_Multiplicate;
	private: System::Windows::Forms::Button^  m_button_Subtract;
	private: System::Windows::Forms::Button^  m_button_Add;
	private: System::Windows::Forms::Button^  m_button_Return;


	protected:



	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
		//System::Threading::Thread^ m_ThreadCalculator = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &MyForm::UpdateCalculatorNum));

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->m_label_Result = (gcnew System::Windows::Forms::Label());
			this->m_label_Num1 = (gcnew System::Windows::Forms::Label());
			this->m_button_Num7 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num8 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num9 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num4 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num5 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num6 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num1 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num2 = (gcnew System::Windows::Forms::Button());
			this->m_button_Num3 = (gcnew System::Windows::Forms::Button());
			this->m_button_ClearNum = (gcnew System::Windows::Forms::Button());
			this->m_button_Clear = (gcnew System::Windows::Forms::Button());
			this->m_button_Delete = (gcnew System::Windows::Forms::Button());
			this->m_button_Num0 = (gcnew System::Windows::Forms::Button());
			this->m_button_Division = (gcnew System::Windows::Forms::Button());
			this->m_button_Multiplicate = (gcnew System::Windows::Forms::Button());
			this->m_button_Subtract = (gcnew System::Windows::Forms::Button());
			this->m_button_Add = (gcnew System::Windows::Forms::Button());
			this->m_button_Return = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// m_label_Result
			// 
			this->m_label_Result->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_label_Result->Location = System::Drawing::Point(5, 41);
			this->m_label_Result->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->m_label_Result->Name = L"m_label_Result";
			this->m_label_Result->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->m_label_Result->Size = System::Drawing::Size(249, 50);
			this->m_label_Result->TabIndex = 0;
			this->m_label_Result->Text = L"0";
			// 
			// m_label_Num1
			// 
			this->m_label_Num1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_label_Num1->Location = System::Drawing::Point(128, 9);
			this->m_label_Num1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->m_label_Num1->Name = L"m_label_Num1";
			this->m_label_Num1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->m_label_Num1->Size = System::Drawing::Size(126, 32);
			this->m_label_Num1->TabIndex = 1;
			// 
			// m_button_Num7
			// 
			this->m_button_Num7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num7->Location = System::Drawing::Point(5, 137);
			this->m_button_Num7->Margin = System::Windows::Forms::Padding(1, 7, 6, 7);
			this->m_button_Num7->Name = L"m_button_Num7";
			this->m_button_Num7->Size = System::Drawing::Size(60, 40);
			this->m_button_Num7->TabIndex = 2;
			this->m_button_Num7->Text = L"7";
			this->m_button_Num7->UseVisualStyleBackColor = true;
			// 
			// m_button_Num8
			// 
			this->m_button_Num8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num8->Location = System::Drawing::Point(66, 137);
			this->m_button_Num8->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->m_button_Num8->Name = L"m_button_Num8";
			this->m_button_Num8->Size = System::Drawing::Size(60, 40);
			this->m_button_Num8->TabIndex = 3;
			this->m_button_Num8->Text = L"8";
			this->m_button_Num8->UseVisualStyleBackColor = true;
			// 
			// m_button_Num9
			// 
			this->m_button_Num9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num9->Location = System::Drawing::Point(128, 137);
			this->m_button_Num9->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->m_button_Num9->Name = L"m_button_Num9";
			this->m_button_Num9->Size = System::Drawing::Size(60, 40);
			this->m_button_Num9->TabIndex = 4;
			this->m_button_Num9->Text = L"9";
			this->m_button_Num9->UseVisualStyleBackColor = true;
			// 
			// m_button_Num4
			// 
			this->m_button_Num4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num4->Location = System::Drawing::Point(5, 179);
			this->m_button_Num4->Margin = System::Windows::Forms::Padding(6, 7, 1, 7);
			this->m_button_Num4->Name = L"m_button_Num4";
			this->m_button_Num4->Size = System::Drawing::Size(60, 40);
			this->m_button_Num4->TabIndex = 5;
			this->m_button_Num4->Text = L"4";
			this->m_button_Num4->UseVisualStyleBackColor = true;
			// 
			// m_button_Num5
			// 
			this->m_button_Num5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num5->Location = System::Drawing::Point(66, 179);
			this->m_button_Num5->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->m_button_Num5->Name = L"m_button_Num5";
			this->m_button_Num5->Size = System::Drawing::Size(60, 40);
			this->m_button_Num5->TabIndex = 6;
			this->m_button_Num5->Text = L"5";
			this->m_button_Num5->UseVisualStyleBackColor = true;
			// 
			// m_button_Num6
			// 
			this->m_button_Num6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num6->Location = System::Drawing::Point(128, 179);
			this->m_button_Num6->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->m_button_Num6->Name = L"m_button_Num6";
			this->m_button_Num6->Size = System::Drawing::Size(60, 40);
			this->m_button_Num6->TabIndex = 7;
			this->m_button_Num6->Text = L"6";
			this->m_button_Num6->UseVisualStyleBackColor = true;
			// 
			// m_button_Num1
			// 
			this->m_button_Num1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num1->Location = System::Drawing::Point(5, 222);
			this->m_button_Num1->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->m_button_Num1->Name = L"m_button_Num1";
			this->m_button_Num1->Size = System::Drawing::Size(60, 40);
			this->m_button_Num1->TabIndex = 8;
			this->m_button_Num1->Text = L"1";
			this->m_button_Num1->UseVisualStyleBackColor = true;
			// 
			// m_button_Num2
			// 
			this->m_button_Num2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num2->Location = System::Drawing::Point(66, 222);
			this->m_button_Num2->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->m_button_Num2->Name = L"m_button_Num2";
			this->m_button_Num2->Size = System::Drawing::Size(60, 40);
			this->m_button_Num2->TabIndex = 9;
			this->m_button_Num2->Text = L"2";
			this->m_button_Num2->UseVisualStyleBackColor = true;
			// 
			// m_button_Num3
			// 
			this->m_button_Num3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Num3->Location = System::Drawing::Point(128, 222);
			this->m_button_Num3->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->m_button_Num3->Name = L"m_button_Num3";
			this->m_button_Num3->Size = System::Drawing::Size(60, 40);
			this->m_button_Num3->TabIndex = 10;
			this->m_button_Num3->Text = L"3";
			this->m_button_Num3->UseVisualStyleBackColor = true;
			// 
			// m_button_ClearNum
			// 
			this->m_button_ClearNum->Location = System::Drawing::Point(5, 94);
			this->m_button_ClearNum->Name = L"m_button_ClearNum";
			this->m_button_ClearNum->Size = System::Drawing::Size(60, 40);
			this->m_button_ClearNum->TabIndex = 11;
			this->m_button_ClearNum->Text = L"CE";
			this->m_button_ClearNum->UseVisualStyleBackColor = true;
			// 
			// m_button_Clear
			// 
			this->m_button_Clear->Location = System::Drawing::Point(66, 94);
			this->m_button_Clear->Name = L"m_button_Clear";
			this->m_button_Clear->Size = System::Drawing::Size(60, 40);
			this->m_button_Clear->TabIndex = 12;
			this->m_button_Clear->Text = L"C";
			this->m_button_Clear->UseVisualStyleBackColor = true;
			// 
			// m_button_Delete
			// 
			this->m_button_Delete->Location = System::Drawing::Point(128, 94);
			this->m_button_Delete->Name = L"m_button_Delete";
			this->m_button_Delete->Size = System::Drawing::Size(60, 40);
			this->m_button_Delete->TabIndex = 13;
			this->m_button_Delete->Text = L"DEL";
			this->m_button_Delete->UseVisualStyleBackColor = true;
			// 
			// m_button_Num0
			// 
			this->m_button_Num0->Location = System::Drawing::Point(66, 264);
			this->m_button_Num0->Name = L"m_button_Num0";
			this->m_button_Num0->Size = System::Drawing::Size(60, 40);
			this->m_button_Num0->TabIndex = 14;
			this->m_button_Num0->Text = L"0";
			this->m_button_Num0->UseVisualStyleBackColor = true;
			// 
			// m_button_Division
			// 
			this->m_button_Division->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Division->Location = System::Drawing::Point(194, 94);
			this->m_button_Division->Name = L"m_button_Division";
			this->m_button_Division->Size = System::Drawing::Size(60, 40);
			this->m_button_Division->TabIndex = 15;
			this->m_button_Division->Text = L"÷";
			this->m_button_Division->UseVisualStyleBackColor = true;
			// 
			// m_button_Multiplicate
			// 
			this->m_button_Multiplicate->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Multiplicate->Location = System::Drawing::Point(194, 137);
			this->m_button_Multiplicate->Name = L"m_button_Multiplicate";
			this->m_button_Multiplicate->Size = System::Drawing::Size(60, 40);
			this->m_button_Multiplicate->TabIndex = 16;
			this->m_button_Multiplicate->Text = L"×";
			this->m_button_Multiplicate->UseVisualStyleBackColor = true;
			// 
			// m_button_Subtract
			// 
			this->m_button_Subtract->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Subtract->Location = System::Drawing::Point(194, 179);
			this->m_button_Subtract->Name = L"m_button_Subtract";
			this->m_button_Subtract->Size = System::Drawing::Size(60, 40);
			this->m_button_Subtract->TabIndex = 17;
			this->m_button_Subtract->Text = L"-";
			this->m_button_Subtract->UseVisualStyleBackColor = true;
			// 
			// m_button_Add
			// 
			this->m_button_Add->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Add->Location = System::Drawing::Point(194, 222);
			this->m_button_Add->Name = L"m_button_Add";
			this->m_button_Add->Size = System::Drawing::Size(60, 40);
			this->m_button_Add->TabIndex = 18;
			this->m_button_Add->Text = L"+";
			this->m_button_Add->UseVisualStyleBackColor = true;
			// 
			// m_button_Return
			// 
			this->m_button_Return->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->m_button_Return->Location = System::Drawing::Point(194, 264);
			this->m_button_Return->Name = L"m_button_Return";
			this->m_button_Return->Size = System::Drawing::Size(60, 40);
			this->m_button_Return->TabIndex = 19;
			this->m_button_Return->Text = L"=";
			this->m_button_Return->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(259, 314);
			this->Controls->Add(this->m_button_Return);
			this->Controls->Add(this->m_button_Add);
			this->Controls->Add(this->m_button_Subtract);
			this->Controls->Add(this->m_button_Multiplicate);
			this->Controls->Add(this->m_button_Division);
			this->Controls->Add(this->m_button_Num0);
			this->Controls->Add(this->m_button_Delete);
			this->Controls->Add(this->m_button_Clear);
			this->Controls->Add(this->m_button_ClearNum);
			this->Controls->Add(this->m_button_Num3);
			this->Controls->Add(this->m_button_Num2);
			this->Controls->Add(this->m_button_Num1);
			this->Controls->Add(this->m_button_Num6);
			this->Controls->Add(this->m_button_Num5);
			this->Controls->Add(this->m_button_Num4);
			this->Controls->Add(this->m_button_Num9);
			this->Controls->Add(this->m_button_Num8);
			this->Controls->Add(this->m_button_Num7);
			this->Controls->Add(this->m_label_Num1);
			this->Controls->Add(this->m_label_Result);
			this->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	calculator.KeyPressCB(e->KeyChar);

	if (calculator.GetCalculatorState() == FirstNumber) {
		m_label_Result->Text = String::Concat(calculator.GetNum1());
	}
	else if (calculator.GetCalculatorState() == SecondNumber) {
		String^ method;
		switch (calculator.GetMathMethod())
		{
		case Addition:
			method = "+";
			break;
		case Subtraction:
			method = "-";
			break;
		case Multiplication:
			method = "*";
			break;
		case Division:
			method = "/";
		default:
			break;
		}

		m_label_Num1->Text = String::Concat(method, " ", calculator.GetNum1());
		m_label_Result->Text = String::Concat(calculator.GetNum2());
	}
	else if (calculator.GetCalculatorState() == Done) {
		m_label_Num1->Text = String::Concat("");
		m_label_Result->Text = String::Concat(calculator.GetResultNum());
	}
}
};
}
