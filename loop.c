// // #include <stdio.h>

// // int main(){

// //     int loop=30;

// //     while (loop>=1)
// //     {
// //         printf("%d\n", loop);
// //         loop--;

// //     }
      
// //     return 0;
// // }




// // #include <stdio.h>

// //  int main(){

// //     for(int i=1; i<=10; i++){

// //         printf("hello my name is bharat singh rathore\n");
// //     }
// //      return 0;
// //  }





// // #include <stdio.h>

// //  int main(){
// //  int i=1;
// //     do
// //     {
// //         printf("hellow world\n");
// //         i++;
// //     } while (i<=10);
     
// //     return 0;
    
// //  }



// // #include <stdio.h>
// //  int main(){

// //     for(int loop=30; loop>=1; loop--){

// //         printf("%d\n", loop);
// //     }
// //      return 0;
// //  }



// // #include <stdio.h>

// //  int main (){

// //     for(int r=1; r<10; r++){

// //         for(int col=1; col<=10-r; col++){
// //             printf(" ");
// //         }
// //         for(int col=1; col<2*r-1; col++){

// //             printf("*");
// //         }
// //         for(int col=1; col<=2*(10-r); col++){
             
// //             printf(" ");
// //         }
// //         for(int col=1; col<2*r-1; col++){
// //             printf("*");
// //         }
// //         printf("\n");

// //     }
// //         return 0;
// //  }





// // #include <stdio.h>
// //  int main(){

// //     int i;
// //      printf("enter number of rows");
// //      scanf("%d", &i);

// //      int j;
// //      printf("enter number of columns");
// //      scanf("%d", &j);
      
// //      for(int row=1; row<=i; row++){

// //      for (int col=1; col<=j; col++){
// //             printf("*");
// //         }
// //         printf("\n");
        
// //     }
// //         return 0;
// //     } 
    



// // #include <stdio.h>

// // int main() {
// //     int i, j;

// //     printf("Enter number of rows: ");
// //     scanf("%d", &i);

// //     printf("Enter number of columns: ");
// //     scanf("%d", &j);

// //     for (int row = 1; row <= i; row++) {
// //         for (int col = 1; col <= j; col++) {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }

 


// // #include <stdio.h>
// //  int main(){
  
// //  int i,j;

// //   printf("enter the rows;");
// //   scanf("%d", &i);
// //   printf("enter the number of coloumns:");
// //   scanf("%d", &j);
   
// //    for(int row=1; row<=i; row++){

// //     printf("*");

// //     for(int col=1; col<=j-row; col++){
// //         printf(" ");
// //     }
// //     printf("\n");
// //    }
    
// //     return 0;

// // }

// // #include <stdio.h>

// // int main() {
// //     int i, j;

// //     printf("Enter the number of rows: ");
// //     scanf("%d", &i);

// //     for (int row = 1; row <= i; row++) {
        
// //         for (int space = 1; space <= 2*(i - row); space++) {
// //             printf(" ");
// //         }
        
// //         for (int star = 1; star <= row; star++) {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }



// // #include<stdio.h>
 
// //  int main(){

// //     for(int i=1; i<=10; i++){
// //         for(int j=1; j<=10; j++){
// //             printf("*");

// //         }
// //         printf("\n");
// //     }
// //  }




// //  #include<stdio.h>

// //   int main(){

// //     for(int row=1; row<=10; row++){
// //         for(int col=1; col<=10-row; col++){
// //             printf("* ");
            
// //         }
// //         printf("\n");
// //     }

// //         for(int i=1; i<=10; i++){
// //             for(int j=1; j<=i; j++){
// //                 printf("* ");
// //             }
// //             printf("\n");
// //         }
    
// //   }



// // #include <stdio.h>
 
// //  int main(){

// //      for(int i=1; i<=10; i ++){
// //         for(int j=1; j<=10-i; j++){
// //             printf(" ");
// //         }
// //         printf("\n");

// //          for(int i=1; i<=2*10; i++){
// //                 printf("* ");
// //         }
// //             printf("\n");
// //          }
// //      }
      
 


// // #include <stdio.h>
// // int main(){

// //     for(int i=1; i<=6; i++){
// //         for(int j=1; j<=6-1; j++){
// //             printf(" ");
// //         }
// //         printf("\n");

// //          for(int i=1; i<6; i++){
// //             printf("%d ", i);
// //          }
// //     }
// // }




// //  #include<stdio.h>

// //   int main(){

// //     for(int row=1; row>=10; row++){
// //         for(int col=1; col>=1+row; col--){
// //             printf("%d", col);
            
// //         }
// //         printf("\n");
// //     }
// // }

// // ---------------empty box------------------


// // #include <stdio.h>

// //  int main(){

// //     for(int row=1; row<=10; row++){
// //         for(int col=1; col<=10; col++){
// //             if(row==1 || col==1 || row==10 || col==10){
// //                 printf("* ");

// //             }
// //             else{
// //                 printf("  ");
// //             }
            
// //         }
// //         printf("\n");
// //     }
// //  }


// // #include <stdio.h>

// //  int main(){

// //     for(int row=10; row>=1; row--){
// //      for(int col=10; col>=row; col--)
// //      {
// //         printf(" %d ", col);
// //      }
// //      printf("\n");
// //     }
// //  }


// //  #include <stdio.h>
// //   int main(){

// //    for( int i=1; i<=10; i++){
// //       for(int col=10; col>=1; col--){
// //          if(i==10 || col==1 || i==5 || col==6 || i==1)
// //          {
// //             printf("* ");
// //          }
         
// //       }
// //       printf("\n");
// //    }
  
// // }



// // #include <stdio.h>
// //  int main(){
     
// //    for(int row=1; row<=10; row++){
// //      for(int col=row; col>=1; col--){
// //      printf("%d ", col);
// //      }
// //      printf("\n");
// //    }
// //  }    



// //  #include <stdio.h>

// //  int main(){

// //    for( int row=1; row<=6; row++){
// //       for( int col=1; col<=6; col++){
// //          if( col%2==0){
// //             printf("%d ", 1);
// //          }
// //          else{
// //             printf("%d ", 0);

// //          }

// //     }
// //     printf("\n");
// //  }
// //  return 0;
// // }

// // #include <stdio.h>

// //  int main (){

// //     for(int r=1; r<10; r++){

// //         for(int col=1; col<=10-r; col++){
// //             printf(" ");
// //         }
// //         for(int col=1; col<2*r-1; col++){

// //             printf("*");
// //         }
// //         for(int col=1; col<=2*(10-r); col++){
             
// //             printf(" ");
// //         }
// //         for(int col=1; col<2*r-1; col++){
// //             printf("*");
// //         }
// //         printf("\n");

// //     }
// //         return 0;
// //  }


#include<stdio.h>
 
 int main(){

   for(int row=1; row<=4; row++){
      for( int col=row; col>=4-row; col--){
         printf("*");
      }
      printf("\n");
   }
  
     
}
 