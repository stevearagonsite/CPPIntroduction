#include <iostream>
#include <string>

using namespace std;

void LearnVariables() {
    // Variables - without namespace std.
    std::cout << "Variables" << std::endl;
    std::cout << "\n";

    cout << 10 << endl;// Int - 2 Bytes
    cout << 14.16f << endl;// Float - 4 Bytes
    cout << 14.16 << endl;// Double - 8 Bytes
    cout << true << endl;// Bool - 1 bit
    cout << 'c' << endl; // Chard - 8 Bits
    cout << "Hello, World!" << endl; // String the count by charts.

    cout << "\n";
    cout << "\n";
}

void LearnOperators() {
    // Operators.
    cout << "Operators" << endl;
    cout << "\n";

    cout << 10 + 1 << endl;// +
    cout << 14.16f - 0.16f << endl;// -
    cout << 14 * 2 << endl;// *
    cout << 14 / 2 << endl;// /
    cout << 14 % 2 << endl;// %

    cout << "\n";
    cout << "\n";
}

void LearnPointers() {
    // Pointers
    cout << "Pointers" << endl;
    cout <<"\n";

    int NumberInt = 5;
    int NumberInt2 = 20;
    int* PointerToAddress;// Var pointer.
    PointerToAddress = &NumberInt;
    int *SecondPointer = &NumberInt;

    cout << NumberInt << endl;
    cout << PointerToAddress << endl;

    *PointerToAddress = 2;// Assign the corresponding number to the memory (NumberInt).

    cout << PointerToAddress << endl;
    cout << NumberInt << endl;
    cout << SecondPointer << endl;
    cout << *SecondPointer << endl;

    SecondPointer = &NumberInt2;
    cout << SecondPointer << endl;

    cout << "\n";
    cout << "\n";
}

void LearnWithExercises() {
    cout << "Point 01 - cal (radio of circle). \n";
    float Pi = 3.1416f;
    float Radio = 5;

    float* PointerPi = &Pi;
    float* PointerRadio = &Radio;

    float rst = *PointerPi * (*PointerRadio * *PointerRadio);
    cout << "rst = " << rst << "\n" ;
    cout << "\n";

    cout << "Point 02 - cal (sphere of circle). \n";
    rst = 4 * Pi * (Radio * Radio);
    cout << "rst = " << rst << "\n" ;

    cout << "Point 03 - cal (radio of circle with inputs and references to pointers assign). \n";
    cout << "The number pi is " << *PointerPi << " !!" << " Assign radio!! \n";
    cout << "Radio = ";
    cin >> *PointerRadio;
    cout << endl;
    cout << *PointerPi * (*PointerRadio * *PointerRadio) << endl;
}

void LearnAboutChar() {
    // By convention, the end of strings represented in character sequences is signaled by
    // a special character: the null character, whose literal value can be written as
    // '\0' (backslash, zero).
    char Hello[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    // how after the content of the string itself, a null character ('\0') has been added
    // in order to indicate the end of the sequence.

    cout << "Say hello with convention: " << Hello << '\n';

    cout << "Say hello iterable: ";
    for (int i = 0; i < 5; ++i) {
        cout << Hello[i];
    }

    cout << '\n' << '\n';

    cout << "Isn\'t clean memory \n";
    cout << "Iterable char bye with lenght 20" << "\n";
    cout << "Say bye: ";
    char Bye[20];
    Bye[0] = 'B';
    Bye[1] = 'y';
    Bye[2] = 'e';
    Bye[3] = '\0';  
    for (int j = 0; j < 20; ++j) {
        cout << Bye[j];
    }

    cout << '\n' << '\n' << "Clean memory" << '\n' ;
    cout << "Say bye: ";
    for (int j = 0; j < 20; ++j) {
        Bye[j] = '\0';
    }
    Bye[0] = 'B';
    Bye[1] = 'y';
    Bye[2] = 'e';
    Bye[3] = '\0';  
    for (int j = 0; j < 20; ++j) {
        cout << Bye[j];
    }
    cout << '\n';
}

void LearnStringAndChar() {
    // For uses strings have a library in c++  #include <string>
    char Question[] = "What is your name? ";
    string Question2 = "Where do you live? ";
    char Answer1 [80];
    string Answer2;

    cout << Question;
    cin >> Answer1;
    cout << Question2;
    cin >> Answer2;
    cout << "Hello, " << Answer1;
    cout << " from " << Answer2 << "!\n";

    char myntcs[] = "some text";
    string mystring = myntcs;  // convert c-string to string
    cout << mystring;          // printed as a library string
    cout << mystring.c_str();  // printed as a c-string
}

int main() {
//    LearnVariables();
//    LearnOperators();
//    LearnPointers();
//    LearnWithExercises();
//    LearnAboutChar();
//    LearnStringAndChar();

    return 0;
}