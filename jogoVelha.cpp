		#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
		
		int main () {
			setlocale(LC_ALL, "Portuguese");
			
			int l, c, linha, coluna, player, venceu, chances, opcao, contador = 0;
			char jogoVelha[3][3];
			
	    do {
		     player = 1;
			 venceu = 0;
			 chances = 0;
			  
			for(l = 0; l < 3; l++) {
				for (c = 0; c < 3; c++){
					jogoVelha[l][c] = ' ';
				}
            }
			
			do {
			       system("cls");
			       
	 	      printf("______________________________\n");
	          printf("________JOGO DA VELHA_________\n");
	          printf("______________________________\n");
		      printf("\n\n\t 0   1   2\n\n");
		      
			for(l = 0; l < 3; l++) {
			  for(c = 0; c < 3; c++) {
		        if(c == 0)
		           printf("\t");
		  	       printf(" %c ", jogoVelha[l][c]);  
			  	if(c < 2)
			  	   printf("|");
			    if(c == 2)
			       printf(" %d", l);
		      }
				  if(l < 2)
				    printf("\n\t__________");
				     printf("\n");
			}
			
		    do {
		      printf("\nPlayer 1 = X\nPlayer 2 = O\n\n");
		      
		   	  printf("PLAYER %d: Digite a linha e a coluna que deseja jogar: ", player);
			  scanf("%d%d", &linha, &coluna);
			  
		    } while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogoVelha[linha][coluna] != ' ');
		     
		    if(player == 1) { 
		       jogoVelha[linha][coluna] = 'X';
		       player++;
		    } else {
		   	     jogoVelha[linha][coluna] = 'O';
		   	     player = 1;
		    }
		     chances++;   
		              
		     if(jogoVelha[0][0] == 'X' && jogoVelha[0][1] == 'X' && jogoVelha[0][2] == 'X' ||
		        jogoVelha[1][0] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[1][2] == 'X' ||
				jogoVelha[2][0] == 'X' && jogoVelha[2][1] == 'X' && jogoVelha[2][2] == 'X') {
					
		          printf("\nPARABÉNS! O player 1 venceu por linha!\n");
		           venceu = 1;  
		    }
		    
		     if(jogoVelha[0][0] == 'O' && jogoVelha[0][1] == 'O' && jogoVelha[0][2] == 'O' ||
		        jogoVelha[1][0] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[1][2] == 'O' ||
				jogoVelha[2][0] == 'O' && jogoVelha[2][1] == 'O' && jogoVelha[2][2] == 'O') {
					
		          printf("\nPARABÉNS! O player 2 venceu por linha!\n");
		           venceu = 1;    
		    }
		                
		     if(jogoVelha[0][0] == 'X' && jogoVelha[1][0] == 'X' && jogoVelha[2][0] == 'X' ||
		        jogoVelha[0][1] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[2][1] == 'X' ||
				jogoVelha[0][2] == 'X' && jogoVelha[1][2] == 'X' && jogoVelha[2][2] == 'X') {
					
		          printf("\nPARABÉNS! O player 1 venceu por coluna!\n");
		           venceu = 1; 
		    }
		    
		     if(jogoVelha[0][0] == 'O' && jogoVelha[1][0] == 'O' && jogoVelha[2][0] == 'O' ||
		        jogoVelha[0][1] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[2][1] == 'O' ||
				jogoVelha[0][2] == 'O' && jogoVelha[1][2] == 'O' && jogoVelha[2][2] == 'O') {
					
		          printf("\nPARABÉNS! O player 2 venceu por coluna!\n");
		           venceu = 1;    
		    }
		               
		     if(jogoVelha[0][0] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[2][2] == 'X') {
		     	
		     	printf("\nPARABÉNS! O player 1 venceu na diagonal pricipal!\n");
		     	 venceu = 1; 	
		    }
		    
			 if(jogoVelha[0][0] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[2][2] == 'O') {
			 	
		     	printf("\nPARABÉNS! O player 2 venceu na diagonal pricipal!\n");
		     	 venceu = 1;  
		    }
		               
			 if(jogoVelha[0][2] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[2][0] == 'X') {
			 	
		     	printf("\nPARABÉNS! O player 1 venceu na diagonal secundária!\n");
		     	 venceu = 1;
		    }
		    
			 if(jogoVelha[0][2] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[2][0] == 'O') {
			 	
		     	printf("\nPARABÉNS! O player 2 venceu na diagonal secundária!\n");
		     	 venceu = 1; 
		    }  
		  
        }while(venceu == 0 && chances < 9); 
		   
             printf("\n______________________________\n");
             printf("\n________JOGO DA VELHA_________\n");
             printf("\n______________________________\n");
		     printf("\n\n\t 0   1   2\n\n");
		     
			  for(l = 0; l < 3; l++) {
			     for(c = 0; c < 3; c++) {
			        if(c == 0) 
			           printf("\t"); 
			  	       printf(" %c ", jogoVelha[l][c]);
				  	if(c < 2) 
				  	   printf("|");
				    if(c == 2) 
				      printf(" %d", l);
		         }
					   if(l < 2)
					     printf("\n\t__________"); 
				         printf("\n");
              }

		   if(venceu == 0)
		      printf("\nO jogo acabou sem um vencedor!\n");
		  
		   printf("\nDigite 1 para jogar novamente: ");
		   scanf("%d",&opcao);
        }while(opcao == 1);
			  
			return 0;
    } 
