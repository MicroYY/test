//输入一个字符串s，要把s分成若干部分，使得每部分都不存在循环节。
//所谓存在循环节，就是 可以由一个字符串重复若干次得到。
//比如说abababab存在循环节abab，但是abababa并不 存在循环节。
//首先最小化分的段数，并输出有多少种分割方法，满足条件。(1<=字符串s的长 度<=200000)(s中只会出现小写拉丁字母)  
//输入描述 
//输入只有一行，包括一个字符串s。 
//输出描述 输出一行，包括两个数字，第一个数字表示至少分成几段，第二个数字表示有多少种分割方式。 
//输入样例一 
//abcd 
//输出样例一 
//1 1 
//输入样例二 
//aaaa 
//输出样例二 
//4 1 
//输入样例三 
//abab 
//输出样例三 
//2 3 
//样例解释三 
//可以分为 
//a bab 
//ab ab 
//aba b 
//分成两段的三种方式，都是满足条件的。 

#include <string>	
#include <iostream>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	int n = input.length();


	return 0;
}