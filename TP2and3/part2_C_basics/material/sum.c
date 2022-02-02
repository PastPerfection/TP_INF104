#include <stdio.h>
#include <string.h>

void display_message(char * message)
{
  printf(message);
}

char isCharInteger(char c);
int stringToInteger(char * c);

int main(int argc, char *argv[]) {

  if( argc != 3) 
  { 
    display_message("Wrong usage, 2 parameters expected: ./sum param1 param2");
  }
  else 
  {

    int test = 1;
    for(int i = 1; i<argc; i++)
    {
      int j = 0;
      if(argv[i][0]=='-'){
        j=1;
      }

      while(argv[i][j] != '\0')
      {
        if(isCharInteger(argv[i][j])==0)
        {
          test = 0;
        }
        j=j+1;
      }
    }


    if(test == 0) {display_message("Wrong usage, parameters param1 and param2 should be integers when executing ./sum param1 param2");}
    else {
      int first_integer = stringToInteger(argv[1]);
      int second_integer = stringToInteger(argv[2]);

      // printf("%d\n", first_integer);
      // printf("%d", second_integer);

      printf("le resultat est %ld", first_integer + second_integer);
      

    }

  
  }

}

char isCharInteger(char c)
{
  switch(c)
  {
    case '0' :
      return 1;
    
    case '1' : 
      return 1; 
      
    case '2' : 
      return 1; 
      
    case '3' : 
      return 1; 
      
    case '4' : 
      return 1; 
      
    case '5' : 
      return 1; 
      
    case '6' : 
      return 1; 
      
    case '7' : 
      return 1; 
      
    case '8' : 
      return 1; 
      
    case '9' : 
      return 1; 
      
    default :
      return 0;
      
  }
}


char charToInteger(char c)
{
  switch(c)
  {
    case '0' :
      return 0;
    
    case '1' : 
      return 1; 
      
    case '2' : 
      return 2; 
      
    case '3' : 
      return 3; 
      
    case '4' : 
      return 4; 
      
    case '5' : 
      return 5; 
      
    case '6' : 
      return 6; 
      
    case '7' : 
      return 7; 
      
    case '8' : 
      return 8; 
      
    case '9' : 
      return 9; 
      
  }
}

int stringToInteger(char * c)
{
  int i=0;
  int sign =1;
  if(c[0]=='-'){
    sign = -1;
    i=1;
  }
  int res = 0;
  while(c[i]!='\0'){
    res = res*10 + charToInteger(c[i]);
    i=i+1;
  }
  return sign*res;
}