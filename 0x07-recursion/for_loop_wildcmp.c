#include <stdio.h>

int wildcmp(char *s1, char *s2)
{
  int i, j, num_stars;
  
  for (i = 0, j = 0; s1[i] != '\0'; i++)
  {
    //   printf("Debug %s,%s %d,%d\n", s1, s2, i, j);
      if (s2[j] == '*')
      {
        // printf("Entered\n");
        num_stars =  for_star(s2, j);
        j = j + num_stars - 1;
      }
      if (s2[j] == '*' && s2[j+1] == s1[i])
      {
          j++;
      }

      if (s2[j] != '*' && (s1[i] != s2[j]))
      {
          return 0;
      }
      if (s2[j] == '*' && (s2[j+1] == s1[i+1]))
      {
          j++;
      }
      else if (s2[j] != '*')
      {
          j++;
      }
  }
  return 1;
}

int for_star(char *s2, int start)
{
    int i;
    
    for (i = start; s2[i] == '*'; i++) ;
        return (i - start);
}

int main(void)
{
    int r;

     r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    
    return 0;
}
