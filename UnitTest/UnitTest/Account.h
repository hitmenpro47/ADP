#pragma once
#include"stdafx.h"
using namespace std;
class account
{
private:
	string user,password;
	
public:
	account(string s="");
	string  getuser();
	string  getpassword();
	void setaccount(string user, string pass);
	friend istream &operator >> (istream &is, account &t);
	friend ostream &operator << (ostream &os, account &t);
};

