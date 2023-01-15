#pragma once

namespace XO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;

	private:
		String^ pers = "X";
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(308, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(160, 138);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 52);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(308, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 52);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(308, 263);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 52);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(160, 263);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 52);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(22, 263);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 52);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(22, 138);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 52);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(88, 350);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 49);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ходит 1 игрок";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 435);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (pers == "X")
		{
			if (!Check_Click())
			{
				if (button->Text == "")
				{
					this->label1->Text = "Ходит 2 игрок";
					button->Text = "X";
					pers = "O";
				}
			}
			else
			{
				this->label1->Text = "Победил 1 игрок";
			}
		}
		else
		{
			if (!Check_Click())
			{
				if (button->Text == "")
				{
					this->label1->Text = "Ходит 1 игрок";
					button->Text = "O";
					pers = "X";
				}
			}
			else
			{
				this->label1->Text = "Победил 2 игрок";
			}
		}

	}
	private: System::Boolean Check_Click() {
		if (this->button1->Text == this->button2->Text && this->button3->Text == this->button2->Text &&( this->button1->Text == "X" || this->button1->Text == "O")) {
			return true;
		}
		if (this->button4->Text == this->button5->Text && this->button6->Text == this->button5->Text && (this->button4->Text == "X" || this->button4->Text == "O")) {
			return true;
		}
		if (this->button7->Text == this->button8->Text && this->button9->Text == this->button8->Text && (this->button7->Text == "X" || this->button7->Text == "O")) {
			return true;
		}
		if (this->button1->Text == this->button4->Text && this->button7->Text == this->button4->Text && (this->button1->Text == "X" || this->button1->Text == "O")) {
			return true;
		}
		if (this->button2->Text == this->button5->Text && this->button8->Text == this->button5->Text && (this->button2->Text == "X" || this->button2->Text == "O")) {
			return true;
		}
		if (this->button3->Text == this->button6->Text && this->button9->Text == this->button6->Text && (this->button3->Text == "X" || this->button3->Text == "O")) {
			return true;
		}
		if (this->button1->Text == this->button5->Text && this->button9->Text == this->button5->Text && (this->button1->Text == "X" || this->button1->Text == "O")) {
			return true;
		}
		if (this->button3->Text == this->button5->Text && this->button7->Text == this->button5->Text && (this->button3->Text == "X" || this->button3->Text == "O")) {
			return true;
		}
		return false;
	}
	};
}