#pragma once
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class MyStreamCipher
{
private:
	int len;
	const char* cstr;
	int* numbers;
	int* answer;
	int* reans;
	string message;
	string EncryptText;
	string DecryptText;

public:
	MyStreamCipher(string message);
	MyStreamCipher();
	void init();
	string Encrypt();
	string HardEncrypt();
	string Decrypt();
	string HardDecrypt();
	~MyStreamCipher();
};

