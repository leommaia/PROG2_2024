#include <stdio.h>

// Declaração das Variaveis

int inicioAno; int anoBissexto;

// ###############################
// ### Declaração das funções ###
// Funcao para 1o de Janeiro
void perguntaPrimeiroDiaJaneiro(){
    printf("Qual e o dia da semana em 1o de Janeiro:");
    printf("\n1- Domingo\n2- Segunda\n3- Terca\n4- Quarta\n5- Quinta\n6- Sexta\n7- Sabado\n\nRESPOSTA= ");
    scanf("%d", &inicioAno);	
}

// ########################
// Funcao para Ano Bissexto    
int perguntaAnoBissexto(){
    printf("\n\nO ano atual e Bissexto ?");
    printf("\n1- SIM\n2- NAO\n\nRESPOSTA= ");
    scanf("%d", &anoBissexto);
    
    if(anoBissexto==1)
    return 29;
    if(anoBissexto==2)
    return 28;
    else
    exit(0);
    
}


// #################
mostrarCalendario(){
}

// ##################
inserirAgendamento(){
	
	int diaAgenda,mesAgenda,duracaoAgenda;
	printf("\nQual eh a data de inicio ?");
	printf("\nINSIRA O DIA: ");
	scanf("%d",&diaAgenda);
	printf("\nINSIRA O MES: ");
	scanf("%d",&mesAgenda);
	
	printf("\n\nQual sera a duracao (em dias)): ");
	scanf("%d",&duracaoAgenda);
	
	exit(0);
}

// ###################
mostrarAgendamentos(){
}
	
// ##################
// PROGRAMA PRINCIPAL
int main(){

    // Declaração das variáveis estáticas
    int ANO[386];
    int MES[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

	perguntaPrimeiroDiaJaneiro();
	MES[2]=perguntaAnoBissexto();
	
	int i;
	while(i!=4){
	printf("#####  MENU  #####");
	printf("\n1) MOSTRAR O CALENDARIO");
	printf("\n2) INSERIR AGENDAMENTO");
	printf("\n3) MOSTRAR AGENDAMENTOS");
	printf("\n4) SAIR\n");
	scanf("%d",&i);
	
	if(i==1)
	mostrarCalendario();
	if(i==2)
	inserirAgendamento();
	if(i==3)
	mostrarAgendamentos();
	
	if(i==4)
	return 0;
			
	}

	return 0;
}


