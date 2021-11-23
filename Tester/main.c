#include <stdio.h>
#include "my_mat.h"

int main(){
char i;   
int ans [10][10];
int n=10;

while (i!='D'){
scanf ("%c", &i);
     if (i=='A'){
     A(ans,n);
     }
     if (i=='B'){ 
     B(ans,n);    
     }
     if (i=='C'){     
     C(ans,n);    
     }

}
return 0;
}