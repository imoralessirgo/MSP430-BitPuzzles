/*
 * lab0.c - Programming puzzles for lab 0
 *
 *  Created on: Apr 10, 2018
 *      Author: deemer
 */

#include <puzzles.h>

// testBit:  Given ints x and b, return a non-zero value
// if the m'th bit is set, and 0 otherwise.
// You may assume b is in the range 0-15.
int testBit(int x, int b)
{
    return x & ( 1 << b );
}

// testBit:  Return a value with bit b of x to 1,
// leaving all other bits unchanged
// You may assume b is in the range 0-15.
int setBit(int x, int b)
{
    return x | ( 1 << b );
}

// testBit:  Return a value with bit b of x to 0,
// leaving all other bits unchanged
// You may assume b is in the range 0-15.
int clearBit(int x, int b)
{
    return x & ~((1 << b));
}


// Get *BYTE* n from x
// Assume n is a value from 0-3,
// and byte 0 is the LEAST significant byte
char getByte(long x, int n)
{
    return x >> (n << 3) & 0xFF;
}


// Compute x/(2^n) (that is, two to the power n)
int divpwr2(int x, int n)
{
    return x >> n;
}

// Count number of 1's in x
int bitCount(char x)
{
    return 0;
}


// Compute -x without the - operator
int negate(int x)
{
    return 0;
}

// Return true if x >= 0,
// but without using any logical operators
int isPositive(int x)
{
    return 0;
}



// Combine 8-bit inputs a and b into
// 16-bit value, where
// a is the most significant byte, and
// b is the least significant byte
int pack(char a, char b)
{
    return 0;
}

// Unpack 8-bit integers a and b from 16-bit
// integer c, then compute a - b
// a is the most significant byte, and
// b is the least significant byte
// For this problem, you can use the - operator
int unpackAndSub(int c)
{
    char a,b,s;
    a = c >> 8;
    b = c | 0x00 ;
    s = a-b;
    return s;
}

// Swap all bytes in x such that the
// most significant byte becomes the least significant
// byte, and the least significant byte becomes
// the most significant byte, and so on
// See the tests for examples.
unsigned long swapBytes(unsigned long x)
{
    return 0;
}


// Return true if x corresponds to a letter
// in the ASCII table (that is A-Z or a-z)
// To do this, you may NOT write an if statement
// for each character.
// HINT:  Look at an ASCII table
int isLetter(char x)
{
    if ((x>64 && x<91) || (x>96 && x<123))
        return 1;
    else
        return 0;
}

/*
 * "Shift" character c in the alphabet by
 * the number of places given by variable shift.
 * For example, 'A' shifted by 3 -> 'D'
 *
 * If shifting the letter would go past 'Z', the shifted result
 * should wrap around, eg. 'X' shifted by 4 -> 'B'
 * See the tests for more examples.
 *
 * You may NOT solve this problem by writing one
 * if statement per letter.  Hint:  see ASCII table.
 *
 * You may assume that the input is a CAPITAL ASCII letter.
 */
char letterShift(char c, int shift)
{
    char Q = c + shift;
    if (Q>90)
    Q= Q-26;
    return Q;
}



// Compute the average of the array of values
// "vals", with the size indicated by "num_vals".
char average(char *vals, char num_vals)
{
    int i;
    int sum=0;
    for (i=0;i < num_vals; i++){
        sum = sum + vals[i];
    }
    int avg = sum/num_vals;
    return avg;
}



/*
 * Compute the length of the null-terminated
 * string s.  The length returned should NOT
 * count the null-terminator.
 *
 * You may assume that all strings tested have
 * length less than 255.
 */
#define STR_MAX 255 // Feel free to use this definition
int strLength(char *s)
{
    int i=0;
    while (s[i] != 0){
        i++;
    }
    return i;
}




/*
 * Implement the "Caesar cipher", which is an ancient
 * example of cryptography.
 * To encode a message, shift all characters in the null-terminated
 * string s by 3 letters.   For example "APPLE" becomes "DSSOH"
 * To do this, use your letterShift function.
 *
 * You may assume that the input is a null-terminated, ASCII
 * string containing only CAPITAL letters.
 */
void caesar(char *s)
{
   int i=0;
    while (s[i] != 0){
        s[i]= s[i]+3;
        if (s[i]>90){
            s[i]=s[i]-26;
        }
        i++;
        }
    return s;
}



// *************************** EXTRA PUZZLES ****************************

// Compute the integer form of the base-2 log of x
// This is equivalent to floor(log2(x))
// See the tests for some examples
// You may use loops and conditionals for this puzzle.
unsigned int ilog2(unsigned long x)
{
    int i;
    for (i=0; x > 0x0001 ; i++)
    {
        x = x >> 1;
    }
    return i;
}

// Compute !x without using the ! operator
// You are limited to straight-line code (similar to bitSet/bitTest),
// no loops or conditionals
int bang(int x)
{
    return 0;
}

// Compute -f
// Assume that f is a number in IEEE754 format
//
// C does not permit bitwise operators on floats,
// so the input and return type of this function is
// unsigned long to allow you to alter its format
//
// You may use conditionals for this puzzle.
unsigned long floatNeg(unsigned long f)
{
    return 0;
}

// Return the IEEE754 representation of integer x
// You may use conditionals, loops, and your ilog2 function
//
// As above, the return type for this function is unsigned long
// to allow you to manipulate its format
unsigned long i2f(int x)
{
    return 0;
}



