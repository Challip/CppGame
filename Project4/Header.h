//Purpose of this program is to create a geography quiz game that have user interface.
//The program will display the queation and user will answer question by clicking or drag abd drop the answer.
//Author: Prang Kongthongluck
//Version:4
//Date: 04/2020

#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "MyForm.h"


using namespace std;
using namespace System;



int score;
string answer;
int num;
class Question {
protected:// Protected access specifier so inherited class can access to the private attributes 
	string questionText;
	string correctans;
	int questionscore;

public:
	string Getquestion() { return questionText; }
	void Setanswer(string a) { answer = a; }
	string Getcorrectans() { return correctans; }
	int Getquestionscore() { return questionscore; }


	

	//add up the score 

	void scorecal(System::Windows::Forms::Label^ label4){
		if (answer == correctans) {
			score = score + questionscore;
			label4->Text = "You are correct";
				
		}
		if (answer != correctans) {
			label4->Text = "You are wrong";
			score = score;

		}

		
		
	}



	//convert std::string into system::String^
	String^ convert_to_String(std::string x) {
		return msclr::interop::marshal_as<String^>(x);
	}

	String^ Get_question() {
		return convert_to_String(questionText);
	}

	String^ Get_answer() {
		return convert_to_String(answer);
	}
	//label3
	String^ Get_correct() {
		return convert_to_String(correctans);
	}


	


	
	Question(string, string, int);//constructor



};// Question class end 


//declare Question constructer outside the class
//prototyp of constructor
Question::Question(string question, string ca,int qs)
{
	questionText = question;
	correctans = ca;
	questionscore = qs;
}


//class for multi choice question
// MuliQuestion class inherites attributes and methods from Question class
class MultiQuestion : public Question {
private:
	string choiceA;
	string choiceB;
	string choiceC;
	string choiceD;
public:
	string getChoiceA() { return choiceA; }
	void setChoiceA(string A) { choiceA = A; }

	string getChoiceB() { return choiceB; }
	void setChoiceB(string B) { choiceB = B; }

	string getChoiceC() { return choiceC; }
	void setChoiceC(string C) { choiceC = C; }

	string getChoiceD() { return choiceD; }
	void setChoiceD(string D) { choiceD = D; }

	//constructer of MultiQuestion class
	//MultiQuestion(string A, string B, string C, string D)
	MultiQuestion(string, string,int, string, string, string, string);
	


	String^ get_ChoiceA() {
		return convert_to_String(choiceA);
	}
	String^ get_ChoiceB() {
		return convert_to_String(choiceB);
	}
	String^ get_ChoiceC() {
		return convert_to_String(choiceC);
	}
	String^ get_ChoiceD() {
		return convert_to_String(choiceD);
	}


}; //MultiQuestion end

MultiQuestion::MultiQuestion(string question, string ca,int qs,string A, string B, string C, string D) :
	Question(question, ca,qs) {

	choiceA = A;
	choiceB = B;
	choiceC = C;
	choiceD = D;
	
}




MultiQuestion q1("What is the largest city in the world in terms of population?",
	"A",
	10,
	"Beijing", 
	"New York", 
	"Mumbai", 
	"Tokyo");

MultiQuestion q2("Which city is the only city in the world to be located on two separate continents ?",
	"C",
	10,
	"Berlin",
	"Cape town",
	"Istanbul ",
	"Beijing");

MultiQuestion q3("Angel Falls is the world's highest waterfall. In which country is it located? ",
	"B",
	10,
	"Canada",
	"Venezuela",
	"Brazil ",
	"Norway");

MultiQuestion q4("Which European country shares its border with the most neighbours (nine)?",
	"D",
	10,
	"England",
	"Hungary",
	"Switzerland",
	"Germany");

MultiQuestion q5("Which country cover the most tome zones? ",
	"A",
	10,
	"France",
	"USA",
	"Australia",
	"Russia");

MultiQuestion q6("What is the name of the largest lake in UK",
	"C",
	10,
	"Loch Ness",
	"Llyn Tegid	",
	"Lough Neagh",
	"Windermere"); 

//true/ false question
Question t1("Stonehenge is older than the Pyramids", "True", 10);

Question t2(" New Zealand has more sheep than people", "True", 10);

Question t3("China is once name Siam","False",10);

Question t4("China has more than one time zone", "False", 10);

Question t5("Capital city of thailand has the longest city/place name in the world", "True", 10);

Question t6("The Indian Ocean lies between Africa and Australia", "True", 10);

//drag and drop question
MultiQuestion d1("", 
	"Hallstatt, Austrai", 
	20,
	"Hallstatt, Austrai",
	"Interlaken, Swizerland",
	"Gent, Belgium",
	"");

MultiQuestion d2("",
	"Uyuni, Bolivia",
	20,
	"Beijing, China",
	"Heaven",
	"Uyuni, Bolivia",
	"");

MultiQuestion d3("",
	"Krabi, Thailand",
	20,
	"Hawaii",
	"Krabi, Thailand",
	"Maldives",
	"");

MultiQuestion d4("",
	"Cappadocia, Turkey",
	20,
	"Cappadocia, Turkey",
	"Marrakesh, Morocco",
	"Havana, Cuba",
	"");



