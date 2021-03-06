#include "string_builder.h"

char toStringText[TOSTR_CAPACITY + 1];

StringConverterClass::StringConverterClass()
{
}
void StringConverterClass::write(uint8_t a)
{
    if (index < TOSTR_CAPACITY)
        toStringText[index++] = a;
}
void StringConverterClass::Init()
{
    memset((byte*)toStringText, 0, TOSTR_CAPACITY + 1);
    index = 0;
}
char* StringConverterClass::GetText()
{
    return toStringText;
}



char stringBuilderText[SB_CAPACITY + 1];

StringBuilderClass::StringBuilderClass()
{
}
void StringBuilderClass::Init()
{
    memset((byte*)stringBuilderText, 0, SB_CAPACITY + 1);
    index = 0;
}
void StringBuilderClass::AppendString(char* str)
{
    size_t len = strlen(str);
    if (index + len > SB_CAPACITY)
        len = SB_CAPACITY - index;
    strncat(stringBuilderText, str, len);
    index += len;
}
void StringBuilderClass::PadRight(char* paddingChar, int n)
{
    for (byte i = 0; i < n; i++)
        AppendString(paddingChar);
}
char* StringBuilderClass::GetText()
{
    return stringBuilderText;
}
