#include <cs50.h>
#include <stdio.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int len = string_length(name);
    printf("%i\n", len);
}

int string_length(string s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    return length;
}
