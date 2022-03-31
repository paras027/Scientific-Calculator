#pragma once
#include<math.h>
namespace ScientificCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSec;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txt1;
	protected:
	protected:
	private: System::Windows::Forms::Button^ btnCosec;
	private: System::Windows::Forms::Button^ btnMod;
	private: System::Windows::Forms::Button^ btnPow;
	private: System::Windows::Forms::Button^ btnSqrt;
	private: System::Windows::Forms::Button^ btnTan;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnSin;
	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnCos;
	private: System::Windows::Forms::Button^ btnMul;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnCot;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btn00;
	private: System::Windows::Forms::Button^ btnDeci;
	private: System::Windows::Forms::Button^ btnBspace;
	private: System::Windows::Forms::Button^ btnPm;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnEq;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnSec = (gcnew System::Windows::Forms::Button());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->btnCosec = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnCot = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn00 = (gcnew System::Windows::Forms::Button());
			this->btnDeci = (gcnew System::Windows::Forms::Button());
			this->btnBspace = (gcnew System::Windows::Forms::Button());
			this->btnPm = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnEq = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSec
			// 
			this->btnSec->BackColor = System::Drawing::Color::Black;
			this->btnSec->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSec->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSec->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSec->Location = System::Drawing::Point(12, 110);
			this->btnSec->Name = L"btnSec";
			this->btnSec->Size = System::Drawing::Size(75, 75);
			this->btnSec->TabIndex = 0;
			this->btnSec->Text = L"sec";
			this->btnSec->UseVisualStyleBackColor = false;
			this->btnSec->Click += gcnew System::EventHandler(this, &MyForm::btnSec_Click);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(12, 12);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(480, 22);
			this->txt2->TabIndex = 1;
			this->txt2->TextChanged += gcnew System::EventHandler(this, &MyForm::txt2_TextChanged);
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(12, 40);
			this->txt1->Multiline = true;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(480, 64);
			this->txt1->TabIndex = 2;
			this->txt1->Text = L"0";
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &MyForm::txt1_TextChanged);
			// 
			// btnCosec
			// 
			this->btnCosec->BackColor = System::Drawing::Color::Black;
			this->btnCosec->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCosec->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCosec->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCosec->Location = System::Drawing::Point(93, 434);
			this->btnCosec->Name = L"btnCosec";
			this->btnCosec->Size = System::Drawing::Size(75, 75);
			this->btnCosec->TabIndex = 0;
			this->btnCosec->Text = L"cosec";
			this->btnCosec->UseVisualStyleBackColor = false;
			this->btnCosec->Click += gcnew System::EventHandler(this, &MyForm::btnCosec_Click);
			// 
			// btnMod
			// 
			this->btnMod->BackColor = System::Drawing::Color::Black;
			this->btnMod->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMod->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMod->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMod->Location = System::Drawing::Point(174, 110);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(75, 75);
			this->btnMod->TabIndex = 0;
			this->btnMod->Text = L"%";
			this->btnMod->UseVisualStyleBackColor = false;
			this->btnMod->Click += gcnew System::EventHandler(this, &MyForm::btnMod_Click);
			// 
			// btnPow
			// 
			this->btnPow->BackColor = System::Drawing::Color::Black;
			this->btnPow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPow->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPow->Location = System::Drawing::Point(255, 110);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(75, 75);
			this->btnPow->TabIndex = 0;
			this->btnPow->Text = L"^";
			this->btnPow->UseVisualStyleBackColor = false;
			this->btnPow->Click += gcnew System::EventHandler(this, &MyForm::btnPow_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->BackColor = System::Drawing::Color::Black;
			this->btnSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSqrt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSqrt->Location = System::Drawing::Point(336, 110);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(75, 75);
			this->btnSqrt->TabIndex = 0;
			this->btnSqrt->Text = L"√x";
			this->btnSqrt->UseVisualStyleBackColor = false;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &MyForm::btnSqrt_Click);
			// 
			// btnTan
			// 
			this->btnTan->BackColor = System::Drawing::Color::Black;
			this->btnTan->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTan->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTan->Location = System::Drawing::Point(12, 272);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(75, 75);
			this->btnTan->TabIndex = 0;
			this->btnTan->Text = L"tan";
			this->btnTan->UseVisualStyleBackColor = false;
			this->btnTan->Click += gcnew System::EventHandler(this, &MyForm::btnTan_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Black;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAdd->Location = System::Drawing::Point(93, 110);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 75);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Black;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn7->Location = System::Drawing::Point(174, 191);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 75);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Black;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn8->Location = System::Drawing::Point(255, 191);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 75);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Black;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn9->Location = System::Drawing::Point(336, 191);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 75);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btnSin
			// 
			this->btnSin->BackColor = System::Drawing::Color::Black;
			this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSin->Location = System::Drawing::Point(12, 353);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(75, 75);
			this->btnSin->TabIndex = 0;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = false;
			this->btnSin->Click += gcnew System::EventHandler(this, &MyForm::btnSin_Click);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::Color::Black;
			this->btnSub->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSub->Location = System::Drawing::Point(93, 191);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(75, 75);
			this->btnSub->TabIndex = 0;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::btnSub_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Black;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn4->Location = System::Drawing::Point(174, 272);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 75);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Black;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn5->Location = System::Drawing::Point(255, 272);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 75);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Black;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn6->Location = System::Drawing::Point(336, 272);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 75);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btnCos
			// 
			this->btnCos->BackColor = System::Drawing::Color::Black;
			this->btnCos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCos->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCos->Location = System::Drawing::Point(12, 434);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(75, 75);
			this->btnCos->TabIndex = 0;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = false;
			this->btnCos->Click += gcnew System::EventHandler(this, &MyForm::btnCos_Click);
			// 
			// btnMul
			// 
			this->btnMul->BackColor = System::Drawing::Color::Black;
			this->btnMul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMul->Location = System::Drawing::Point(93, 272);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(75, 75);
			this->btnMul->TabIndex = 0;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = false;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm::btnMul_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Black;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn1->Location = System::Drawing::Point(174, 353);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 75);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Black;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn2->Location = System::Drawing::Point(255, 353);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 75);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Black;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn3->Location = System::Drawing::Point(336, 353);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 75);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btnCot
			// 
			this->btnCot->BackColor = System::Drawing::Color::Black;
			this->btnCot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCot->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCot->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCot->Location = System::Drawing::Point(12, 191);
			this->btnCot->Name = L"btnCot";
			this->btnCot->Size = System::Drawing::Size(75, 75);
			this->btnCot->TabIndex = 0;
			this->btnCot->Text = L"cot";
			this->btnCot->UseVisualStyleBackColor = false;
			this->btnCot->Click += gcnew System::EventHandler(this, &MyForm::btnCot_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::Black;
			this->btnDiv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDiv->Location = System::Drawing::Point(93, 353);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(75, 75);
			this->btnDiv->TabIndex = 0;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::btnDiv_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Black;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn0->Location = System::Drawing::Point(174, 434);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 75);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btn00
			// 
			this->btn00->BackColor = System::Drawing::Color::Black;
			this->btn00->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn00->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn00->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn00->Location = System::Drawing::Point(255, 434);
			this->btn00->Name = L"btn00";
			this->btn00->Size = System::Drawing::Size(75, 75);
			this->btn00->TabIndex = 0;
			this->btn00->Text = L"00";
			this->btn00->UseVisualStyleBackColor = false;
			this->btn00->Click += gcnew System::EventHandler(this, &MyForm::btn00_Click);
			// 
			// btnDeci
			// 
			this->btnDeci->BackColor = System::Drawing::Color::Black;
			this->btnDeci->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDeci->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeci->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDeci->Location = System::Drawing::Point(336, 434);
			this->btnDeci->Name = L"btnDeci";
			this->btnDeci->Size = System::Drawing::Size(75, 75);
			this->btnDeci->TabIndex = 0;
			this->btnDeci->Text = L".";
			this->btnDeci->UseVisualStyleBackColor = false;
			this->btnDeci->Click += gcnew System::EventHandler(this, &MyForm::btnDeci_Click);
			// 
			// btnBspace
			// 
			this->btnBspace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnBspace->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBspace->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBspace->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBspace.Image")));
			this->btnBspace->Location = System::Drawing::Point(417, 110);
			this->btnBspace->Name = L"btnBspace";
			this->btnBspace->Size = System::Drawing::Size(75, 75);
			this->btnBspace->TabIndex = 0;
			this->btnBspace->UseVisualStyleBackColor = false;
			this->btnBspace->Click += gcnew System::EventHandler(this, &MyForm::btnBspace_Click);
			// 
			// btnPm
			// 
			this->btnPm->BackColor = System::Drawing::Color::Black;
			this->btnPm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPm->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPm->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPm->Location = System::Drawing::Point(417, 272);
			this->btnPm->Name = L"btnPm";
			this->btnPm->Size = System::Drawing::Size(75, 75);
			this->btnPm->TabIndex = 0;
			this->btnPm->Text = L"+/-";
			this->btnPm->UseVisualStyleBackColor = false;
			this->btnPm->Click += gcnew System::EventHandler(this, &MyForm::btnPm_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::Red;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnC->Location = System::Drawing::Point(417, 191);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(75, 75);
			this->btnC->TabIndex = 0;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnEq
			// 
			this->btnEq->BackColor = System::Drawing::Color::Black;
			this->btnEq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEq->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEq->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEq->Location = System::Drawing::Point(417, 353);
			this->btnEq->Name = L"btnEq";
			this->btnEq->Size = System::Drawing::Size(75, 156);
			this->btnEq->TabIndex = 0;
			this->btnEq->Text = L"=";
			this->btnEq->UseVisualStyleBackColor = false;
			this->btnEq->Click += gcnew System::EventHandler(this, &MyForm::btnEq_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(502, 523);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->btnEq);
			this->Controls->Add(this->btnDeci);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnPm);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnBspace);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btn00);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnCot);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnCosec);
			this->Controls->Add(this->btnSec);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Scientific Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double result, first, second, PI= 3.142;
		int third;
		/*TEXT BOXES*/
private: System::Void txt1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   /*NUMBER BUTTONS*/
private: System::Void btn1_click(System::Object^ sender, System::EventArgs^ e) {
	if(txt1->Text == "0") {
		txt1->Text = btn1->Text;
	}
	else {
	txt1->Text = txt1->Text + btn1->Text;
	}
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn2->Text;
	}
	else {
		txt1->Text = txt1->Text + btn2->Text;
	}
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn3->Text;
	}
	else {
		txt1->Text = txt1->Text + btn3->Text;
	}
}

private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn4->Text;
	}
	else {
		txt1->Text = txt1->Text + btn4->Text;
	}
}

private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn5->Text;
	}
	else {
		txt1->Text = txt1->Text + btn5->Text;
	}
}

private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn6->Text;
	}
	else {
		txt1->Text = txt1->Text + btn6->Text;
	}
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn7->Text;
	}
	else {
		txt1->Text = txt1->Text + btn7->Text;
	}
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn8->Text;
	}
	else {
		txt1->Text = txt1->Text + btn8->Text;
	}
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn9->Text;
	}
	else {
		txt1->Text = txt1->Text + btn9->Text;
	}
}

private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn0->Text;
	}
	else {
		txt1->Text = txt1->Text + btn0->Text;
	}
}

private: System::Void btn00_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "0") {
		txt1->Text = btn00->Text;
	}
	else {
		txt1->Text = txt1->Text + btn00->Text;
	}
}
	   /*ARITHMETIC OPERATION BUTTONS*/

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt1->Text->Contains("+")) {
		txt2->Text = txt1->Text + btnAdd->Text;
		txt1->Text = "0";
	}
}
private: System::Void btnSub_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt1->Text->Contains("-")) {
		txt2->Text = txt1->Text + btnSub->Text;
		txt1->Text = "0";
	}
}
private: System::Void btnMul_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt1->Text->Contains("*")) {
		txt2->Text = txt1->Text + btnMul->Text;
		txt1->Text = "0";
	}
}
private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt1->Text->Contains("/")) {
		txt2->Text = txt1->Text + btnDiv->Text;
		txt1->Text = "0";
	}
}
private: System::Void btnPow_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt1->Text->Contains("^")) {
		txt2->Text = txt1->Text + btnPow->Text;
		txt1->Text = "0";
	}
}
private: System::Void btnMod_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt1->Text->Contains("%")) {
		txt2->Text = txt1->Text + btnMod->Text;
		txt1->Text = "0";
	}
}
private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt1->Text->Contains("√(" + first + ")"))
	{
		txt2->Text = "√(" + first + ")";
		txt1->Text = "0";
	}
}
	   /*TRIGONOMETRIC OPERATIONS BUTTONS*/

private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
	third = System::Convert::ToInt64(txt1->Text);
	if (!txt2->Text->Contains("sin"))
	{
		txt2->Text = "sin(" + third + ")";
	}
	
}
private: System::Void btnCos_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt2->Text->Contains("cos"))
	{
		txt2->Text = "cos(" + first + ")";
	}
}
private: System::Void btnTan_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt2->Text->Contains("tan"))
	{
		txt2->Text = "tan(" + first + ")";
	}
}
private: System::Void btnCot_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt2->Text->Contains("cot"))
	{
		txt2->Text = "cot(" + first + ")";
	}
}
private: System::Void btnSec_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt2->Text->Contains("sec"))
	{
		txt2->Text = "sec(" + first + ")";
	}
}
private: System::Void btnCosec_Click(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txt1->Text);
	if (!txt2->Text->Contains("cosec"))
	{
		txt2->Text = "cosec(" + first + ")";
	}
}
	   /*EDITING BUTTONS*/
private: System::Void btnBspace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text->Length > 0)
	{
		txt1->Text = txt1->Text->Remove(txt1->Text->Length - 1, 1);
	}
	if (txt1->Text == "")
	{
		txt1->Text = "0";
	}

}

private: System::Void btnPm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text->Contains("-"))
	{
		txt1->Text = txt1->Text->Remove(0, 1);
	}
	else
	{
		txt1->Text = "-" + txt1->Text;
	}
}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	txt1->Text = "0";
	txt2->Text = "";
}
private: System::Void btnDeci_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txt1->Text->Contains("."))
	{
		txt1->Text = txt1->Text + ".";
	}
}
	   /*EQUAL BUTTON COMMANDS*/
private: System::Void btnEq_Click(System::Object^ sender, System::EventArgs^ e) {
	if(txt2->Text->Contains("√(" + first + ")"))
	{
		result = sqrt(first);
		txt1->Text = System::Convert::ToString(result);
		txt2->Text = "";
	}
	second = Double::Parse(txt1->Text);
	txt2->Text = txt2->Text + second;
	if (txt2->Text->Contains("+"))
	{
		result = second + first;
		txt1->Text = System::Convert::ToString(result);
		second = result;
		first = second;
	}
	else if (txt2->Text->Contains("-"))
	{
		result = first - second;
		txt1->Text = System::Convert::ToString(result);
		second = result;
		first = second;
	}
	else if (txt2->Text->Contains("*"))
	{
		result = second * first;
		txt1->Text = System::Convert::ToString(result);
		second = result;
		first = second;
	}
	else if (txt2->Text->Contains("/"))
	{
		result = first / second;
		txt1->Text = System::Convert::ToString(result);
		second = result;
		first = second;
	}
	else if (txt2->Text->Contains(first + "%"))
	{
		txt2->Text = first + "%" + second;
		result = (int)first % (int)second;
		txt1->Text = System::Convert::ToString(result);
	}
	else if (txt2->Text->Contains("^"))
	{
		result = pow(first, second);
		txt1->Text = System::Convert::ToString(result);
	}
	else if (txt2->Text->Contains("sin(" + third + ")"))
	{
		result = sin(third);
		txt1->Text = System::Convert::ToString(result);
		txt2->Text = "";
	}
	else if (txt2->Text->Contains("cos(" + first + ")"))
	{
		result = cos(first);
		txt1->Text = System::Convert::ToString(result);
		txt2->Text = "";
	}
	else if (txt2->Text->Contains("tan(" + first + ")"))
	{
		result = tan(first);
		txt1->Text = System::Convert::ToString(result);
		txt2->Text = "";
	}
	else if (txt2->Text->Contains("cot(" + first + ")"))
	{
		result = 1 / tan(first);
		txt1->Text = System::Convert::ToString(result);
		txt2->Text = "";
	}
	else if (txt2->Text->Contains("sec(" + first + ")"))
	{
		result = 1 / cos(first);
		txt1->Text = System::Convert::ToString(result);
		txt2->Text = "";
	}
	else if (txt2->Text->Contains("cosec(" + first + ")"))
	{
		result = 1 / sin(first);
		txt1->Text = System::Convert::ToString(result);
		txt2->Text = "";
	}
}
};
}
