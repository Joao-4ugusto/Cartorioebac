#include <stdio.h> //biblioteca de comunica��o de us�ario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de textos por regi�o 
#include <string.h> //biblioteca respos�vel por cuidar das string

int registro() //Fun��o responsavel por cadastrar os usu�rios no sistema
{
	//inicio de cria��o de vari�veis/string
	   char arquivo[40];
	   char cpf[40];
	   char nome[40];
	   char sobrenome[40];
	   char cargo[40];
	   //Final de cria��o de vari�veis/string
	   
	   
	   printf("Digite o CPF a ser cadastrado:"); //Coletando informa��o do usu�rio
	   scanf("%s", cpf); //%s refere-se a string
	   
	   strcpy(arquivo, cpf);// resposavel por copiar os valores da string
	   
	   FILE *file; //cria o arquivo
	   file = fopen(arquivo , "w"); //cria o arquivo e o "w" significa escrever
	   fprintf(file, cpf); //salvo o valor da variavel
	   fclose(file); //fecha o arquivo
	   
	   file = fopen(arquivo, "a");
	   fprintf(file,".\n");
	   fclose(file);
	  
	   printf("Digite o nome a ser cadastrado:");
	   scanf("%s",nome);
	  
	   file = fopen(arquivo , "a");
	   fprintf(file,nome);
	   fclose(file);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file , ".\n");
	   fclose(file);
	   
	   printf("Digite o sobrenome a ser cadastrado:");
	   scanf("%s",sobrenome);
	  
	   file = fopen(arquivo , "a");
	   fprintf(file,sobrenome);
	   fclose(file);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file , ".\n");
	   fclose(file);
	   
	   printf("Digite o cargo a ser cadastrado:");
	   scanf("%s",cargo);
	   
	   file = fopen(arquivo , "a");
	   fprintf(file,cargo);
	   fclose(file);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file , ".\n");
	   fclose(file);
	   
       
	   
	      
	   
}

int consulta()
{
	    setlocale(LC_ALL, "Portuguese");//Definido a Linguaguem
	    
	    char cpf[40];
	    char conteudo[200];
	    
	    printf("Digite o CPF a ser consultado:");
	    scanf("%s", cpf);
	    
	    FILE* file;
	    file = fopen(cpf, "r");
	    
	    if(file == NULL)
		{
			printf("N�o foi possivel abrir o arquivo n�o localizado!.\n");
		}
		
	    while(fgets(conteudo,200,file)!=NULL)
	    {
	    	printf("\nEssas s�o informa��es do usu�rio:");
	    	printf("%s", conteudo);
	    	printf("\n\n");
		}
	    system("Pause");
	    
	    
}

int deletar()
{
	     char cpf[40];
	    
	     printf("Digite o CPF do usu�rio a ser deletado:");
	     scanf("%s", cpf);
	    
	    remove (cpf);
	    
	    FILE *file;
	    file = fopen(cpf, "r");
	    
	    if(file == NULL)
		{
			printf(" Usu�rio deletado com sucesso!.\n");
			system("pause");
		}	    
	    
	    
	    
	    
}

int main ()
{
	int opcao=0;// Definido Variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");
		
		
	
		setlocale(LC_ALL, "Portuguese");//Definido a Linguaguem
		
	    printf("### Cart�rio da EBAC ###\n\n" );//Inicio do menu
    	printf("Escolha op��o desejada do menu: \n\n");	
	    printf("\t1 - Registrar nomes \n");
     	printf("\t2 - Consultar nomes \n");
    	printf("\t3 - Deletar nomes \n\n" );
    	printf("\t4 - Sair do sistema\n\n");
    	printf("Op��o: ");//Fim do menu
	
	    scanf("%d", &opcao);//armazanamento do usuu�rio
	
      	system("cls");
      	
      	 
      	    switch(opcao)
      	 {
      	 	    case 1: 
		        registro();
	            break;
	        
		    	case 2: 
      	    	consulta();
	     	    break;
	     	
	         	case 3:
      	        deletar();
		        break;
		    
		        case 4:
		        printf("Obrigado por utilizar o nosso sistema!\n");
		        return 0;
		        break;
		        
		        default:
		        printf("Essa op��o n�o est� dispon�vel!\n");
	        	system("pause");
	        	break;
		 }
      	 
      	 
	     
}
	
	
	
	
	
	
	
	}
	
