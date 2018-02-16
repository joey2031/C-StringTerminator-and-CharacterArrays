
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    // The line below will not work..
   // String name = ("joey");
   // unlike java there is no such thing as a string data type...
  // so you need to use a character array
    
    
    // this way it works.
    char arr[] = "code"; // no need to say how many indexes, it will know.
    char word[] = "joey";
    char word2[] = "hahaha";
    
       
    printf("%s" "\n", arr);
     printf("%s" "\n", word);
      printf("%s" "\n", word2);
    

     // VERY IMPORTANT NOTE FOR THIS WAY!!
     // at the end of every string there is something called a string terminator
     // because of this positing starts at 0. So although test is 4 letters you
     // have to make this char array 5 indexes!!
      char test[5] = "test";
      char hello[6] = "hello";
      printf("%s" "\n", test);
      printf ("%s", hello);
      
      // This c program was made by watching buckys c programming tutorial
      // 8 - String Terminator, and number 9 - I need arrays 
  
    return (EXIT_SUCCESS);
}

