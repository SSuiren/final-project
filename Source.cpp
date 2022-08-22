/*
taiquan evans
8/7/2022
*/

//file for the phone

#include "Header.h"
#include "calling.h"



void AI_thief(float& a, float& b);


int rose()
{
string name;

int a;

string game;

float i = 4500.54;
float r = 300.67;
float AI = 0.0;
int t;


	cout << "welcome I am your virtual assistent, here to help you with manuaring your new phone" << endl;
	
	cout << "please register your name." << endl;
	cin >> name;

	cout << "hello " << name << " your phone comes with  multitude of apps already downloaded at my discresion." << endl;
	retry:
	cout << "if you do not like this function please hit 1 for change or 2 continue!" << endl;
	cin >> a;

	if (a == 1)
	{
		cout << "sorry, that function is not available right now, try again after an update!" << endl;
		goto retry;
	}
	else if (a == 2)
	{
		cout << "great that makes things easier!" << endl;
	}

	back:
	reetry:
	cout << "there are a multiple apps that you can choose from below v. lets try one!" << endl;
	cout << endl;
	cout << "keywords" << endl;
	cout << "blackjack" << endl;
	cout << "story game" << endl;
	cout << "calculator" << endl;
	cout << "other" << endl;
	cin >> game;
	//calls keywords function
	if ("keywords" == game)
	{
		 keywords();
	}
	//calls blackjack function
	else if ("blackjack" == game)
	{
		 blackjack();
	}
	//calls story game function
	else if ("story game" == game || "storygame" == game)
	{
		 life();
	}
	//calls the calculator
	else if ("calculator" == game)
	{
		cout << "sorry this function isn't available back, check again later! thank you!" << endl;
		goto back;

	}
	else if ("other" == game)
	{
		cout << "not implemented yet" << endl;
		goto back;
	}

	//sends back if choice is outside what's given
	else
	{
		cout << "do you think me a joke? we no longer care for your antics goodbye." << endl;
	}

	cout << "what the hell?! it turned off?" << endl;
	cout << "OW! I said while tossing the phone!" << endl;
	cout << "it burst into flames and started a small fire which I put out quickly." << endl;
	cout << "that was too weird. I'm going straight to the that store for a refund, I say as I grab the bag with the phone pieces." << endl;
	cout << "Once I get to the store I go straight to the clerk and franticly demand a refund and explaination about why my phone turned off and caught on fire" << endl;
	cout << "once the manager came out he took a look at the pieces while I explianed what happened." << endl;
	cout << "I apoligize but this isn't our phone, we don't even have AI assistants in our products. he said." << endl;
	cout << "your joking, I'm afraid not, he said." << endl;
	cout << "after a little fit over the fact that I lost 1000 dollars, I buy a new phone, which indeed did not have an assistant. andmove on with my life as I need to head to the bank as I need to deposit some money." << endl;
	cout << "once I arrive I head to the atm." << endl;
	cout << endl;
	cout << "you have " << i << " in your savings and " << r << " in your checkings" << endl;
	
	//pause the code for 18 seconds
	chrono::seconds duraa(18);
	this_thread::sleep_for(duraa);

	cout << "I proceed to deposit 50 dollars" << endl;
	i += 60;
	cout << "you now have " << i << " in your savings." << endl;

	//pause the code for 2 seconds
	chrono::seconds dura(2);
	this_thread::sleep_for(dura);

	//calls the switch and swaps the money in the accounts
	AI_thief(i, AI);

	cout << "you now have " << i << " in your savings." << endl;

	cout << " notice that the amount had changed, and that I was at 0.0 on the screen, thinking it must just be a glich I try again." << endl;
	cout << "you now have " << i << " in your savings." << endl;

	cout << "and again!" << endl;
	cout << "you now have " << i << " in your savings." << endl;

	cout << "and again!!" << endl;
	cout << "you now have " << i << " in your savings." << endl;

	cout << "I fall to my knees and verbally weep wondering what was happening. I go to the desk and tell them about what is happening and they look into it." << endl;
	cout << "noticing that something is wrong they check and say that an error in the system took my money and that they will work on fixing it. they paid me 400 dollars for the inconvence of the bank and that they still had back logs of my transactions so I can pull money out in person. I left hoping that they fix it soon." << endl;
	cout << "should I play that game before bed? Y/N" << endl;
	cin >> game;
	
	if ("Y" == game)
	{
		life();
	}
	else if ("N" == game)


	cout << " I'm going to sleep." << endl;

	return 0;
}
//function for switching the money
void AI_thief(float& a, float& b)
{
	//attaches a placement to variable a
	float temp = a;
	//makes the to variables equal
	a = b;
	//switches the b variable with a
	b = temp;
}
