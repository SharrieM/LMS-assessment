#include "Login.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	const int NumUsers = 3;

	const string usernames[NumUsers] = { "Admin", "User", "Test" };
	const string passwords[NumUsers] = { "password", "hello123", "test123" }; 

	string entered_username, entered_password;
	bool user_validated = false;

	do
	{
		cout << "Insert ID: ";
		cin >> entered_username;

		cout << "Insert Password: ";
		cin >> entered_password;

		for (int i = 0; i < NumUsers; i++)
		{
			if (entered_username == usernames[i] && entered_password == passwords[i])
			{
				cout << "Welcome " << entered_username << '\n';
				user_validated = true;
				break;
			}
		}

		if (!user_validated)
		{
			cout << "Username or password is incorrect\n";
		}

	} while (!user_validated);
