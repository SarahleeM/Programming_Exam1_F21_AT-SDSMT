#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "thpe1.h"

TEST_CASE( "getCCType - testing an Unknown card #" ){
    string cardNum = "12345678901234567";
    string ans;
    
    ans = getCCType( cardNum );
    CHECK( ans == "Unknown" );
}

TEST_CASE( "isAmerican - testing an American Express card" ){
    string cardNum = "343669144240775";
    bool ans;
    
    ans = isAmerican( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isAmerican - testing an American Express card but false" ){
    string cardNum = "363669144240775";
    bool ans;
    
    ans = isAmerican( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isMaster - testing a valid Mastercard number at bottom of range" ){
    string cardNum = "5023589379548211";
    bool ans;
    
    ans = isMaster( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isMaster - testing another Mastercard number below range" ){
    string cardNum = "4923589379548211";
    bool ans;
    
    ans = isMaster( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isMaster - testing another Mastercard number above range" ){
    string cardNum = "5623589379548211";
    bool ans;
    
    ans = isMaster( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isMaster - testing a valid Mastercard number at top of range" ){
    string cardNum = "5523589379548211";
    bool ans;
    
    ans = isMaster( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isMaster - testing another valid mastercard" ){
    string cardNum = "5385288768768674";
    bool ans;
    
    ans = isMaster( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isVisa - testing a valid Visa with 13 Char" ){
    string cardNum = "4234567890123";
    bool ans;
    
    ans = isVisa( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isVisa - testing a valid Visa with 16 Char" ){
    string cardNum = "4234567890123456";
    bool ans;
    
    ans = isVisa( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isDiscover - testing 65" ){
    string cardNum = "6534567890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isDiscover - testing 644-649 range below" ){
    string cardNum = "6434567890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isDiscover - testing 644-649 range at 644" ){
    string cardNum = "6444567890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isDiscover - testing 644-649 range at 649" ){
    string cardNum = "6494567890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isDiscover - testing 6011" ){
    string cardNum = "6011567890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isDiscover - testing 622126-622926 below range" ){
    string cardNum = "6221257890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isDiscover - testing 622126-622926 at 622126" ){
    string cardNum = "6221267890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == true);
}

TEST_CASE( "isDiscover - testing 622126-622926 at 622926" ){
    string cardNum = "6229267890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == true);
}

TEST_CASE( "isDiscover - testing 622126-622926 at 622927" ){
    string cardNum = "6229277890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == false);
}

TEST_CASE( "isDiscover - testing 622126-622926 at 622357" ){
    string cardNum = "6223577890123456";
    bool ans;
    
    ans = isDiscover( cardNum );
    CHECK( ans == true);
}

TEST_CASE( "getCCType - testing an American Express card" ){
    string cardNum = "343669144240775";
    string ans;
    
    ans = getCCType( cardNum );
    CHECK( ans == "American Express" );
}

TEST_CASE( "getCCType - testing a Discover card" ){
    string cardNum = "6440747636070782";
    string ans;
    
    ans = getCCType( cardNum );
    CHECK( ans == "Discover" );
}

TEST_CASE( "getCCType - testing a Mastercard card" ){
    string cardNum = "5023589379548211";
    string ans;
    
    ans = getCCType( cardNum );
    CHECK( ans == "Mastercard" );
}

TEST_CASE( "getCCType - testing a Visa card" ){
    string cardNum = "4794630503276178";
    string ans;
    
    ans = getCCType( cardNum );
    CHECK( ans == "Visa" );
}

TEST_CASE( "isCardLengthValid - testing a card with 13 char" ){
    string cardNum = "1234567890123";
    bool ans;
    
    ans = isCardLengthValid( cardNum );
    CHECK( ans == true);
}

TEST_CASE( "isCardLengthValid - testing a card with 15 char" ){
    string cardNum = "123456789012345";
    bool ans;
    
    ans = isCardLengthValid( cardNum );
    CHECK( ans == true);
}

TEST_CASE( "isCardLengthValid - testing a card with 16 char" ){
    string cardNum = "1234567890123456";
    bool ans;
    
    ans = isCardLengthValid( cardNum );
    CHECK( ans == true);
}

TEST_CASE( "stringToInt - testing an easy conversion" ){
    string cardNum = "5";
    int cardVal[1];
    
    stringToInt(cardNum, cardVal);
    
    CHECK(cardVal[0] == 5);
}

TEST_CASE( "stringToInt - testing a more complex conversion" ){
    string cardNum = "12345";
    int cardVal[5];
    
    
    stringToInt(cardNum, cardVal);
    CHECK(cardVal[0] == 1);
    CHECK(cardVal[2] == 3);
    CHECK(cardVal[4] == 5);
}

TEST_CASE( "isCardNumDigit - testing all digits" ){
    bool ans;
    string cardNum = "010101";
    
    ans = isCardNumDigit( cardNum);
    CHECK( ans == true );
}

TEST_CASE( "isCardNumDigit - testing a non digit value" ){
    bool ans;
    string cardNum = "01010a";
   
    ans = isCardNumDigit( cardNum);
    CHECK( ans == false );
}

TEST_CASE( "isCardNumDigit - testing a symbol" ){
    bool ans;
    string cardNum = "01010?";
    
    ans = isCardNumDigit( cardNum);
    CHECK( ans == false );
}

TEST_CASE( "luhnsWeirdOverTenThing - testing a val resulting in 2" ){
    int charVal = 11;
    int ans;
    
    ans = luhnsWeirdOverTenThing( charVal );
    CHECK( ans == 2 );
}

TEST_CASE( "luhnsWeirdOverTenThing - testing a val resulting in 9" ){
    int charVal = 18;
    int ans;
    
    ans = luhnsWeirdOverTenThing( charVal );
    CHECK( ans == 9 );
}

TEST_CASE( "luhnsSixteen - testing a valid luhns number at 16 char" ){
    int ans;
    int cardVal[16] = {4,0,4,0,4,0,4,0,4,0,4,0,4,0,4,0};
    int size = 16;
    ans = luhnsSixteen( cardVal, size);
    CHECK( ans == 64 );
}

TEST_CASE( "luhnsSixteen - testing a weird val of 16" ){
    int ans;
    int cardVal[16] = {4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1};
    int size = 16;
    ans = luhnsSixteen( cardVal, size);
    CHECK( ans == 72 );
}

TEST_CASE( "luhnsSixteen - testing values that go over 10 thus rounding down" ){
    int ans;
    int cardVal[16] = {5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1};
    int size = 16;
    ans = luhnsSixteen( cardVal, size);
    CHECK( ans == 16 );
}

TEST_CASE( "luhnsSixteen - testing a value added to 3" ){
    int ans;
    int cardVal[16] = {6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int size = 16;
    ans = luhnsSixteen( cardVal, size);
    CHECK( ans == 3 );
}

TEST_CASE( "luhnsSixteen - testing a value added to 9" ){
    int ans;
    int cardVal[16] = {9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int size = 16;
    ans = luhnsSixteen( cardVal, size);
    CHECK( ans == 9 );
}

TEST_CASE( "luhnsThreeAndFive - testing a simple card num" ){
    int cardVal[13] = {0,4,0,0,0,0,0,0,0,0,0,0};
    int size = 13;
    int ans;
    
    ans = luhnsThreeAndFive( cardVal, size);
    CHECK( ans == 8 );
}

TEST_CASE( "luhnsThreeAndFive - testing a card num that multiplies to 10" ){
    int cardVal[13] = {0,5,0,0,0,0,0,0,0,0,0,0};
    int size = 13;
    int ans;
    
    ans = luhnsThreeAndFive( cardVal, size);
    CHECK( ans == 1 );
}

TEST_CASE( "luhnsThreeAndFive - testing a more complex card num" ){
    int cardVal[13] = {1,5,0,5,0,5,0,5,0,5,0,5};
    int size = 13;
    int ans;
    
    ans = luhnsThreeAndFive( cardVal, size);
    CHECK( ans == 7 );
}

TEST_CASE( "luhnsThreeAndFive - testing a complex card with 15 char" ){
    int cardVal[15] = {1,5,0,5,0,5,0,5,0,5,0,5,0,5};
    int size = 15;
    int ans;
    
    ans = luhnsThreeAndFive( cardVal, size);
    CHECK( ans == 8 );
}

TEST_CASE( "luhnsAlgo - testing a simple valid 13 char card num" ){
    bool ans;
    int cardVal[13] = {7,6,0,0,0,0,0,0,0,0,0,0,0};
    int size = 13;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == true );
} 

TEST_CASE( "luhnsAlgo - testing a simple valid 15 char card num" ){
    bool ans;
    int cardVal[15] = {7,6,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int size = 15;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == true );
} 

TEST_CASE( "luhnsAlgo - testing a simple valid 16 char card num" ){
    bool ans;
    int cardVal[16] = {6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int size = 16;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == true );
} 

TEST_CASE( "luhnsAlgo - testing a more complex num" ){
    bool ans;
    int cardVal[15] = {9,5,9,5,0,0,0,0,0,0,0,0,0,0,0};
    int size = 15;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == true );
} 

TEST_CASE( "luhnsAlgo - testing real card number at 13 char" ){
    bool ans;
    int cardVal[13] = {7,4,2,5,4,7,3,2,3,7,7,9,2};
    int size = 13;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == true );
} 

TEST_CASE( "luhnsAlgo - testing real card number at 15 char" ){
    bool ans;
    int cardVal[15] = {3,4,3,6,6,9,1,4,4,2,4,0,7,7,5};
    int size = 15;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == true );
} 

TEST_CASE( "luhnsAlgo - testing real card number at 16 char" ){
    bool ans;
    int cardVal[16] = {5,0,2,3,5,8,9,3,7,9,5,4,8,2,1,1};
    int size = 16;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == true );
} 

TEST_CASE( "luhnsAlgo - testing a fake card num" ){
    bool ans;
    int cardVal[16] = {5,0,2,3,5,8,9,3,7,9,5,4,8,2,1,2};
    int size = 16;
    
    ans = luhnsAlgo( cardVal, size );
    CHECK( ans == false );
} 

TEST_CASE( "isValidCC - testing a 13 digit valid credit card" ){
    bool ans;
    string cardNum = "7425473237792";
    
    ans = isValidCC( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isValidCC - testing a 15 digit valid credit card" ){
    bool ans;
    string cardNum = "742547323779267";
    
    ans = isValidCC( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isValidCC - testing a 16 digit valid credit card" ){
    bool ans;
    string cardNum = "6440747636070782";
    
    ans = isValidCC( cardNum );
    CHECK( ans == true );
}

TEST_CASE( "isValidCC - testing a false card num" ){
    bool ans;
    string cardNum = "6440747836070782";
    
    ans = isValidCC( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isValidCC - testing a false card num bacause its too long" ){
    bool ans;
    string cardNum = "64407478542342070782";
    
    ans = isValidCC( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isValidCC - testing a false card num bacause its too short" ){
    bool ans;
    string cardNum = "3";
    
    ans = isValidCC( cardNum );
    CHECK( ans == false );
}

TEST_CASE( "isValidCC - testing a false card num bacause it got a non digit" ){
    bool ans;
    string cardNum = "a35";
    
    ans = isValidCC( cardNum );
    CHECK( ans == false );
}

 