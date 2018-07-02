#include "stdafx.h"
#include "MyStreamCipher.h"

MyStreamCipher::MyStreamCipher(string _message)
{
	message = _message;
	init();
}

MyStreamCipher::MyStreamCipher() {
	message = "hello world";
	init();
}

void MyStreamCipher::init() {
	len = 1;
	len = message.size();
	cstr = new char[message.size() + 1];
	cstr = message.c_str();
	numbers = new int[len];
	answer = new int[len];
	reans = new int[len];

}

string MyStreamCipher::Encrypt() {
	
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		numbers[i] = rand() % 100;
		answer[i] = numbers[i] ^ cstr[i];
		EncryptText = EncryptText + (char)answer[i];
	}
	return EncryptText;
}

string MyStreamCipher::HardEncrypt() {

	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		numbers[i] = rand() % 100;
		if (i != 0)
			answer[i] = cstr[i] ^ numbers[i] ^ answer[i - 1];
		else
			answer[i] = cstr[i] ^numbers[i] ;
		EncryptText = EncryptText + (char)answer[i];
	}
	return EncryptText;
}


string MyStreamCipher::HardDecrypt() {
	for (int i = 0; i < len; i++)
	{
		if(i==0)
			reans[i] = numbers[i] ^ answer[i];
		else
			reans[i] =  numbers[i] ^ answer[i] ^ answer[i - 1];
		DecryptText = DecryptText + (char)reans[i];
	}
	return DecryptText;
}

string MyStreamCipher::Decrypt() {
	for (int i = 0; i < len; i++)
	{
		reans[i] = numbers[i] ^ answer[i];
		DecryptText = DecryptText + (char)reans[i];
	}
	return DecryptText;
}

MyStreamCipher::~MyStreamCipher()
{
	free((char*)cstr);
	free(reans);
	free(numbers);
	free(answer);
}
