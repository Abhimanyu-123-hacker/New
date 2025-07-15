// #include<stdio.h>
// int main(){
//     char password[20];
//     printf("enter password");
//     gets(password);
//     int len=strlen(password);
//     printf("number of character in password string is %d",len);

//     return 0;
// }


 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
  int main(){
     char str[30];
     printf("enter string");
     gets(str);
     strupr(str);
     printf("%s",str);
     return 0;
 }

// #include<stdio.h>
//  int main(){
//     char str[30];
//     printf("enter string");
//     gets(str);
//     strlwr(str);
//     printf("%s",str);
//     return 0;
//  }


// #include<stdio.h>
//  int main(){
//     char str[30];
//     printf("enter string");
//     gets(str);
//     strrev(str);
//     printf("%s",str);
//     return 0;
//  }