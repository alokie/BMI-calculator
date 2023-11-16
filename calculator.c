#include <stdio.h>
#include <stdlib.h>
 
 float bmi(float weight, float height) {
      float bmi = weight/(height*height);
         
         return bmi;
        }
        
 int main() {
        
        float weight, height;
        int option;
        
        while(1){
        
        printf("Press 1 to continue and 0 to exit: ");
        scanf("%d", &option);
        
        switch(option) {
        
        case 1:
       printf("Enter your weight in KG: "); 
       scanf("%f", &weight);
       
       printf("Enter your height in M: ");
       scanf("%f", &height);
       
       float bmiValue = bmi(weight, height);
       
       printf("your Body Mass Index measure is: %.5f\n\n", bmiValue);
       break;
       
       
       case 0:
       printf("The Program has ended\n\n");
       exit(0);
       default:
       printf("Invalid option please choose a correct option");
       
          }
       
        
              
           }
       return 0;
       
       }
        
