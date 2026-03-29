// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    if (!str) return 0;

    unsigned int count =0;
    bool inWord=false;
    bool hasDigit = false;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (std::isspace(str[i])) {
            if (inWord && !hasDigit) {
                ++count;
            }
            inWord = false;
            hasDigit = false;
        }
        else {
            if (!inWord) {
                inWord = true;
                hasDigit = false;
            }
            if (std::isdigit(str[i])) {
                hasDigit = true;
            }
        }
    }

    if (inWord && !hasDigit) {
        ++count;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    if (!str) return 0;

    unsigned int count = 0;
    bool inWord = false;
    bool valid = true;
    int charIndex = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (std::isspace(str[i])) {
            if (inWord && valid) {
            ++count;
            }
            inWord = false;
            valid = true;
            charIndex = 0;
        }
        else {
            if (!inWord) {
                inWord = true;
                charIndex = 0;
                valid = true;
            }
    
            if (charIndex == 0) {
                if (!(str[i] >= 'A' && str[i] <= 'Z')) {
                    valid = false;
                }
            }
            else {
                if (!(str[i] >= 'a' && str[i] <= 'z')) {
                    valid = false;
                }
            }
            ++charIndex;
        }
    }
    if (inWord && valid) {
        ++count;
    }

    return count;
}

unsigned int faStr3(const char *str) {
     if (!str) return 0;

    int totalLength = 0;
    int wordCount = 0;
    bool inWord = false;
    int currentLength = 0;
    
    for (int i = 0; str[i] != '\0'; ++i) {
        if (std::isspace(str[i])) {
            if (inWord) {
                totalLength += currentLength;
                ++wordCount;
                inWord = false;
                currentLength = 0;
            }
        }
        else {
            if (!inWord) {
                inWord = true;
                currentLength = 0;
            }
            ++currentLength;
        }
    }
    if (inWord) {
        totalLength += currentLength;
        ++wordCount;
    }
    if (wordCount == 0) return 0;
    double average = static_cast<double>(totalLength) / wordCount;
    return static_cast<unsigned int>(std::round(average));
}
