#pragma once
#include <Windows.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctime>
#include "FileDLL.h"

//Строки для фрагментации файла.
std::vector<wchar_t> str1(10), str2(10), str3(10), str4(10), str5(10), str6(10), str7(10), str8(10), str9(10),
str10(10);

char buff[100];//буффер для всего файла.

//Тело потоков для сортировки.
DWORD WINAPI thread1(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str1.begin(), str1.end());
	return 0;
}

DWORD WINAPI thread2(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str2.begin(), str2.end());
	return 0;
}

DWORD WINAPI thread3(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str3.begin(), str3.end());
	return 0;
}

DWORD WINAPI thread4(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str4.begin(), str4.end());
	return 0;
}

DWORD WINAPI thread5(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str5.begin(), str5.end());
	return 0;
}

DWORD WINAPI thread6(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str6.begin(), str6.end());
	return 0;
}

DWORD WINAPI thread7(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str7.begin(), str7.end());
	return 0;
}

DWORD WINAPI thread8(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str8.begin(), str8.end());
	return 0;
}

DWORD WINAPI thread9(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str9.begin(), str9.end());
	return 0;
}

DWORD WINAPI thread10(LPVOID lpParam)
{
	int Data = 0;
	Data = *((int*)lpParam);
	std::sort(str10.begin(), str10.end());
	return 0;
}

namespace Pr4kt1k {
	//std::vector<wchar_t> str1(10), str2(10), str3(10), str4(10), str5(10), str6(10), str7(10), str8(10), str9(10), str10(10);
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  DataTime;
	private: System::Windows::Forms::Button^  Razre;
	private: System::Windows::Forms::TextBox^  NeObr;
	private: System::Windows::Forms::TextBox^  Obr;



	private: System::Windows::Forms::Button^  Read;
	private: System::Windows::Forms::Button^  Сортировка;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DataTime = (gcnew System::Windows::Forms::Label());
			this->Razre = (gcnew System::Windows::Forms::Button());
			this->NeObr = (gcnew System::Windows::Forms::TextBox());
			this->Obr = (gcnew System::Windows::Forms::TextBox());
			this->Read = (gcnew System::Windows::Forms::Button());
			this->Сортировка = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ПушкинаАВ";
			// 
			// DataTime
			// 
			this->DataTime->AutoSize = true;
			this->DataTime->Location = System::Drawing::Point(12, 32);
			this->DataTime->Name = L"DataTime";
			this->DataTime->Size = System::Drawing::Size(0, 13);
			this->DataTime->TabIndex = 1;
			// 
			// Razre
			// 
			this->Razre->Location = System::Drawing::Point(259, 231);
			this->Razre->Name = L"Razre";
			this->Razre->Size = System::Drawing::Size(88, 23);
			this->Razre->TabIndex = 2;
			this->Razre->Text = L"Разрешение ";
			this->Razre->UseVisualStyleBackColor = true;
			this->Razre->Click += gcnew System::EventHandler(this, &MyForm::Razre_Click);
			// 
			// NeObr
			// 
			this->NeObr->Location = System::Drawing::Point(12, 48);
			this->NeObr->Multiline = true;
			this->NeObr->Name = L"NeObr";
			this->NeObr->ReadOnly = true;
			this->NeObr->Size = System::Drawing::Size(147, 144);
			this->NeObr->TabIndex = 3;
			this->NeObr->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Obr
			// 
			this->Obr->Location = System::Drawing::Point(190, 48);
			this->Obr->Multiline = true;
			this->Obr->Name = L"Obr";
			this->Obr->ReadOnly = true;
			this->Obr->Size = System::Drawing::Size(148, 144);
			this->Obr->TabIndex = 4;
			// 
			// Read
			// 
			this->Read->Location = System::Drawing::Point(141, 231);
			this->Read->Name = L"Read";
			this->Read->Size = System::Drawing::Size(75, 23);
			this->Read->TabIndex = 5;
			this->Read->Text = L"Читать";
			this->Read->UseVisualStyleBackColor = true;
			this->Read->Click += gcnew System::EventHandler(this, &MyForm::Read_Click);
			// 
			// Сортировка
			// 
			this->Сортировка->Location = System::Drawing::Point(28, 231);
			this->Сортировка->Name = L"Сортировка";
			this->Сортировка->Size = System::Drawing::Size(75, 23);
			this->Сортировка->TabIndex = 6;
			this->Сортировка->Text = L"Сортировка";
			this->Сортировка->UseVisualStyleBackColor = true;
			this->Сортировка->Click += gcnew System::EventHandler(this, &MyForm::Сортировка_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 266);
			this->Controls->Add(this->Сортировка);
			this->Controls->Add(this->Read);
			this->Controls->Add(this->Obr);
			this->Controls->Add(this->NeObr);
			this->Controls->Add(this->Razre);
			this->Controls->Add(this->DataTime);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//Вывод даты
		time_t now = time(0);
		tm *ltm = localtime(&now);
		int year = 1900 + ltm->tm_year, month = 1 + ltm->tm_mon, day = ltm->tm_mday, time = ltm->tm_hour,
			min = ltm->tm_min, sec = ltm->tm_sec;
		DataTime->Text += " ";
		DataTime->Text += day.ToString();
		DataTime->Text += ".";
		DataTime->Text += month.ToString();
		DataTime->Text += ".";
		DataTime->Text += year.ToString();
		DataTime->Text += " ";
		if (time < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += time.ToString();
		}
		else
			DataTime->Text += time.ToString();
		DataTime->Text += ":";
		if (min < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += min.ToString();
		}
		else
			DataTime->Text += min.ToString();
		DataTime->Text += ":";
		if (sec < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += sec.ToString();
		}
		else
			DataTime->Text += sec.ToString();
		
	}
	private: System::Void Razre_Click(System::Object^  sender, System::EventArgs^  e) {
		//Разрешение на чтение
		SetFileAttributes(L"Zagatovochka.txt", FILE_ATTRIBUTE_NORMAL);
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Read_Click(System::Object^  sender, System::EventArgs^  e) {
	//Заполнение и вывод строк
	int j = 0;
	HANDLE File = CreateNamedPipe(L"//.//pipe/filepipe", PIPE_ACCESS_OUTBOUND, PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
		PIPE_UNLIMITED_INSTANCES, 1024, 1024, INFINITE, 0);
	
	buff[100] = fillstr(&buff[0]);

	for (int i = 0; i < 10;i++)
	{
		str1.at(j) = buff[i];
		NeObr->Text += str1[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 10; i < 20; i++)
	{
		str2.at(j) = buff[i];
		NeObr->Text += str2[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 20; i < 30; i++)
	{
		str3.at(j) = buff[i];
		NeObr->Text += str3[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 30; i < 40; i++)
	{
		str4.at(j) = buff[i];
		NeObr->Text += str4[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 40; i < 50; i++)
	{
		str5.at(j) = buff[i];
		NeObr->Text += str5[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 50; i < 60; i++)
	{
		str6.at(j) = buff[i];
		NeObr->Text += str6[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 60; i < 70; i++)
	{
		str7.at(j) = buff[i];
		NeObr->Text += str7[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 70; i < 80; i++)
	{
		str8.at(j) = buff[i];
		NeObr->Text += str8[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 80; i < 90; i++)
	{
		str9.at(j) = buff[i];
		NeObr->Text += str9[j];
		j++;
	}
	j = 0;
	NeObr->Text += " ";
	for (int i = 90; i < 100; i++)
	{
		str10.at(j) = buff[i];
		NeObr->Text += str10[j];
		j++;
	}
	j = 0;

}
private: System::Void Сортировка_Click(System::Object^  sender, System::EventArgs^  e) {
	//создание потоков
	int nt1 = 1, nt2 = 2, nt3 = 3, nt4 = 4, nt5 = 5, nt6 = 6, nt7 = 7, nt8 = 8, nt9 = 9, nt10 = 10;
	HANDLE sort1 = CreateThread(0, 0, thread1, &nt1, 0, 0);
	HANDLE sort2 = CreateThread(0, 0, thread2, &nt2, 0, 0);
	HANDLE sort3 = CreateThread(0, 0, thread3, &nt3, 0, 0);
	HANDLE sort4 = CreateThread(0, 0, thread4, &nt4, 0, 0);
	HANDLE sort5 = CreateThread(0, 0, thread5, &nt5, 0, 0);
	HANDLE sort6 = CreateThread(0, 0, thread6, &nt6, 0, 0);
	HANDLE sort7 = CreateThread(0, 0, thread7, &nt7, 0, 0);
	HANDLE sort8 = CreateThread(0, 0, thread8, &nt8, 0, 0);
	HANDLE sort9 = CreateThread(0, 0, thread9, &nt9, 0, 0);
	HANDLE sort10 = CreateThread(0, 0, thread10, &nt10, 0, 0);
	HANDLE masssort[10];
	masssort[0] = sort1;
	masssort[1] = sort2;
	masssort[2] = sort3;
	masssort[3] = sort4;
	masssort[4] = sort5;
	masssort[5] = sort6;
	masssort[6] = sort7;
	masssort[7] = sort8;
	masssort[8] = sort9;
	masssort[9] = sort10;
	WaitForMultipleObjects(10, masssort, TRUE, INFINITE);//Ждём выполение всех потоков
	CloseHandle(sort1);
	CloseHandle(sort2);
	CloseHandle(sort3);
	CloseHandle(sort4);
	CloseHandle(sort5);
	CloseHandle(sort6);
	CloseHandle(sort7);
	CloseHandle(sort8);
	CloseHandle(sort9);
	CloseHandle(sort10);
	//Вывод обработаных строк
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str1[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str2[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str3[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str4[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str5[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str6[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str7[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str8[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str9[i];
	}
	Obr->Text += " ";
	for (int i = 0; i < 10; i++)
	{
		Obr->Text += str10[i];
	}
	Obr->Text += " ";
}
};
}
