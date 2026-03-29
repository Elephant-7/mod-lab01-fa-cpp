// Copyright 2022 UNN-IASR
#include "fun.h"

int main() {
    const char* str1 = "abc12 dyy gp56 pkh dnc";
    std::cout << "faStr1: " << faStr1(str1) << std::endl;

    const char* str2 = "Hello world and bye";
    std::cout << "faStr2: " << faStr2(str2) << std::endl;

    const char* str3 = "one  two nine six";
    std::cout << "faStr3: " << faStr3(str3) << std::endl;

    const char* strEmpty = "";
    std::cout << "Empty string - faStr1: " << faStr1(strEmpty)
        << ", faStr2: " << faStr2(strEmpty)
        << ", faStr3: " << faStr3(strEmpty) << std::endl;

    const char* strSpaces = "     ";
    std::cout << "Spaces - faStr1: " << faStr1(strSpaces)
        << ", faStr2: " << faStr2(strSpaces)
        << ", faStr3: " << faStr3(strSpaces) << std::endl;

    const char* strComplex = "   Hello123   World   C++ program  ";
    std::cout << "Complex - faStr1: " << faStr1(strComplex)
        << ", faStr2: " << faStr2(strComplex)
        << ", faStr3: " << faStr3(strComplex) << std::endl;

    return 0;
}
