#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	
	int valCapteur[8] = { 2, 56, 180, 60, 10, 1020, 65, 55};
	int temp = 0; 
	int valCapteurNew[6];
	int moyenne = 0, sum = 0;      
        
    printf("Valeurs avant le tri \n");    
    for (int i = 0; i < 8; i++) {     
        printf("%d ", valCapteur[i]);     
    }      
    
    for (int i = 0; i < 8; i++) {     
        for (int j = i+1; j < 8; j++) {     
           if(valCapteur[i] > valCapteur[j]) {    
               temp = valCapteur[i];    
               valCapteur[i] = valCapteur[j];    
               valCapteur[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
    
	printf("Valeurs après le tri: \n");    
    for (int i = 0; i < 8; i++) {     
        printf("%d \n", valCapteur[i]);    
    }    
    
    printf("\nValeurs sans les deux premieres et les deux dernieres : \n");
    
    for (int p = 2; p<6; p++){
    	valCapteurNew[p-2] = valCapteur[p];
    	printf("%d \n", valCapteurNew[p-2]);
	}
	
	for (int l = 0; l<4; l++){
		sum = sum + valCapteurNew[l];
	}
	
	printf("\nLa moyenne est de : \n");
	
	moyenne = sum / 4;
	
	printf("%d", moyenne);
	
	return 0;
}
