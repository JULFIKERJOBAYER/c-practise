#include<stdio.h>
int main()
{
char str[30], ch;
int i, vowel ,consonant,digit,symbol, word ;

i = vowel = consonant = digit = word= symbol = 0;

printf("ENTER A STRING: ");
gets(str);

while((ch = str[i]) != '\0')
{
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
          {
              vowel++;
          }
      else if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
              {
                consonant++;
              }
      else if( ch>='0' && ch<='9')
             {
              digit++;
             }
     else if( ch==' ')
             {
              word++;
             }
       else
             {
              symbol++;
             }

    i++;
}
word++;

printf("Number of Vowel = %d\n", vowel);
printf("Number of Consonant = %d\n", consonant);
printf("Number of Digit = %d\n", digit);
printf("Number of symbol = %d\n", symbol);
printf("Number of Word = %d\n", word);


return 0;
}

