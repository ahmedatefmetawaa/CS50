#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
    int main(int argc, string argv[])
{
    if(argc!=2)
  {
      printf("Usage: ./caesar key\n");
      return 1;
  }
  for(int i=0; i<strlen(argv[1]); i++)
  {
    if(!isdigit(argv[1][i]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
  }
    int k= atoi(argv[1]);
    string n=get_string("input plaintext:\n");
    printf("ciphertext: ");
    for(int j=0; j<strlen(n); j++)
    {
      if(isupper(n[j]))
      {
        printf("%c", (n[j]- 65 + k) %26 +65);
      }
      else if(islower(n[j]))
      {
        printf("%c",(n[j]-97+k)%26+97);

      }
      else
      {
        printf("%c",n[j]);
      }

    }
    printf("\n");
}