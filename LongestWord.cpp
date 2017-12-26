#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

string LongestWord(string sen) { 
	string word[200];
	int c = 0; // count
	int l = 0; // longest
	for (int i = 0; i < sen.length(); ++i)
	{
		if (sen[i] == ' ') {
			c++;
			continue;
		}
		word[c] += sen[i];	
	}

	for (int i = 0; word[i] != ""; ++i)
	{
		for (int j = 0; word[j] != ""; ++j) {
			if (word[i].length() > word[j].length() && word[i].length() > word[l].length()) {
				l = i;
			}
		}
	}
	
	return word[l];           
}

int main() { 
	cout << LongestWord("hello world! hey 1 ab");
  	return 0;
    
} 