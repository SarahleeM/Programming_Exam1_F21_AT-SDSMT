#pragma once
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

string getCCType( string cardNum );

bool isAmerican(string cardNum);

bool isMaster(string cardNum);
    
bool isVisa(string cardNum); 

bool isDiscover(string cardNum); 

bool isCardLengthValid(string cardNum);

bool isValidCC(string cardNum);

void stringToInt( string cardNum, int cardVal[]);

bool isCardNumDigit( string cardNum);

int luhnsWeirdOverTenThing( int charVal );

int luhnsSixteen( int cardVal[], int size );

int luhnsThreeAndFive( int cardVal[], int size );

bool luhnsAlgo( int cardVal[], int size );
