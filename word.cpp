// g++ words.cpp -o words
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* time */
#include <string>

using namespace std;

string RandomWord(int wordlength);

int main ()
{
	int count = 0, count1 = 0;
        /* initialize random seed: */
    srand (time(NULL));
    string checkword;
    cout << "Input a 4 letter word in all caps" << endl;
	cin >> checkword;
    string theword;
    int i, num = 4; //num is how long word is
    for( i = 0; i < 100000000; i++){
        theword = RandomWord(num);
        if (checkword == theword){
            cout << "that word is a hit!"<< endl;
			cout << i << " " << theword << " ";
			count++;
        }
        else if(checkword != theword){
            //cout << "that word is a WRONG!"<< endl;
			//cout << i << " " << theword << " ";
			count1++;
       }
  }
		cout<<"\n"<<endl;
	cout<<count<< " hits of " <<checkword;
		cout<<"\n"<<endl;
	cout<<count1<< " hits of WRONG" <<"\n";
	    return 0;

}
string RandomWord(int wordlength){
    string aword;

    int i, randomInt;
    int val = 0;
    char letter;
	int lower = 0;
     for(i = 0; i < wordlength;i++)  {
		lower = rand() % 2;
		if (lower < 1){
			randomInt = rand() % 26 + 97;
		}else {
			randomInt = rand() % 26 + 65;
		}
        letter = (char)randomInt;
        string aletter (1,letter);
        aword = aword + aletter;
        //cout<<i<<" * ";
}
return aword;

}
