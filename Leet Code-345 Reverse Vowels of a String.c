
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
char* reverseVowels(char* s)
{
    int len = strlen(s);
    int left=0,right=len-1;
    while(left<right)
    {
        while(left<right && !isVowel(s[left]))
        {
            left++;
        }
        while(left<right && !isVowel(s[right]))
        {
            right--;
        }
        if(left<right)
        {
            char ch = s[left];
            s[left] = s[right];
            s[right] = ch;
            left++;
            right--;
        }
    }
    return s;
}
int main()
{
    char str[] = "leetcode";
    printf("%s",reverseVowels(str));
}
