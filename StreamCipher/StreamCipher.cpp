// StreamCipher.cpp : Defines the entry point for the console application.
//
/*Ziv Nir 305564916
  Nir Mekin 301734158
  yogev heskia 305166860*/
#include "stdafx.h"
#include "MyStreamCipher.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	MyStreamCipher* msc = new MyStreamCipher("avivit role Shenkar");
	string encrypt =msc->HardEncrypt();
	std::cout << encrypt.c_str() << endl;
	string decrypt = msc->HardDecrypt();
	std::cout << decrypt.c_str() << endl;
	MyStreamCipher* msc1 = new MyStreamCipher("hello world");
	encrypt = msc1->Encrypt();
	std::cout << encrypt.c_str() << endl;
	decrypt = msc1->Decrypt();
	std::cout << decrypt.c_str() << endl;
	system("pause");
	return 0;
}

