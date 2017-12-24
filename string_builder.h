#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H

#include <Arduino.h>

#define TOSTR_CAPACITY 12

class StringConverterClass : public Print
{
public:
    StringConverterClass(char* _toStringText);
    char* GetText();
    void Init();

private:
    byte index;
    char* toStringText;
    void write(uint8_t a);
};

#define SB_CAPACITY     168 // 8 L * 21 C
class StringBuilderClass
{
public:
    StringBuilderClass(char* _stringBuilderText);
    void Init();
    void AppendString(char* str);
    void PadRight(char* paddingChar, byte n);
    char* GetText();

private:
    byte index;
    char* stringBuilderText;
};

#endif // STRINGBUILDER_H
