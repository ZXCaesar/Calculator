/*
###############################################################################################################################################################################
Calculator console app made by:
????????????????????????????????????????????????????????????????
????????????????????????????????????????????????????????????????
????????????????????????????????????????????????????????????????
????????????????????????????????????????????????????????????????
????????????????????????????????????????????????????????????????
????????????????????????????????????????????????????????????????. 
Sry for some bullying. If u wanna u can go & cry. ( I'm starting:"womp womp")
Open for critic
###############################################################################################################################################################################
*/

#include <iostream>
using namespace std;

/*
###############################################################################################################################################################################
main
###############################################################################################################################################################################
*/

void main() 
{

/*
###############################################################################################################################################################################
initialization of variables
###############################################################################################################################################################################
*/

	int lang;
	float firstVal;
	float secondVal;
	int action;
	int answer;


/*
###############################################################################################################################################################################
language choosing
###############################################################################################################################################################################
*/

	cout << "Choose language:\n	1) Eng\n 	2) Rus" << endl;
	cin >> lang;
/*
###############################################################################################################################################################################
smal debugging (womp womp)
###############################################################################################################################################################################
*/
	if (lang != 1 && lang != 2)
	{
		cout << "You chose wrong! Such a stupid idiot!" << endl;
		system("pause");
	}
	else {

		switch (lang)
		{

			case 1:
/*
###############################################################################################################################################################################
value input and choosing of action
###############################################################################################################################################################################
*/
				cout << "Print the first and the second value:" << endl;
				cout << "	1) ";
				cin >> firstVal;
				cout << "	2) ";
				cin >> secondVal;

				cout << "\n\nOK, well now choose the action with that values:\n    1) Summation\n    2) Subtraction\n    3) Multiplication\n    4) Separation\n";
				cin >> action;

/*
###############################################################################################################################################################################
another smal debugging (womp womp)
###############################################################################################################################################################################
*/
				if (action != 1 && action != 2 && action != 3 && action != 4) 
				{
					cout << "You chose wrong! Such a stupid idiot!" << endl;
					system("pause");
				}
				else {
					switch (action)
					{
/*
###############################################################################################################################################################################
Answer finding

###############################################################################################################################################################################
						*/
					case 1:
						answer = firstVal + secondVal;
						cout << "The answer equals to " << answer << endl;
						system("pause");
						break;
					case 2:
						answer = firstVal - secondVal;
						cout << "The answer equals to " << answer << endl;
						system("pause");
						break;
					case 3:
						answer = firstVal * secondVal;
						cout << "The answer equals to " << answer << endl;
						system("pause");
						break;
					case 4:
						answer = firstVal / secondVal;
						cout << "The answer equals to " << answer << endl;
						system("pause");
						break;

					}
				}
					break;
/*
###############################################################################################################################################################################
every programmer (even russian) hav to know eng, so I won't comment rus edition
###############################################################################################################################################################################
*/

			case 2:

				setlocale(LC_ALL, "rus");

				cout << "�������� ������ � ������ ��������:" << endl;
				cout << "	1) ";
				cin >> firstVal;
				cout << "	2) ";
				cin >> secondVal;

				cout << "\n\n������, ������ ������ ��������, ������������ � ����� ����������:\n    1) ��������\n    2) ���������\n    3) ���������\n    4) �������\n";
				cin >> action;
				if (action != 1 && action != 2 && action != 3 && action != 4)
				{
					cout << "�� ������ �� ��! ����� ������!" << endl;
					system("pause");
				}
				else {
					switch (action)
					{
					case 1:
						answer = firstVal + secondVal;
						cout << "����� - " << answer << endl;
						system("pause");
						break;
					case 2:
						answer = firstVal - secondVal;
						cout << "����� - " << answer << endl;
						system("pause");
						break;
					case 3:
						answer = firstVal * secondVal;
						cout << "����� - " << answer << endl;
						system("pause");
						break;
					case 4:
						answer = firstVal / secondVal;
						cout << "����� - " << answer << endl;
						system("pause");
						break;

					}
				}
				break;

		}
	}
}

/*
###############################################################################################################################################################################
That was all. Thanks for reading my code. if it is as bad as you think text me on my mail.
Byeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
###############################################################################################################################################################################
*/