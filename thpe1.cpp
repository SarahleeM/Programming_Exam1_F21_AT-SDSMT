/** ****************************************************************************
* @file
******************************************************************************/

#include "thpe1.h"

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A string function that reads in a card number and returns a string
 *  value coresponding to card type
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A string value. Mastercard, Discover, American Express,
 *           Visa, and Unknown accordingly
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "6440747636070782";
    result = getCCType( cardNum ); // result would be Discover
    
    cardNum = "5023589379548211";
    result = getCCType( cardNum ); // result would be Mastercard

    @endverbatim
 ************************************************************************/
string getCCType( string cardNum ){
    int cardCharNum;
    cardCharNum = cardNum.size( );
    if(cardCharNum < 13 || cardCharNum > 16){
        return "Unknown";
    }
    
    bool ans;
    ans = isAmerican( cardNum );
    if(ans == true){
        return "American Express";
    }
    
    ans = isDiscover( cardNum );
    if(ans == true){
        return "Discover";
    }
    
    ans = isMaster( cardNum );
    if(ans == true){
        return "Mastercard";
    }
    
    ans = isVisa( cardNum );
    if(ans == true){
        return "Visa";
    }
   
    return "Unknown";
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in a card number and returns a true value
 *  if the card number matches the American Express requirements.
 *  
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A bool value. True if card num meets American Express 
 *           requirements, False if it doesnt.
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "343669144240775";
    result = isAmerican( cardNum ); // result would be true
    
    cardNum = "5023589379548211";
    result = isAmerican( cardNum ); // result would be false

    @endverbatim
 ************************************************************************/
bool isAmerican(string cardNum){
    int cardCharNum;
    cardCharNum = cardNum.size( );
    char cardNumChar1 = cardNum.at(0);
    double cardNumVal1 = (cardNumChar1 - 48);
    char cardNumChar2 = cardNum.at(1);
    double cardNumVal2 = (cardNumChar2 - 48);
    
     if( cardCharNum == 15 ){
        if(cardNumVal1 == 3){
            if(cardNumVal2 == 4 || cardNumVal2 == 7){
                return true;
            }
        }
    }
    return false;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in a card number and returns a true value
 *  if the card number matches the Mastercard requirements.
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A bool value. True if card num meets the Mastercard 
 *           requirements, False if it doesnt.
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "5023589379548211";
    result = isMaster( cardNum ); // result would be true
    
    cardNum = "4794630503276178";
    result = isMaster( cardNum ); // result would be false

    @endverbatim
 ************************************************************************/
bool isMaster(string cardNum){
    int cardCharNum;
    cardCharNum = cardNum.size( );
    char cardNumChar1 = cardNum.at(0);
    double cardNumVal1 = (cardNumChar1 - 48);
    char cardNumChar2 = cardNum.at(1);
    double cardNumVal2 = (cardNumChar2 - 48);
    
    if( cardCharNum == 16){
        if( cardNumVal1 == 5){
            int i;
            for(i=0; i<6; i++){
            if( cardNumVal2 == i ){
                return true;
            }
            }
        }
    }
    return false;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in a card number and returns a true value
 *  if the card number matches the visa card requirements.
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A bool value. True if card num meets the Discover card 
 *           requirements, False if it doesnt.
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "4794630503276178";
    result = isVisa( cardNum ); // result would be true
    
    cardNum = "7425473237792";
    result = isVisa( cardNum ); // result would be false

    @endverbatim
 ************************************************************************/
bool isVisa(string cardNum){
    int cardCharNum;
    cardCharNum = cardNum.size( );
    char cardNumChar1 = cardNum.at(0);
    double cardNumVal1 = (cardNumChar1 - 48);
    char cardNumChar2 = cardNum.at(1);
    double cardNumVal2 = (cardNumChar2 - 48);
    
    if( cardCharNum == 13 || cardCharNum == 16){
        if( cardNumVal1 == 4){
            return true;
        }
    }
    

    return false;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in a card number and returns a true value
 *  if the card number matches the Discover card requirements.
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A bool value. True if card num meets the Discover card 
 *           requirements, False if it doesnt.
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "6440747636070782";
    result = isDiscover( cardNum ); // result would be true
    
    cardNum = "7425473237792";
    result = isDiscover( cardNum ); // result would be false

    @endverbatim
 ************************************************************************/
bool isDiscover(string cardNum){
  int cardCharNum;
  cardCharNum = cardNum.size( );
  char cardNumChar1 = cardNum.at(0);
  double cardNumVal1 = (cardNumChar1 - 48);
  char cardNumChar2 = cardNum.at(1);
  double cardNumVal2 = (cardNumChar2 - 48);
  char cardNumChar3 = cardNum.at(2);
  double cardNumVal3 = (cardNumChar3 - 48);
  char cardNumChar4 = cardNum.at(3);
  double cardNumVal4 = (cardNumChar4 - 48);
  char cardNumChar5 = cardNum.at(4);
  double cardNumVal5 = (cardNumChar5 - 48);
  char cardNumChar6 = cardNum.at(5);
  double cardNumVal6 = (cardNumChar6 - 48);
  int i;
   
   if( cardCharNum == 16 ){
       if(cardNumVal1 == 6 && cardNumVal2 == 5){
           return true;
       }    
       
        if(cardNumVal1 == 6 && cardNumVal2 == 4){
            for(i=4; i<10; i++){
                if(cardNumVal3 == i){
                    return true;
                }
            }
        }
        
        if(cardNumVal1 == 6 && cardNumVal2 == 0 && cardNumVal3 == 1 && cardNumVal4 == 1){
            return true;
        }
        
        if(cardNumVal1 == 6 && cardNumVal2 == 2 && cardNumVal3 == 2){
            int hundreds = (cardNumVal4 * 100);
            int tens = (cardNumVal5 * 10);
            int ones = cardNumVal6;
            int sum = (hundreds + tens + ones);
            for(i=126; i<927; i++){
                if(sum == i){
                    return true;
                }
            }
        }
   }
   return false; 
} 

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in a card number and returns a true value
 *  if the card number is 13,15, or 16 char long, 0-9 digits, and if it 
 *  passes luhns algorthm. 
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A bool value. True if card num meets the 3 
 *           requirements, False if it doesnt.
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "4794630503276178";
    result = isValidCC( cardNum ); // result would be true
    
    cardNum = "741615722142577";
    result = isValidCC( cardNum ); // result would be false

    @endverbatim
 ************************************************************************/
bool isValidCC(string cardNum){
    bool isCardCharValid;
    bool isCardOnlyDigit;
    bool isCardLuhn;
    int cardVal[16];
    
    int size;
    size = cardNum.size();
    
    
    isCardCharValid = isCardLengthValid( cardNum );
    if(isCardCharValid == false){
        return false;
    }
    
    if(isCardCharValid == true){
        stringToInt( cardNum, cardVal );
        
        isCardOnlyDigit = isCardNumDigit( cardNum );
        
        if(isCardOnlyDigit == true){
            isCardLuhn = luhnsAlgo( cardVal, size );
            
            if(isCardLuhn == true){
                return true;
            }
        }
    }
    
    return false;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in a card number and returns a true value
 *  if the card number is 13,15, or 16 char long.
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A bool value. True if card num meets the 3 
 *           requirements, False if it doesnt.
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "4794630503276178";
    result = isValidCC( cardNum ); // result would be true
    
    cardNum = "741615722142577";
    result = isValidCC( cardNum ); // result would be false

    @endverbatim
 ************************************************************************/
bool isCardLengthValid( string cardNum ){
    int cardSize;
    cardSize = cardNum.size();
    
    if(cardSize == 13){
        return true;
    }
    if(cardSize == 15){
        return true;
    }
    if(cardSize == 16){
        return true;
    }
    return false;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A void function that takes a string value and converts it into 
 *  an int array.
 *
 *  @param[in] cardNum The string containing the card number.
 *  
 *  @param[in, out] cardVal The int array containing the card number
 *
 * 
 *           
 *
 *  @par Example
 *  @verbatim
    int cardVal[3];
    string cardNum;

    cardNum = "123";
    result = stringToInt( cardNum, cardVal ); 
    // result would be cardVal[3]={1,2,3};
    
    cardNum = "567";
    result = stringToInt( cardNum, cardVal ); 
    // result would be cardVal[3]={5,6,7};

    @endverbatim
 ************************************************************************/
void stringToInt( string cardNum, int cardVal[]){
    int size;
    size = cardNum.size();
    
    int i;
    for(i=0; i<size; i++){
        cardVal[i] = 0;
    }
    for(i=0; i<size; i++){
        cardVal[i] = (cardNum.at(i) - 48);
    }
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in a card number and returns a true value
 *  if the card number is comprised entirely of 0-9 digits.
 *
 *  @param[in] cardNum The string containing the card number.
 *
 *  @returns A bool value. True if card num is comprised of 0-9  
 *           digits, False if it doesnt.
 *           
 *
 *  @par Example
 *  @verbatim
    string result;
    string cardNum;

    cardNum = "4794630503276178";
    result = isCardNumDigit( cardNum ); // result would be true
    
    cardNum = "74161572214257a";
    result = isCardNumDigit( cardNum ); // result would be false

    @endverbatim
 ************************************************************************/
bool isCardNumDigit( string cardNum){
    int size;
    size = cardNum.size();
    
    char cardTestChar;
    bool ans;
    int i;
    for(i=0; i<size; i++){
        cardTestChar = cardNum.at(i);
        ans = isdigit(cardTestChar);
        if(ans == false){
            return false;
        }
    }
    
    return true;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  An int function that takes in a value over equal or over 10
 *  and returns the sum of the 2 char in value over 10.
 *
 *  @param[in] charVal The int of the number required to be split and summed.
 *
 *  @returns An int value equal to the sum of the char in value over 
 *           or equal to 10.
 *           
 *
 *  @par Example
 *  @verbatim
    int newCardChar;
    int charVal;

    charVal = 10;
    newCardChar = luhnsWeirdOverTenThing( charVal ); // result would be 1
    
    charVal = 15;
    newCardChar = luhnsWeirdOverTenThing( charVal ); // result would be 6

    @endverbatim
 ************************************************************************/
int luhnsWeirdOverTenThing( int charVal){
    int secondVal;
    int sumVal;
    
    secondVal = (charVal - 10);
    sumVal = (secondVal + 1);
    
    return sumVal;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  An int function that takes in an int array containing a card number,
 *  and the size of said array and returns the value resulting from 
 *  running luhns algorthm against it.
 *
 *  @param[in] cardVal The int array holding the card number
 
 *  @param[in] size The size of the array
 *
 *  @returns An int value that results in the sum of luhns algorythm
 *           run against an even number.
 *           
 *           
 *
 *  @par Example
 *  @verbatim
    int cardVal[2];
    int ans;

    cardVal[2] = {1,1};
    result = luhnsSixteen( cardVal, size ); // result would be 3
    
    cardVal[2] = {1,5};
    result = luhnsSixteen( cardVal, size ); // result would be 7

    @endverbatim
 ************************************************************************/
int luhnsSixteen( int cardVal[], int size){
    
        
    int sum;
    int valEven = 0;
    int valOdd = 0;
    int midVal;
    
    int i;
    for(i=0; i<size; i+=2){
        midVal = (cardVal[i] * 2);
            if(midVal >= 10){
                midVal = luhnsWeirdOverTenThing( midVal );
            }
        valEven = (valEven + midVal);
    }
    
    for(i=1; i<size; i+=2){
        valOdd = (valOdd + cardVal[i]);
    }
    
    
    sum = (valOdd + valEven);
    return sum;
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  An int function that takes in an int array containing a odd card 
 *  number, and the size of said array and returns the value resulting
 *  from running luhns algorthm against it.
 *
 *  @param[in] cardVal The int array holding the card number
 
 *  @param[in] size The size of the array
 *
 *  @returns An int value that results in the sum of luhns algorythm
 *           run against an odd number.
 *           
 *           
 *
 *  @par Example
 *  @verbatim
    int cardVal[3];
    int ans;

    cardVal[3] = {1,1,1};
    result = luhnsThreeAndFive( cardVal, size ); // result would be 3
    
    cardVal3] = {1,5,1};
    result = luhnsThreeAndFive( cardVal, size ); // result would be 3

    @endverbatim
 ************************************************************************/
int luhnsThreeAndFive( int cardVal[], int size ){
    int sum;
    int valEven = 0;
    int valOdd = 0;
    int midVal;
    
    int i;
    for(i=1; i<size; i+=2){
        midVal = (cardVal[i] * 2);
            if(midVal >= 10){
                midVal = luhnsWeirdOverTenThing( midVal );
            }
        valOdd = (valOdd + midVal);
    }
    
    for(i=0; i<size; i+=2){
        valEven = (valEven + cardVal[i]);
    }
    
    
    sum = (valOdd + valEven);
    return sum;
    
}

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A bool function that takes in an int array containing a card 
 *  number and the size of the array. It returns a true value if 
 *  the card number fully passes luhns Algorythm.
 *
 *  @param[in] cardVal The int array holding the card number
 
 *  @param[in] size The size of the array
 *
 *  @returns A bool value True if the card number passes luhns algorthm.
 *           
 *           
 *
 *  @par Example
 *  @verbatim
    int cardVal[3];
    int ans;

    cardVal[3] = {2,2,2};
    result = luhnsAlgo( cardVal, size ); // result would be true
    
    cardVal[3] = {1,5,1};
    result = luhnsAlgo( cardVal, size ); // result would be false

    @endverbatim
 ************************************************************************/
bool luhnsAlgo( int cardVal[], int size ){
    int ans;
    int runoff;
    
    
    if(size == 13 || size == 15){
        ans = luhnsThreeAndFive(cardVal, size);
    }
    if(size == 16){
        ans = luhnsSixteen(cardVal, size);
    }
    
    runoff = (ans % 10);
    if(runoff == 0){
        return true;
    }
    else{
        return false;
    }
    return false;
}

 