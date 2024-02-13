#pragma once

#include <string>
#include <conio.h>
#include <Windows.h>
#include <clocale>
#include <ctime>

namespace RandomGeneratorKey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainWind
	/// </summary>
	public ref class MainWind : public System::Windows::Forms::Form
	{
	public:
		MainWind(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainWind()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox_result;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_result = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"«генерувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWind::button1_Click);
			// 
			// textBox_result
			// 
			this->textBox_result->Location = System::Drawing::Point(49, 99);
			this->textBox_result->Multiline = true;
			this->textBox_result->Name = L"textBox_result";
			this->textBox_result->Size = System::Drawing::Size(300, 20);
			this->textBox_result->TabIndex = 2;
			this->textBox_result->Text = L"¬аш ключ";
			this->textBox_result->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MainWind
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 261);
			this->Controls->Add(this->textBox_result);
			this->Controls->Add(this->button1);
			this->Name = L"MainWind";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RandomGeneratorKey";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		const int a = 36;
		const int b = 36;
		srand(time(NULL));
		int key[a]{};
		for (int i = 0; i < a; i++) {
			key[i] = rand() % 15;
		}

		this->textBox_result->Text = "";

		for (int i = 0; i < a; i++) {
			if (key[i] == 0) {
				this->textBox_result->Text = this->textBox_result->Text + "a";
			}
			if (key[i] == 1) {
				this->textBox_result->Text = this->textBox_result->Text + "9";
			}
			if (key[i] == 2) {
				this->textBox_result->Text = this->textBox_result->Text + "0";
			}
			if (key[i] == 3) {
				this->textBox_result->Text = this->textBox_result->Text + "3";
			}
			if (key[i] == 4) {
				this->textBox_result->Text = this->textBox_result->Text + "8";
			}
			if (key[i] == 5) {
				this->textBox_result->Text = this->textBox_result->Text + "6";
			}
			if (key[i] == 6) {
				this->textBox_result->Text = this->textBox_result->Text + "-";
			}
			if (key[i] == 7) {
				this->textBox_result->Text = this->textBox_result->Text + "b";
			}
			if (key[i] == 8) {
				this->textBox_result->Text = this->textBox_result->Text + "c";
			}
			if (key[i] == 9) {
				this->textBox_result->Text = this->textBox_result->Text + "d";
			}
			if (key[i] == 10) {
				this->textBox_result->Text = this->textBox_result->Text + "e";
			}
			if (key[i] == 11) {
				this->textBox_result->Text = this->textBox_result->Text + "f";
			}
			if (key[i] == 12) {
				this->textBox_result->Text = this->textBox_result->Text + "1";
			}
			if (key[i] == 13) {
				this->textBox_result->Text = this->textBox_result->Text + "2";
			}
			if (key[i] == 14) {
				this->textBox_result->Text = this->textBox_result->Text + "-";
			}
			if (key[i] == 15) {
				this->textBox_result->Text = this->textBox_result->Text + "4";
			}
		}
	}
	};
}