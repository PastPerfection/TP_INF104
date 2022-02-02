#include <stdio.h>
#include <string.h>

void display_message(char * message)
{
  printf(message);
}

char isCharInteger(char c);

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
      return 0;
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
