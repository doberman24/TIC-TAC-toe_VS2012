#include <cstdlib>
#include <ctime>
#include "MyForm.h"

#pragma once

int count = 0, turn = 0;
char board[9];
int win_bot = 0, win_plr = 0, turns = 0;
int e_win_bot = 0, e_win_plr = 0, e_turns = 0;
int h_win_bot = 0, h_win_plr = 0, h_turns = 0;
bool level = false;
int ran[9];
void rand_bot();

void clrboard() 
{
	for(int i=0; i<9; ++i)
		board[i] = '-';
}

bool win_game(char player)
{
	int wins[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
					  {0, 4, 8}, {2, 4, 6}};
	for(int i=0; i<8; ++i)
	{
		int run = 0;
		for(int j=0; j<3; ++j)
			if(board[wins[i][j]] == player)
				run++;
		if(run == 3)
			return true;
	}
	return false;
}

namespace WindowsFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			rand_bot();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  b9;
	private: System::Windows::Forms::Button^  b4;
	private: System::Windows::Forms::Button^  b5;
	private: System::Windows::Forms::Button^  b6;
	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  b7;
	private: System::Windows::Forms::Button^  b8;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape4;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l3;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l8;
	private: System::Windows::Forms::Label^  l9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  NextP;
	private: System::Windows::Forms::Button^  Restart;
	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  èãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ExitMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñëîæíîñòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñòàòèñòèêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğîñòîéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñëîæíûéToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  Level_box;
	private: System::Windows::Forms::Label^  Level_messege;

			 /// <summary>
		/// Òğåáóåòñÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà - íå èçìåíÿéòå
		/// ñîäåğæèìîå äàííîãî ìåòîäà ïğè ïîìîùè ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->NextP = (gcnew System::Windows::Forms::Label());
			this->Restart = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñëîæíîñòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîñòîéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñëîæíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòàòèñòèêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Level_box = (gcnew System::Windows::Forms::GroupBox());
			this->Level_messege = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->Level_box->SuspendLayout();
			this->SuspendLayout();
			// 
			// b9
			// 
			this->b9->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b9->Location = System::Drawing::Point(235, 45);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(80, 80);
			this->b9->TabIndex = 9;
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &Form1::b9_Click);
			// 
			// b4
			// 
			this->b4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(25, 150);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(80, 80);
			this->b4->TabIndex = 4;
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &Form1::b4_Click);
			// 
			// b5
			// 
			this->b5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(130, 150);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(80, 80);
			this->b5->TabIndex = 5;
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &Form1::b5_Click);
			// 
			// b6
			// 
			this->b6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(235, 150);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(80, 80);
			this->b6->TabIndex = 6;
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &Form1::b6_Click);
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->b1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b1->Location = System::Drawing::Point(25, 255);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(80, 80);
			this->b1->TabIndex = 1;
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &Form1::b1_Click);
			// 
			// b2
			// 
			this->b2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(130, 255);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(80, 80);
			this->b2->TabIndex = 2;
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &Form1::b2_Click);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b3->Location = System::Drawing::Point(235, 255);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(80, 80);
			this->b3->TabIndex = 3;
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &Form1::b3_Click);
			// 
			// b7
			// 
			this->b7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(25, 45);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(80, 80);
			this->b7->TabIndex = 7;
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &Form1::b7_Click);
			// 
			// b8
			// 
			this->b8->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(130, 45);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(80, 80);
			this->b8->TabIndex = 8;
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &Form1::b8_Click);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(4) {this->lineShape4, 
				this->lineShape3, this->lineShape2, this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(548, 372);
			this->shapeContainer1->TabIndex = 10;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape4
			// 
			this->lineShape4->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lineShape4->BorderWidth = 5;
			this->lineShape4->Cursor = System::Windows::Forms::Cursors::Default;
			this->lineShape4->Name = L"lineShape1";
			this->lineShape4->X1 = 15;
			this->lineShape4->X2 = 330;
			this->lineShape4->Y1 = 242;
			this->lineShape4->Y2 = 242;
			// 
			// lineShape3
			// 
			this->lineShape3->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lineShape3->BorderWidth = 5;
			this->lineShape3->Cursor = System::Windows::Forms::Cursors::Default;
			this->lineShape3->Name = L"lineShape1";
			this->lineShape3->X1 = 15;
			this->lineShape3->X2 = 330;
			this->lineShape3->Y1 = 137;
			this->lineShape3->Y2 = 137;
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lineShape2->BorderWidth = 5;
			this->lineShape2->Cursor = System::Windows::Forms::Cursors::Default;
			this->lineShape2->Name = L"lineShape1";
			this->lineShape2->X1 = 222;
			this->lineShape2->X2 = 222;
			this->lineShape2->Y1 = 35;
			this->lineShape2->Y2 = 345;
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lineShape1->BorderWidth = 5;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 117;
			this->lineShape1->X2 = 117;
			this->lineShape1->Y1 = 35;
			this->lineShape1->Y2 = 345;
			// 
			// l7
			// 
			this->l7->AutoSize = true;
			this->l7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->l7->Location = System::Drawing::Point(27, 48);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(0, 84);
			this->l7->TabIndex = 11;
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->l1->Location = System::Drawing::Point(27, 258);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(0, 84);
			this->l1->TabIndex = 12;
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(132, 258);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(0, 84);
			this->l2->TabIndex = 13;
			// 
			// l3
			// 
			this->l3->AutoSize = true;
			this->l3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(237, 258);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(0, 84);
			this->l3->TabIndex = 14;
			// 
			// l4
			// 
			this->l4->AutoSize = true;
			this->l4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->l4->Location = System::Drawing::Point(27, 152);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(0, 84);
			this->l4->TabIndex = 15;
			// 
			// l5
			// 
			this->l5->AutoSize = true;
			this->l5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->l5->Location = System::Drawing::Point(132, 152);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(0, 84);
			this->l5->TabIndex = 16;
			// 
			// l6
			// 
			this->l6->AutoSize = true;
			this->l6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(237, 152);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(0, 84);
			this->l6->TabIndex = 17;
			// 
			// l8
			// 
			this->l8->AutoSize = true;
			this->l8->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->l8->Location = System::Drawing::Point(132, 47);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(0, 84);
			this->l8->TabIndex = 18;
			// 
			// l9
			// 
			this->l9->AutoSize = true;
			this->l9->Font = (gcnew System::Drawing::Font(L"Segoe Script", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->l9->Location = System::Drawing::Point(237, 47);
			this->l9->Name = L"l9";
			this->l9->Size = System::Drawing::Size(0, 84);
			this->l9->TabIndex = 19;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->NextP);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(343, 119);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(180, 90);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Õîä èãğû:";
			// 
			// NextP
			// 
			this->NextP->AutoSize = true;
			this->NextP->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->NextP->Location = System::Drawing::Point(13, 46);
			this->NextP->Name = L"NextP";
			this->NextP->Size = System::Drawing::Size(0, 16);
			this->NextP->TabIndex = 0;
			// 
			// Restart
			// 
			this->Restart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Restart->Location = System::Drawing::Point(374, 233);
			this->Restart->Name = L"Restart";
			this->Restart->Size = System::Drawing::Size(112, 42);
			this->Restart->TabIndex = 22;
			this->Restart->Text = L"Çàíîâî";
			this->Restart->UseVisualStyleBackColor = true;
			this->Restart->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Exit
			// 
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(374, 294);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(112, 42);
			this->Exit->TabIndex = 22;
			this->Exit->Text = L"Âûéòè";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->èãğàToolStripMenuItem, 
				this->ïàğàìåòğûToolStripMenuItem, this->ñïğàâêàToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(548, 24);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->íîâàÿÈãğàToolStripMenuItem, 
				this->ExitMenu});
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->èãğàToolStripMenuItem->Text = L"Èãğà";
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// ExitMenu
			// 
			this->ExitMenu->Name = L"ExitMenu";
			this->ExitMenu->Size = System::Drawing::Size(136, 22);
			this->ExitMenu->Text = L"Âûõîä";
			this->ExitMenu->Click += gcnew System::EventHandler(this, &Form1::âûõîäToolStripMenuItem_Click);
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ñëîæíîñòüToolStripMenuItem, 
				this->ñòàòèñòèêàToolStripMenuItem});
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Ïàğàìåòğû";
			// 
			// ñëîæíîñòüToolStripMenuItem
			// 
			this->ñëîæíîñòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ïğîñòîéToolStripMenuItem, 
				this->ñëîæíûéToolStripMenuItem});
			this->ñëîæíîñòüToolStripMenuItem->Name = L"ñëîæíîñòüToolStripMenuItem";
			this->ñëîæíîñòüToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->ñëîæíîñòüToolStripMenuItem->Text = L"Ñëîæíîñòü";
			this->ñëîæíîñòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñëîæíîñòüToolStripMenuItem_Click);
			// 
			// ïğîñòîéToolStripMenuItem
			// 
			this->ïğîñòîéToolStripMenuItem->Name = L"ïğîñòîéToolStripMenuItem";
			this->ïğîñòîéToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->ïğîñòîéToolStripMenuItem->Text = L"Ëåãêèé";
			this->ïğîñòîéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ïğîñòîéToolStripMenuItem_Click);
			// 
			// ñëîæíûéToolStripMenuItem
			// 
			this->ñëîæíûéToolStripMenuItem->Name = L"ñëîæíûéToolStripMenuItem";
			this->ñëîæíûéToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->ñëîæíûéToolStripMenuItem->Text = L"Ñëîæíûé";
			this->ñëîæíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñëîæíûéToolStripMenuItem_Click);
			// 
			// ñòàòèñòèêàToolStripMenuItem
			// 
			this->ñòàòèñòèêàToolStripMenuItem->Name = L"ñòàòèñòèêàToolStripMenuItem";
			this->ñòàòèñòèêàToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->ñòàòèñòèêàToolStripMenuItem->Text = L"Ñòàòèñòèêà";
			this->ñòàòèñòèêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñòàòèñòèêàToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->îÏğîãğàììåToolStripMenuItem});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// Level_box
			// 
			this->Level_box->Controls->Add(this->Level_messege);
			this->Level_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Level_box->Location = System::Drawing::Point(343, 48);
			this->Level_box->Name = L"Level_box";
			this->Level_box->Size = System::Drawing::Size(180, 46);
			this->Level_box->TabIndex = 24;
			this->Level_box->TabStop = false;
			this->Level_box->Text = L"Óğîâåíü ñëîæíîñòè:";
			// 
			// Level_messege
			// 
			this->Level_messege->AutoSize = true;
			this->Level_messege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Level_messege->Location = System::Drawing::Point(13, 21);
			this->Level_messege->Name = L"Level_messege";
			this->Level_messege->Size = System::Drawing::Size(47, 15);
			this->Level_messege->TabIndex = 24;
			this->Level_messege->Text = L"Ëåãêèé";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 372);
			this->Controls->Add(this->Level_box);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Restart);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->l9);
			this->Controls->Add(this->l8);
			this->Controls->Add(this->l6);
			this->Controls->Add(this->l5);
			this->Controls->Add(this->l4);
			this->Controls->Add(this->l3);
			this->Controls->Add(this->l2);
			this->Controls->Add(this->l1);
			this->Controls->Add(this->l7);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->shapeContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Êğåñòèêè-Íîëèêè";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Level_box->ResumeLayout(false);
			this->Level_box->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

void vis()
{
	b1->Visible = false;
	b2->Visible = false;
	b3->Visible = false;
	b4->Visible = false;
	b5->Visible = false;
	b6->Visible = false;
	b7->Visible = false;
	b8->Visible = false;
	b9->Visible = false;
}

void rand_bot()
{
	bool rez = false;
	srand(time(NULL));
	for(int i=0; i<9; ++i)
	{
		do
		{
			ran[i] = rand()%9;
			for(int j=0; j<i; ++j)
				if(ran[i] == ran[j])
				{
					rez = true;
					break;
				}
				else
					rez = false;
		}
		while(rez);
	}
}

int bot_move_hard()
{
	if(board[4] == '-')
		return 5;
	for(int i=0; i<9; ++i)
		if(board[i] == '-')
		{
			board[i] = 'O';
			if(win_game('O'))
				return i+1;
			else
				board[i] = '-';

			board[i] = 'X';
			if(win_game('X'))
				return i+1;
			else 
				board[i] = '-';
		}
		for(int i=0; i<9; ++i)
			if(board[i] == '-')
				return i+1;
}

int bot_move_easy() {
	bool rez = false;
	int i;

	do {
		for(int j=0; j<9; ++j) {
			i = ran[j];
			if(board[i] != '-')
				rez = true;
			else {
			rez = false;
			break;
			}
		}
	} while(rez);
	return i+1;
}

void form_bot(int bot_set)
{
	switch (bot_set)
	{
	case 1:
		b1->Visible = false;
		if(turn%2 == 1)
		{
			l1->ForeColor = System::Drawing::Color::Blue;
			l1->Text = "X";
		}
		else
		{
			l1->ForeColor = System::Drawing::Color::Red;
			l1->Text = "O";
		}
		count++;
		break;
	case 2:
		b2->Visible = false;
		if(turn%2 == 1)
		{
			l2->ForeColor = System::Drawing::Color::Blue;
			l2->Text = "X";
		}
		else
		{
			l2->ForeColor = System::Drawing::Color::Red;
			l2->Text = "O";
		}
		count++;
		break;
	case 3:
		b3->Visible = false;
		if(turn%2 == 1)
		{
			l3->ForeColor = System::Drawing::Color::Blue;
			l3->Text = "X";
		}
		else
		{
			l3->ForeColor = System::Drawing::Color::Red;
			l3->Text = "O";
		}
		count++;
		break;
	case 4:
		b4->Visible = false;
		if(turn%2 == 1)
		{
			l4->ForeColor = System::Drawing::Color::Blue;
			l4->Text = "X";
		}
		else
		{
			l4->ForeColor = System::Drawing::Color::Red;
			l4->Text = "O";
		}
		count++;
		break;
	case 5:
		b5->Visible = false;
		if(turn%2 == 1)
		{
			l5->ForeColor = System::Drawing::Color::Blue;
			l5->Text = "X";
		}
		else
		{
			l5->ForeColor = System::Drawing::Color::Red;
			l5->Text = "O";
		}
		count++;
		break;
	case 6:
		b6->Visible = false;
		if(turn%2 == 1)
		{
			l6->ForeColor = System::Drawing::Color::Blue;
			l6->Text = "X";
		}
		else
		{
			l6->ForeColor = System::Drawing::Color::Red;
			l6->Text = "O";
		}
		count++;
		break;
	case 7:
		b7->Visible = false;
		if(turn%2 == 1)
		{
			l7->ForeColor = System::Drawing::Color::Blue;
			l7->Text = "X";
		}
		else
		{
			l7->ForeColor = System::Drawing::Color::Red;
			l7->Text = "O";
		}
		count++;
		break;
	case 8:
		b8->Visible = false;
		if(turn%2 == 1)
		{
			l8->ForeColor = System::Drawing::Color::Blue;
			l8->Text = "X";
		}
		else
		{
			l8->ForeColor = System::Drawing::Color::Red;
			l8->Text = "O";
		}
		count++;
		break;
	case 9:
		b9->Visible = false;
		if(turn%2 == 1)
		{
			l9->ForeColor = System::Drawing::Color::Blue;
			l9->Text = "X";
		}
		else
		{
			l9->ForeColor = System::Drawing::Color::Red;
			l9->Text = "O";
		}
		count++;
		break;
	}
}

void start_game()
{
	rand_bot();
	if(level)
		Level_messege->Text = "Ñëîæíûé";
	else
		Level_messege->Text = "Ëåãêèé";
	turn++;
	clrboard();
	count = 0; b1->Visible = true; l1->Text = "";
	b2->Visible = true; l2->Text = ""; b3->Visible = true; l3->Text = "";
	b4->Visible = true; l4->Text = ""; b5->Visible = true; l5->Text = "";
	b6->Visible = true; l6->Text = ""; b7->Visible = true; l7->Text = "";
	b8->Visible = true; l8->Text = ""; b9->Visible = true; l9->Text = "";
	if(turn%2 == 1)
	{
		int bot;
		if(level)
			bot = bot_move_hard();
		else
			bot = bot_move_easy();
		board[bot-1] = 'X';
		form_bot(bot);
		NextP->Text = "Ñåé÷àñ õîäèò Èãğîê 1";
		if(win_game('X'))
		{
			NextP->Text = "Êîìïüşòåğ âûéãğàë";
			if(level)
				h_win_bot++;
			else
				e_win_bot++;
			win_bot++;
			vis();
		}
	}
}

void move_game_player()
{
	int bot = 0;
	NextP->Text = "Ñåé÷àñ õîäèò Êîìïüşòåğ";
	if(win_game('O'))
	{
		NextP->Text = "Èãğîê 1 âûéãğàë";
		if(level)
			h_win_plr++;
		else
			e_win_plr++;
		win_plr++;
		vis();
	}
	else
	{
		if(level)
			bot = bot_move_hard();
		else
			bot = bot_move_easy();
		board[bot-1] = 'X';
		form_bot(bot);
		NextP->Text = "Ñåé÷àñ õîäèò Èãğîê 1";
		if(win_game('X'))
		{
			NextP->Text = "Êîìïüşòåğ âûéãğàë";
			win_bot++;
			if(level)
				h_win_bot++;
			else
				e_win_bot++;
			vis();
		}
		count++;
		if(count == 9 && !win_game('O') && !win_game('X')){
			NextP->Text = "Íè÷üÿ";
			if(level)
				h_turns++;
			else
				e_turns++;
			turns++;
		}
	}
}

void move_game_bot_hard()
{
	int bot = 0;
	NextP->Text = "Ñåé÷àñ õîäèò Êîìïüşòåğ";
	
	if(win_game('X'))
	{
		NextP->Text = "Èãğîê 1 âûéãğàë";
		if(level)
			h_win_plr++;
		else
			e_win_plr++;
		win_plr++;
		vis();
	}
	count++;
	if(count == 9 && !win_game('O') && !win_game('X')) {
	NextP->Text = "Íè÷üÿ";
	if(level)
		h_turns++;
	else
		e_turns++;
	turns++;

	}

	else if(!win_game('X'))
	{
		if(level)
			bot = bot_move_hard();
		else
			bot = bot_move_easy();
		board[bot-1] = 'O';
		form_bot(bot);
		NextP->Text = "Ñåé÷àñ õîäèò Èãğîê 1";
	if(win_game('O'))
		{
			NextP->Text = "Êîìïüşòåğ âûéãğàë";
			if(level)
				h_win_bot++;
			else
				e_win_bot++;
			win_bot++;
			vis();
		}
	}
}

#pragma endregion
private: System::Void b1_Click(System::Object^  sender, System::EventArgs^  e) {
			 b1->Visible = false;
			 if(turn%2 == 1)
			 {
				 l1->ForeColor = System::Drawing::Color::Red;
				 l1->Text = "O";
				 board[0] = 'O';
				 move_game_player();
			}
			 else
			 {
				l1->ForeColor = System::Drawing::Color::Blue;
				l1->Text = "X";
				board[0] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b2_Click(System::Object^  sender, System::EventArgs^  e) {
			 b2->Visible = false;
			 if(turn%2 == 1)
			 {
				 l2->ForeColor = System::Drawing::Color::Red;
				 l2->Text = "O";
				 board[1] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l2->ForeColor = System::Drawing::Color::Blue;
				l2->Text = "X";
				board[1] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b4_Click(System::Object^  sender, System::EventArgs^  e) {
			 b4->Visible = false;
			 if(turn%2 == 1)
			 {
				 l4->ForeColor = System::Drawing::Color::Red;
				 l4->Text = "O";
				 board[3] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l4->ForeColor = System::Drawing::Color::Blue;
				l4->Text = "X";
				board[3] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b5_Click(System::Object^  sender, System::EventArgs^  e) {
			 b5->Visible = false;
			 if(turn%2 == 1)
			 {
				 l5->ForeColor = System::Drawing::Color::Red;
				 l5->Text = "O";
				 board[4] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l5->ForeColor = System::Drawing::Color::Blue;
				l5->Text = "X";
				board[4] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b6_Click(System::Object^  sender, System::EventArgs^  e) {
			 b6->Visible = false;
			 if(turn%2 == 1)
			 {
				 l6->ForeColor = System::Drawing::Color::Red;
				 l6->Text = "O";
				 board[5] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l6->ForeColor = System::Drawing::Color::Blue;
				l6->Text = "X";
				board[5] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b7_Click(System::Object^  sender, System::EventArgs^  e) {
			 b7->Visible = false;
			 if(turn%2 == 1)
			 {
				 l7->ForeColor = System::Drawing::Color::Red;
				 l7->Text = "O";
				 board[6] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l7->ForeColor = System::Drawing::Color::Blue;
				l7->Text = "X";
				board[6] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b8_Click(System::Object^  sender, System::EventArgs^  e) {
			 b8->Visible = false;
			 if(turn%2 == 1)
			 {
				 l8->ForeColor = System::Drawing::Color::Red;
				 l8->Text = "O";
				 board[7] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l8->ForeColor = System::Drawing::Color::Blue;
				l8->Text = "X";
				board[7] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b3_Click(System::Object^  sender, System::EventArgs^  e) {
			 b3->Visible = false;
			 if(turn%2 == 1)
			 {
				 l3->ForeColor = System::Drawing::Color::Red;
				 l3->Text = "O";
				 board[2] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l3->ForeColor = System::Drawing::Color::Blue;
				l3->Text = "X";
				board[2] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void b9_Click(System::Object^  sender, System::EventArgs^  e) {
			 b9->Visible = false;
			 if(turn%2 == 1)
			 {
				 l9->ForeColor = System::Drawing::Color::Red;
				 l9->Text = "O";
				 board[8] = 'O';
				 move_game_player();
			 }
			 else
			 {
				l9->ForeColor = System::Drawing::Color::Blue;
				l9->Text = "X";
				board[8] = 'X';
				move_game_bot_hard();
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_game();
		 }
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_game();
		 }
private: System::Void ñëîæíîñòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
 			 MessageBox::Show("Èãğà \"Êğåñòèêè-Íîëèêè\"\nÂåğñèÿ 1.0.0\n\nĞàçğàáîò÷èê:\n       Ñàìóøåíêîâ\nÀíàòîëèé Èãîğåâè÷", "Î ïğîãğàììå");
		 }
private: System::Void ïğîñòîéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 level = false;
			 Level_messege->Text = "Ëåãêèé";
		 }
private: System::Void ñëîæíûéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 level = true;
			 Level_messege->Text = "Ñëîæíûé";
		 }
private: System::Void ñòàòèñòèêàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 KrestNolForm::MyForm^ f2 = gcnew KrestNolForm::MyForm();
			 f2->WPlayer->Text = Convert::ToString(win_plr);
			 f2->WBot->Text = Convert::ToString(win_bot);
			 f2->Draw->Text = Convert::ToString(turns);
			 f2->E_WPlayer->Text = Convert::ToString(e_win_plr);
			 f2->E_WBot->Text = Convert::ToString(e_win_bot);
			 f2->E_Draw->Text = Convert::ToString(e_turns);
			 f2->H_WPlayer->Text = Convert::ToString(h_win_plr);
			 f2->H_WBot->Text = Convert::ToString(h_win_bot);
			 f2->H_Draw->Text = Convert::ToString(h_turns);
			 f2->ShowDialog();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}