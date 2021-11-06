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

        printf( "\r\n * Olá caro usuário!\r\n"\
                " * Este programa informará sua idade e características do seu signo.\r\n"\
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
                printf(" * %s, Valor inválido, digite um valor entre 1 e 31: ", nome);
            }
        }

        //pede o mes do nascimento ******
        printf("\r\n * Digite o mês do seu nascimento: ");
        while (1) {
            letra = scanf("%d", &mes_nasc);
            limpa_Teclado();

            if (letra == 1 && mes_nasc >= 1 && mes_nasc <= 12) {
                break;
            }
            else {
                printf(" * %s, Valor inválido, digite um valor entre 1 e 12: ", nome);
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
                printf(" * %s, Valor inválido, digite um valor entre 1900 e %d: ", nome, ano_atual);
            }
        }

        system("cls");

        system("color 74");
        printf("\r\n * %c ", 003);

        printf("Dia do nascimento: %d/", dia_nasc);
        mes_nascimento(mes_nasc);
        printf("/%d\r\n", ano_nasc);

        printf("\r\n * %s, segundo suas informações você tem %d anos\r\n\r\n", nome, ano_atual - ano_nasc);
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
				printf(" * %s, Você digitou um valor incorreto, digite s ou n: ", nome);
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
        printf("Março");
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
    printf( "\r\n %s, Você é do Signo de Capricórnio:\r\n"\
            
            "\r\n Personalidade:\r\n"\
            " * Todo Capricórnio é trabalhador, constante, persistente, obstinado, ambicioso, astuto e dono de uma considerável força de vontade!.\r\n"\
            " * Em geral são pessoas muito reservadas e quase nunca permitem que alguém entre em seu mundo particular.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " * No amor, tende a combinar mais com outra pessoa também de Capricórnio ou Touro, Virgem e Escorpião\r\n"\
            " * O match também pode ser interessante com Câncer, Leão, Libra e Peixes...\r\n"\
            " * No campo da amizade, a maior compatibilidade é com Touro, Câncer, Virgem, Escorpião e Capricórnio.\r\n"\

            "\r\n Profissional:\r\n"\
            " * Excelente organizador e administrador, tem sucesso em atividades onde é requerido um alto nível de responsabilidadee trabalho sério.\r\n"\
            " * Controle de qualidade, área de teste de produtos, chefia de fábricas e grandes empresas de construção, engenharia,\r\n"\
            " * imóveis, também são área nas quais o capricorniano costuma se destacar.\r\n", nome);
    return;

}

void desc_Aquario(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Aquário:\r\n"\

            "\r\n Personalidade:\r\n"\
            " * Aquario significa ser imprevisível, esquisito, gênio, amigo, à frente de seu tempo, místico e criativo.\r\n"\
            " * O perfil de Aquário é diferente de todos do zodíaco. Eles são inquietos e mais analisam a vida, do que a sentem.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " * Aquarianos não lidam nada bem com emoções e podem até se sentir embaraçados perto delas.\r\n"\
            " * No amor, tende a combinar mais com outra pessoa também de Aquário ou Áries, Gêmeos, Leão, Libra e Sagitário.\r\n"\
            " * Já no campo da amizade, a maior compatibilidade é com Gêmeos, Libra, Sagitário e Aquário.\r\n"\
            
            "\r\n Profissional:\r\n"\
            " * no Trabalho precisa de autonomia, pois seu signo trava quando recebe muitas ordens ou opera no automático.\n\r"\
            " * Como nem sempre dá para escolher o emprego ideal, exiba seus talentos para, assim, conquistar cargos em que possa\r\n"\
            " * exercitar sua liberdade criativa.\r\n\r\n", nome);
    return;
}

void desc_Peixes(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Peixes:\r\n"\

            "\r\n Personalidade:\r\n"\
            " *Podem ser considerados as pessoas com a maior conexão espiritual do zodíaco. Signo de água que transborda emoções,\r\n"\
            " *Faz dele sensível, sensitivo, empático, ingênuo, intuitivo, sonhador e artístico...\r\n"\
            " *Possuem uma mente irracional e intuitiva, às vezes ilusória e enganadora\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Os signos que mais combinam são Escorpião e Câncer, pois compreendem a necessidade de afeto e sensibilidade nas relações.\r\n"\
            " *Touro e Capricórnio, que são complementares, rendem uma relação positiva e equilibrada.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Você tende a ser uma pessoa sensível, romântica, carinhosa, intuitiva, criativa e espiritual.\r\n"\
            " *Sua carreira não pode ir contra seus ideais, pois sua maior riqueza são seus sonhos.\r\n", nome);
    return;
}

void desc_Aries(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Áries:\r\n"\
            "\r\n Personalidade:\r\n"\
            " *Possuem uma personalidade muito marcante de assertividade e impetuosidade. Costumam ser muito corajosos,\r\n"\
            " *impulsivos, audaciosos, dinâmicos e obstinados! São pessoas super empolgadas e de muita iniciativa.\r\n"\
            " *Portadores de um grande senso de liderança.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Os signos que combinam mais com Áries costumam ser os demais signos de Fogo (Leão e Sagitário),\r\n"\
            " *pois compreendem a forma como os arianos enxergam a realidade.Ao mesmo tempo, signos de Ar(Aquário, Gêmeos e Libra)\r\n"\
            " *também são uma boa aposta, pois são mais desprendidos e não vão sufocar os nativos do signo de Áries.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Em geral, Arianos se dão bem em áreas de Exatas, como Matemática e nas diversas Engenharias.\r\n"\
            " *Mas também são excelentes médicos, enfermeiros e advogados. Além disso, costumam ser profissionais\r\n"\
            " *diferenciados em administração e marketing.\r\n", nome);
    return;
}

void desc_Touro(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Touro\r\n"\

            "\r\n Personalidade:\r\n"\
            " *Por ser um signo de terra, fixo e muito pé no chão, os taurinos são inflexíveis e possuem uma certa aversão ao risco.\r\n"\
            " *As pessoas do signo de touro são, por natureza, extremamente confiáveis, pacientes e leais, o que os tornam um ótimo\r\n"\
            " *membro para sua equipe de trabalho e para o círculo de amizade\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *No amor, tende a combinar mais com outra pessoa também de Touro ou Câncer, Virgem, Escorpião e Capricórnio.\r\n"\
            " *Já no campo da amizade, a maior compatibilidade é com Touro, Câncer, Virgem, Libra, Escorpião, Capricórnio e Peixes.\r\n"\
            " *você se destaca pela capacidade de trabalho, senso prático e comprometimento.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Em geral, é pontual e consciente das suas obrigações : não transfere tarefas se isso não tiver sido combinado.\r\n"\
            " *Gosta demais de estabilidade e pode ficar por anos no mesmo emprego.\r\n", nome);
    return;

}

void desc_Gemeos(char nome[80]) {
    printf( "\r\n %s Você é do Signo de Gêmeos\r\n"\

            "\r\n Personalidade:\r\n"\
            " *São os famosos tagarelas do zodíaco.\r\n"\
            " *Um signo mental, racional e super ágil, são pessoas brilhantes, comunicativas e curiosas.\r\n"\
            " *Flutuam facilmente pela sua dupla personalidade, que em um momento está super alegre e conversador\r\n"\
            " *e de repente fica amuado e introspectivo\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *As pessoas de Gêmeos formam uma boa combinação romântica com Libra e Aquário, garantindo harmonia no relacionamento.\r\n"\
            " *Por serem complementares, Leão e Áries também se dão bem como geminianos. ... Com tolerância, Sagitário, Áries e Leão\r\n"\
            " *podem ser bons companheiros\r\n"\

            "\r\n Profissional:\r\n"\
            " *Você encontra soluções rápidas para os problemas, sabe dialogar com todo mundo\r\n"\
            " *Sempre apresenta ideias brilhantes para inovar serviços, produtos ou processos.\r\n"\
            " *Não costuma permanecer muitos anos no mesmo emprego, a menos que essa atividade estimule continuamente sua curiosidade\r\n", nome);
    return;
}

void desc_Cancer(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Câncer\r\n"\
            " *Este é tradicionalmente um signo de família. É conservador, seus humores são instáveis como as marés,\r\n"\
            " *sua sensibilidade e intuição suas melhores qualidades. Nunca espere objetividade de uma pessoa de câncer.\r\n"\
            " *A característica mais desconcertante de Câncer é sua capacidade de manipulação e chantagem emocional.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Peixes e Escorpião são os signos mais indicados para um canceriano quando o assunto são relações amorosas.\r\n"\
            " *Signos de Terra, como Virgem e Touro também podem render uma boa relação.\r\n"\
            " *Signos como Áries e Sagitário também dão uma boa combinação, mas podem conflitar por conta das opiniões e do ego.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Você tende a seguir uma carreira ambiciosa. Você gosta de se sentir útil e se dedica bastante às suas tarefas\r\n"\
            " *Os cancerianos também são subjetivos e, para atingirem seus objetivos profissionais ambiciosos, adotam uma postura sutil.\r\n", nome);
    return;
}

void desc_Leao(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Leão\r\n"\
            "\r\n Personalidade:\r\n"\
            " *Otimista, alegre, intuitiva e precisa sentir-se acima do bem e do mal.\r\n"\
            " vQuando sente que é um ser mortal como todos os outros, sua vida pode tornar-se um verdadeiro inferno.\r\n"\
            " *Leão é carismático, charmoso e possui uma personalidade forte e decisiva.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *No amor, tende a combinar mais com outra pessoa também de Leão ou Áries, Libra, Sagitário e Aquário.\r\n"\
            " *O match também pode ser interessante com Touro, Gêmeos, Escorpião e Capricórnio. Com Peixes, é mais ou menos\r\n"\

            " Profissional:\r\n"\
            " *No ambiente de trabalho, as pessoas desse signo são aquelas que não passam despercebidas entre os colegas,\r\n"\
            " *tanto pelo seu entusiasmo quanto pela forma como defende seus ideais, com determinação.\r\n"\
            " *Por ter essa postura mais autocentrada, os leoninos preferem trabalhar sozinhos e possuem tendência a exercer liderança.", nome);
    return;
}

void desc_Virgem(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Virgem\r\n"\
            "\r\n Personalidade:\r\n"\
            " *Possuem uma forte característica intelectual. Tendem ao conhecimento especializado, com muita clareza mental.\r\n"\
            " *Com seu rápido raciocínio, virgem age com cautela, analisa, organiza e categoriza cada área da vida.Sempre optam\r\n"\
            " *pela praticidade e objetividade ao resolver problemas.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Signos mais compatíveis: Virgem, Capricórnio, Câncer, Escorpião e Peixes\r\n"\
            " *São trabalhadores, por isso se dedicam às suas tarefas, sempre visando a perfeição (de vez em quando até demais).\r\n"\

            "\r\n Profissional:\r\n"\
            " *Por ser muito metódico, quer realizar esses deveres do seu jeito, da forma que entende ser a melhor para deixar\r\n"\
            " *tudo nos mínimos detalhes.\r\n", nome);
    return;

}

void desc_Libra(char nome[80]) {
    printf( "\r\n %s, Você é do Signo de Libra\r\n"\
            "\r\n Personalidade:\r\n"\
            " *São personalidades extremamente generosas e fazem de tudo para ajudar seus amigos.\r\n"
            " *São personalidades muito sociáveis, extrovertidas e charmosas, estão sempre preocupados em agradar o próximo.\r\n"\
            " *São avessos a discussões e brigas e muitas vezes optam pela harmonia do que pela verdade.\r\n"\

            "\r\n Relacionamentos:\r\n"\
            " *Libra combina mais com: Áries, Gêmeos, Leão, Sagitário e Aquário – signos que trazem bastante paixão ao relacionamento.\r\n"\
            " *Quanto à Aquário, o equilíbrio entre o lado independente do signo pode ser um bom aspecto\r\n"\
            " *para que o libriano não busque se dedicar somente ao outro.\r\n"\

            "\r\n Profissional:\r\n"\
            " *Libra tende a ser uma pessoa muito amigável no escritório e vai estar pronta para ajudar qualquer colega nos trabalhos em equipe\r\n"\
            " *Precisar tomar decisões importantes pode incomodar bastante em alguns momentos.\r\n", nome);
    return;
}

void desc_Escorpiao(char nome[80]) {
    printf("\r\n %s, Você é do Signo de Escorpião\r\n"\
        "\r\n Personalidade:\r\n"\
        " *É o signo da profundidade. São pessoas muito sentimentais, sensíveis, vingativas, emocionais,\r\n"\
        " *desconfiadas e buscam uma união profunda com pessoas que possam responder a tamanha profundidade.\r\n"\

        "\r\n Relacionamentos:\r\n"\
        " *No amor, tende a combinar mais com outra pessoa também de Escorpião ou Touro, Câncer, Virgem, Capricórnio e Peixes.\r\n"\
        "*O match também pode ser interessante com Leão.Falta magnetismo com Áries, Gêmeos, Libra, Sagitário e Aquário\r\n"\

        "\r\n Profissional:\r\n"\
        " *É uma pessoa honesta, em que se pode confiar para a realização de trabalhos e pode ajudar os demais funcionários.\r\n"\
        " *Quando ele confia em algum colega, a relação tende a ser muito construtiva para os dois e sempre vai refletir\r\n"\
        " *nos resultados entregues\r\n", nome);
    return;
}

void desc_Sargitario(char nome[80]) {
    printf("\r\n %s, Você é do signo de Sagitário\r\n "\
        "\r\n Personalidade:\r\n"\
        " *Sagitário é um signo duplo, meio homem, meio cavalo. Sabe ser um bom conselheiro, como um sacerdote,\r\n"\
        " *mas sabe também, dar seus coices. Sim, porque Sagitário é um signo agressivo, briguento, intolerante. \r\n"\

        "\r\n Relacionamentos:\r\n"\
        " *Sagitário traz como principal marca, o sentido de liberdade, portanto, nem tente aprisioná-lo ou controlá-lo.\r\n"\
        " *Sagitarianos são complementados por pessoas de Aquário e Libra.\r\n"\
        " *Ainda podem formar com Leão e Áries uma relação intensa.\r\n"\
        " *Capricórnio: Peixes e Escorpião podem formar uma relação equilibrada e feliz com a capricorniana.\r\n"\
        " *Touro e Virgem também combinam, mas com cuidados para não sofrer com ciúmes exagerados.\r\n"\
        " *Sagitarianos são pessoas bem-humoradas, de bem com a vida, comunicativas e alegres.\r\n"\

        "\r\n Profissional:\r\n"\
        " *Devem procurar profissões que acentuem tais qualidades.\r\n"\
        " *Profissões que os permitam desenvolver características e pontos positivos para, assim,\r\n"\
        " *evoluírem e crescerem profissionalmente\r\n", nome);
    return;
}