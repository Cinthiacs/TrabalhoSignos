#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<string.h>

void limpa_Teclado();
void mes_nascimento(int mes);

void desc_Capricornio(char nome[80]);
void desc_Aquario(char nome[80]);
void desc_Peixes(char nome[80]);
void desc_Aries(char nome[80]);
void desc_Touro(char nome[80]);
void desc_Gemeos(char nome[80]);
void desc_Cancer(char nome[80]);
void desc_Leao(char nome[80]);
void desc_Virgem(char nome[80]);
void desc_Libra(char nome[80]);
void desc_Escorpiao(char nome[80]);
void desc_Sargitario(char nome[80]);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	while (1) {

        system("cls");
        system("color 74");

		char opcao = 0;
        char nome[80] = { 0 };

		time_t mytime;
		mytime = time(NULL);
        time_t data_ano;
        time(&data_ano);
        struct tm* data = localtime(&data_ano);

        printf("\r\n ");
		printf(ctime(&mytime)); 

        int dia_atual = data->tm_mday;
        int mes_atual = data->tm_mon + 1;
        int ano_atual = data->tm_year + 1900;
        int hora = data->tm_hour;
        int min = data->tm_min;
        int seg = data->tm_sec;

        int letra = 0;
        int idade = 0;
        int ano_nasc = 0;
        int mes_nasc = 0;
        int dia_nasc = 0;

        printf( "\r\n * Ol� caro usu�rio!\r\n"\
                " * Este programa informar� sua idade e caracter�sticas do seu signo.\r\n"\
                " * Digite seu nome!: ");
        
        //pede o nome ******
        while (1) {
            
            gets(nome);
            
            if (strlen(nome) < 2) {
                printf("\r\n * O nome precisa ter pelo menos 2 caracteres...\r\n");
                printf(" * Digite seu nome!: ");
            }
            else {
                break;
            }
        }
        
        printf("\r\n * Ola %s\r\n", nome);
        
        //pede o dia do nascimento ******
        printf("\r\n * Digite o dia do seu nascimento: ");
        while (1) {
            letra = scanf("%d", &dia_nasc);
            limpa_Teclado();

            if (letra == 1 && dia_nasc >= 1 && dia_nasc <= 31) {
                break;
            }
            else {
                printf(" * %s, Valor inv�lido, digite um valor entre 1 e 31: ", nome);
            }
        }

        //pede o mes do nascimento ******
        printf("\r\n * Digite o m�s do seu nascimento: ");
        while (1) {
            letra = scanf("%d", &mes_nasc);
            limpa_Teclado();

            if (letra == 1 && mes_nasc >= 1 && mes_nasc <= 12) {
                break;
            }
            else {
                printf(" * %s, Valor inv�lido, digite um valor entre 1 e 12: ", nome);
            }
        }

        //pede o ano do nascimento ******
        printf("\r\n * Digite o ano do seu nascimento: ");
        while (1) {
            letra = scanf("%d", &ano_nasc);
            limpa_Teclado();

            if (letra == 1 && ano_nasc >= 1900 && ano_nasc <= ano_atual) {
                break;
            }
            else {
                printf(" * %s, Valor inv�lido, digite um valor entre 1900 e %d: ", nome, ano_atual);
            }
        }

        system("cls");

        system("color 74");
        printf("\r\n * %c ", 003);

        printf("Dia do nascimento: %d/", dia_nasc);
        mes_nascimento(mes_nasc);
        printf("/%d\r\n", ano_nasc);

        printf("\r\n * %s, segundo suas informa��es voc� tem %d anos\r\n\r\n", nome, ano_atual - ano_nasc);
        printf( " * Viveu aproximadamente:\r\n"\
                "   * %d dias\r\n"\
                "   * %d meses\r\n"\
                "   * %d horas\r\n"\
                "   * %d minutos\r\n"\
                "   * %d segundos\r\n",
                (ano_atual - ano_nasc - 1) * 365 + dia_atual,
                (ano_atual - ano_nasc - 1) * 12 + mes_atual,
                ((ano_atual - ano_nasc - 1) * 365 + dia_atual) * 24,
                ((ano_atual - ano_nasc - 1) * 365 + dia_atual) * 24 * 60,
                ((ano_atual - ano_nasc - 1) * 365 + dia_atual) * 24 * 3600);

        if (mes_nasc == 12 && dia_nasc >= 22 || mes_nasc == 1 && dia_nasc <= 20) {
            desc_Capricornio(nome);
        }

        if (mes_nasc == 01 && dia_nasc >= 21 || mes_nasc == 02 && dia_nasc <= 19) {
            desc_Aquario(nome);
        }

        if (mes_nasc == 02 && dia_nasc >= 20 || mes_nasc == 03 && dia_nasc <= 20) {            
            desc_Peixes(nome);
        }

        if (mes_nasc == 03 && dia_nasc >= 21 || mes_nasc == 04 && dia_nasc <= 20) {
            desc_Aries(nome);
        }

        if (mes_nasc == 04 && dia_nasc >= 21 || mes_nasc == 05 && dia_nasc <= 20) {
            desc_Touro(nome);
        }

        if (mes_nasc == 5 && dia_nasc >= 21 || mes_nasc == 6 && dia_nasc <= 20) {
            desc_Gemeos(nome);
        }

        if (mes_nasc == 06 && dia_nasc >= 21 || mes_nasc == 07 && dia_nasc <= 21) {
            desc_Cancer(nome);
        }

        if (mes_nasc == 7 && dia_nasc >= 22 || mes_nasc == 8 && dia_nasc <= 22) {
            desc_Leao(nome);
        }

        if (mes_nasc == 8 && dia_nasc >= 23 || mes_nasc == 9 && dia_nasc <= 22) {
            desc_Virgem(nome);
        }

        if (mes_nasc == 9 && dia_nasc >= 23 || mes_nasc == 10 && dia_nasc <= 22) {
            desc_Libra(nome);
        }

        if (mes_nasc == 10 && dia_nasc >= 23 || mes_nasc == 11 && dia_nasc <= 21) {
            desc_Escorpiao(nome);
        }

        if (mes_nasc == 11 && dia_nasc >= 22 || mes_nasc == 12 && dia_nasc <= 21) {
            desc_Sargitario(nome);
        }

        printf("\r\n %s, Deseja continuar? (s/n) ", nome);
		
		while (1) {                                 
			opcao = getchar();
			limpa_Teclado();			
		
			if (opcao != 'n' && opcao != 'N' && opcao != 's' && opcao != 'S') {
				printf(" * %s, Voc� digitou um valor incorreto, digite s ou n: ", nome);
			}
			else {
				break;
			}
		}

		if (opcao == 's' || opcao == 'S') {
			continue;
			system("cls");
		}
		else {
			printf("\r\n * %s, Agradecemos por utilizar nosso programa!!\r\n\r\n ", nome);
			system("pause");
			break;
		}
	}
	
	return 0;
}

void limpa_Teclado() {
	char c = 0;
	while (1) {
		c = getchar();
		if (c == '\n') {
			break;
		}
	}
}

void mes_nascimento(int mes) {
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Mar�o");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        break;
    }
}

void desc_Capricornio(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de Capric�rnio:\r\n"\
            
            "\r\n Personalidade:\r\n"\
            " * Todo Capric�rnio � trabalhador, constante, persistente, obstinado, ambicioso, astuto e dono de uma consider�vel for�a de vontade!.\r\n"\
            " * Em geral s�o pessoas muito reservadas e quase nunca permitem que algu�m entre em seu mundo particular.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " * No amor, tende a combinar mais com outra pessoa tamb�m de Capric�rnio ou Touro, Virgem e Escorpi�o\r\n"\
            " * O match tamb�m pode ser interessante com C�ncer, Le�o, Libra e Peixes...\r\n"\
            " * No campo da amizade, a maior compatibilidade � com Touro, C�ncer, Virgem, Escorpi�o e Capric�rnio.\r\n"\

            "\r\n Profissional:\r\n"\
            " * Excelente organizador e administrador, tem sucesso em atividades onde � requerido um alto n�vel de responsabilidadee trabalho s�rio.\r\n"\
            " * Controle de qualidade, �rea de teste de produtos, chefia de f�bricas e grandes empresas de constru��o, engenharia,\r\n"\
            " * im�veis, tamb�m s�o �rea nas quais o capricorniano costuma se destacar.\r\n", nome);
    return;

}

void desc_Aquario(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de Aqu�rio:\r\n"\

            "\r\n Personalidade:\r\n"\
            " * Aquario significa ser imprevis�vel, esquisito, g�nio, amigo, � frente de seu tempo, m�stico e criativo.\r\n"\
            " * O perfil de Aqu�rio � diferente de todos do zod�aco. Eles s�o inquietos e mais analisam a vida, do que a sentem.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " * Aquarianos n�o lidam nada bem com emo��es e podem at� se sentir embara�ados perto delas.\r\n"\
            " * No amor, tende a combinar mais com outra pessoa tamb�m de Aqu�rio ou �ries, G�meos, Le�o, Libra e Sagit�rio.\r\n"\
            " * J� no campo da amizade, a maior compatibilidade � com G�meos, Libra, Sagit�rio e Aqu�rio.\r\n"\
            
            "\r\n Profissional:\r\n"\
            " * no Trabalho precisa de autonomia, pois seu signo trava quando recebe muitas ordens ou opera no autom�tico.\n\r"\
            " * Como nem sempre d� para escolher o emprego ideal, exiba seus talentos para, assim, conquistar cargos em que possa\r\n"\
            " * exercitar sua liberdade criativa.\r\n\r\n", nome);
    return;
}

void desc_Peixes(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de Peixes:\r\n"\

            "\r\n Personalidade:\r\n"\
            " *Podem ser considerados as pessoas com a maior conex�o espiritual do zod�aco. Signo de �gua que transborda emo��es,\r\n"\
            " *Faz dele sens�vel, sensitivo, emp�tico, ing�nuo, intuitivo, sonhador e art�stico...\r\n"\
            " *Possuem uma mente irracional e intuitiva, �s vezes ilus�ria e enganadora\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Os signos que mais combinam s�o Escorpi�o e C�ncer, pois compreendem a necessidade de afeto e sensibilidade nas rela��es.\r\n"\
            " *Touro e Capric�rnio, que s�o complementares, rendem uma rela��o positiva e equilibrada.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Voc� tende a ser uma pessoa sens�vel, rom�ntica, carinhosa, intuitiva, criativa e espiritual.\r\n"\
            " *Sua carreira n�o pode ir contra seus ideais, pois sua maior riqueza s�o seus sonhos.\r\n", nome);
    return;
}

void desc_Aries(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de �ries:\r\n"\
            "\r\n Personalidade:\r\n"\
            " *Possuem uma personalidade muito marcante de assertividade e impetuosidade. Costumam ser muito corajosos,\r\n"\
            " *impulsivos, audaciosos, din�micos e obstinados! S�o pessoas super empolgadas e de muita iniciativa.\r\n"\
            " *Portadores de um grande senso de lideran�a.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Os signos que combinam mais com �ries costumam ser os demais signos de Fogo (Le�o e Sagit�rio),\r\n"\
            " *pois compreendem a forma como os arianos enxergam a realidade.Ao mesmo tempo, signos de Ar(Aqu�rio, G�meos e Libra)\r\n"\
            " *tamb�m s�o uma boa aposta, pois s�o mais desprendidos e n�o v�o sufocar os nativos do signo de �ries.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Em geral, Arianos se d�o bem em �reas de Exatas, como Matem�tica e nas diversas Engenharias.\r\n"\
            " *Mas tamb�m s�o excelentes m�dicos, enfermeiros e advogados. Al�m disso, costumam ser profissionais\r\n"\
            " *diferenciados em administra��o e marketing.\r\n", nome);
    return;
}

void desc_Touro(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de Touro\r\n"\

            "\r\n Personalidade:\r\n"\
            " *Por ser um signo de terra, fixo e muito p� no ch�o, os taurinos s�o inflex�veis e possuem uma certa avers�o ao risco.\r\n"\
            " *As pessoas do signo de touro s�o, por natureza, extremamente confi�veis, pacientes e leais, o que os tornam um �timo\r\n"\
            " *membro para sua equipe de trabalho e para o c�rculo de amizade\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *No amor, tende a combinar mais com outra pessoa tamb�m de Touro ou C�ncer, Virgem, Escorpi�o e Capric�rnio.\r\n"\
            " *J� no campo da amizade, a maior compatibilidade � com Touro, C�ncer, Virgem, Libra, Escorpi�o, Capric�rnio e Peixes.\r\n"\
            " *voc� se destaca pela capacidade de trabalho, senso pr�tico e comprometimento.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Em geral, � pontual e consciente das suas obriga��es : n�o transfere tarefas se isso n�o tiver sido combinado.\r\n"\
            " *Gosta demais de estabilidade e pode ficar por anos no mesmo emprego.\r\n", nome);
    return;

}

void desc_Gemeos(char nome[80]) {
    printf( "\r\n %s Voc� � do Signo de G�meos\r\n"\

            "\r\n Personalidade:\r\n"\
            " *S�o os famosos tagarelas do zod�aco.\r\n"\
            " *Um signo mental, racional e super �gil, s�o pessoas brilhantes, comunicativas e curiosas.\r\n"\
            " *Flutuam facilmente pela sua dupla personalidade, que em um momento est� super alegre e conversador\r\n"\
            " *e de repente fica amuado e introspectivo\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *As pessoas de G�meos formam uma boa combina��o rom�ntica com Libra e Aqu�rio, garantindo harmonia no relacionamento.\r\n"\
            " *Por serem complementares, Le�o e �ries tamb�m se d�o bem como geminianos. ... Com toler�ncia, Sagit�rio, �ries e Le�o\r\n"\
            " *podem ser bons companheiros\r\n"\

            "\r\n Profissional:\r\n"\
            " *Voc� encontra solu��es r�pidas para os problemas, sabe dialogar com todo mundo\r\n"\
            " *Sempre apresenta ideias brilhantes para inovar servi�os, produtos ou processos.\r\n"\
            " *N�o costuma permanecer muitos anos no mesmo emprego, a menos que essa atividade estimule continuamente sua curiosidade\r\n", nome);
    return;
}

void desc_Cancer(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de C�ncer\r\n"\
            " *Este � tradicionalmente um signo de fam�lia. � conservador, seus humores s�o inst�veis como as mar�s,\r\n"\
            " *sua sensibilidade e intui��o suas melhores qualidades. Nunca espere objetividade de uma pessoa de c�ncer.\r\n"\
            " *A caracter�stica mais desconcertante de C�ncer � sua capacidade de manipula��o e chantagem emocional.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Peixes e Escorpi�o s�o os signos mais indicados para um canceriano quando o assunto s�o rela��es amorosas.\r\n"\
            " *Signos de Terra, como Virgem e Touro tamb�m podem render uma boa rela��o.\r\n"\
            " *Signos como �ries e Sagit�rio tamb�m d�o uma boa combina��o, mas podem conflitar por conta das opini�es e do ego.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Voc� tende a seguir uma carreira ambiciosa. Voc� gosta de se sentir �til e se dedica bastante �s suas tarefas\r\n"\
            " *Os cancerianos tamb�m s�o subjetivos e, para atingirem seus objetivos profissionais ambiciosos, adotam uma postura sutil.\r\n", nome);
    return;
}

void desc_Leao(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de Le�o\r\n"\
            "\r\n Personalidade:\r\n"\
            " *Otimista, alegre, intuitiva e precisa sentir-se acima do bem e do mal.\r\n"\
            " vQuando sente que � um ser mortal como todos os outros, sua vida pode tornar-se um verdadeiro inferno.\r\n"\
            " *Le�o � carism�tico, charmoso e possui uma personalidade forte e decisiva.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *No amor, tende a combinar mais com outra pessoa tamb�m de Le�o ou �ries, Libra, Sagit�rio e Aqu�rio.\r\n"\
            " *O match tamb�m pode ser interessante com Touro, G�meos, Escorpi�o e Capric�rnio. Com Peixes, � mais ou menos\r\n"\

            " Profissional:\r\n"\
            " *No ambiente de trabalho, as pessoas desse signo s�o aquelas que n�o passam despercebidas entre os colegas,\r\n"\
            " *tanto pelo seu entusiasmo quanto pela forma como defende seus ideais, com determina��o.\r\n"\
            " *Por ter essa postura mais autocentrada, os leoninos preferem trabalhar sozinhos e possuem tend�ncia a exercer lideran�a.", nome);
    return;
}

void desc_Virgem(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de Virgem\r\n"\
            "\r\n Personalidade:\r\n"\
            " *Possuem uma forte caracter�stica intelectual. Tendem ao conhecimento especializado, com muita clareza mental.\r\n"\
            " *Com seu r�pido racioc�nio, virgem age com cautela, analisa, organiza e categoriza cada �rea da vida.Sempre optam\r\n"\
            " *pela praticidade e objetividade ao resolver problemas.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Signos mais compat�veis: Virgem, Capric�rnio, C�ncer, Escorpi�o e Peixes\r\n"\
            " *S�o trabalhadores, por isso se dedicam �s suas tarefas, sempre visando a perfei��o (de vez em quando at� demais).\r\n"\

            "\r\n Profissional:\r\n"\
            " *Por ser muito met�dico, quer realizar esses deveres do seu jeito, da forma que entende ser a melhor para deixar\r\n"\
            " *tudo nos m�nimos detalhes.\r\n", nome);
    return;

}

void desc_Libra(char nome[80]) {
    printf( "\r\n %s, Voc� � do Signo de Libra\r\n"\
            "\r\n Personalidade:\r\n"\
            " *S�o personalidades extremamente generosas e fazem de tudo para ajudar seus amigos.\r\n"
            " *S�o personalidades muito soci�veis, extrovertidas e charmosas, est�o sempre preocupados em agradar o pr�ximo.\r\n"\
            " *S�o avessos a discuss�es e brigas e muitas vezes optam pela harmonia do que pela verdade.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Libra combina mais com: �ries, G�meos, Le�o, Sagit�rio e Aqu�rio � signos que trazem bastante paix�o ao relacionamento.\r\n"\
            " *Quanto � Aqu�rio, o equil�brio entre o lado independente do signo pode ser um bom aspecto\r\n"\
            " *para que o libriano n�o busque se dedicar somente ao outro.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Libra tende a ser uma pessoa muito amig�vel no escrit�rio e vai estar pronta para ajudar qualquer colega nos trabalhos em equipe\r\n"\
            " *Precisar tomar decis�es importantes pode incomodar bastante em alguns momentos.\r\n", nome);
    return;
}

void desc_Escorpiao(char nome[80]) {
    printf("\r\n %s, Voc� � do Signo de Escorpi�o\r\n"\
        "\r\n Personalidade:\r\n"\
        " *� o signo da profundidade. S�o pessoas muito sentimentais, sens�veis, vingativas, emocionais,\r\n"\
        " *desconfiadas e buscam uma uni�o profunda com pessoas que possam responder a tamanha profundidade.\r\n"\

        "\r\n Relacionamentos:\r\n"\
        " *No amor, tende a combinar mais com outra pessoa tamb�m de Escorpi�o ou Touro, C�ncer, Virgem, Capric�rnio e Peixes.\r\n"\
        "*O match tamb�m pode ser interessante com Le�o.Falta magnetismo com �ries, G�meos, Libra, Sagit�rio e Aqu�rio\r\n"\

        "\r\n Profissional:\r\n"\
        " *� uma pessoa honesta, em que se pode confiar para a realiza��o de trabalhos e pode ajudar os demais funcion�rios.\r\n"\
        " *Quando ele confia em algum colega, a rela��o tende a ser muito construtiva para os dois e sempre vai refletir\r\n"\
        " *nos resultados entregues\r\n", nome);
    return;
}

void desc_Sargitario(char nome[80]) {
    printf("\r\n %s, Voc� � do signo de Sagit�rio\r\n "\
        "\r\n Personalidade:\r\n"\
        " *Sagit�rio � um signo duplo, meio homem, meio cavalo. Sabe ser um bom conselheiro, como um sacerdote,\r\n"\
        " *mas sabe tamb�m, dar seus coices. Sim, porque Sagit�rio � um signo agressivo, briguento, intolerante. \r\n"\

        "\r\n Relacionamentos:\r\n"\
        " *Sagit�rio traz como principal marca, o sentido de liberdade, portanto, nem tente aprision�-lo ou control�-lo.\r\n"\
        " *Sagitarianos s�o complementados por pessoas de Aqu�rio e Libra.\r\n"\
        " *Ainda podem formar com Le�o e �ries uma rela��o intensa.\r\n"\
        " *Capric�rnio: Peixes e Escorpi�o podem formar uma rela��o equilibrada e feliz com a capricorniana.\r\n"\
        " *Touro e Virgem tamb�m combinam, mas com cuidados para n�o sofrer com ci�mes exagerados.\r\n"\
        " *Sagitarianos s�o pessoas bem-humoradas, de bem com a vida, comunicativas e alegres.\r\n"\

        "\r\n Profissional:\r\n"\
        " *Devem procurar profiss�es que acentuem tais qualidades.\r\n"\
        " *Profiss�es que os permitam desenvolver caracter�sticas e pontos positivos para, assim,\r\n"\
        " *evolu�rem e crescerem profissionalmente\r\n", nome);
    return;
}