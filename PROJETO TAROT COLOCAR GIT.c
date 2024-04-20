#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Definindo a estrutura para representar as cartas de tar�
typedef struct {
    char nomeCarta[50];
    char significado[200];
} CartaTarot;

int main() {
    int i;
    char resposta;
    CartaTarot cartas[3];

    // Semente para gera��o de n�meros aleat�rios
    srand(time(NULL));

    setlocale(LC_ALL, "portuguese");

    printf("Ol�! que tal responder quest�es da nossa vida com base num joguinho de tar�?\n");
    printf("Lembrando que nesse caso isso � apenas um teste de um jogo!\n");
    printf("Por favor, pense e digite tr�s quest�es(gerais) importantes de sua vida.\n");

    // Preenchendo as quest�es com as cartas de tar� usando um loop do-while
    i = 0;
    do {
        printf("Digite a sua quest�o %d: ", i + 1);
        scanf(" %[^\n]s", cartas[i].nomeCarta); // L� a quest�o at� encontrar uma quebra de linha
        i++;
    } while (i < 3);

    printf("\nAqui est�o as suas cartas de tar� e seus significados resumidos:\n");
    printf("\nVoc� pode interpret�-las mais a fundo no seu interior\n");

    // Gerando as respostas aleat�rias para cada carta de tar� usando um loop for
    for (i = 0; i < 3; i++) {
        // Gerar um n�mero aleat�rio entre 0 e 77 (representando todas as cartas do tar�)
        int cartaAleatoria = rand() % 78;

        // Definindo os significados para cada carta de tar�
        switch (cartaAleatoria) {
            case 0:
                sprintf(cartas[i].significado, "A carta O Louco significa a ousadia, a irreflex�o e o prazer,v�rias incertezas pelo caminho...mas n�o h� obst�culos).");
                break;
            case 1:
                sprintf(cartas[i].significado, "A carta O Mago representa criatividade, habilidade e auto-confian�a, os caminhos est�o abertos...s� depende do consulente");
                break;
            case 2:
                sprintf(cartas[i].significado, "� a carta A Sacerdotisa,o usu�rio busca perfei��o e tem o caminho todo aberto para o sucesso... embora o pr�prio se atrapalhe.");
                break;
            case 3:
            	sprintf(cartas[i].significado, "A Imperatriz, a carta significa grande �xito em resolver todos os problemas com intelig�ncia,muito crescimento e sorte ao favor.");
                break;
            case 4:
            	sprintf(cartas[i].significado, "A carta � O Imperador,que representa controle e realiza��o, poder objetivo e um grande dom�nio sobre todos os obst�culos .");
                break;
            case 5:
            	sprintf(cartas[i].significado, "O Papa, que simboliza equil�brio, organiza��o e fidelidade,tudo tende a harmoniza��o...quando for por a��es corretas.");
                break;
            case 6:
            	sprintf(cartas[i].significado, "Enamorados, a carta que simboliza uma oferta/escolha.Depende muito disso do consulente, mas a sorte est� a favor.");
                break;
            case 7:
            	sprintf(cartas[i].significado, "A Carruagem(ou O Carro). Esta significa progresso,dire��o, ou seja, h� desenolvimento favorecido pela for�a m�stica. Carta vitoriosa.");
                break;
			case 8:
            	sprintf(cartas[i].significado, "A For�a:Coragem, conquista, estabilidade. Resumindo, tudo de bom que o consulente precisar� .");
                break;
			case 9:
            	sprintf(cartas[i].significado, "O Eremita: tenha paci�ncia e bastante observa��o, haver� progresso, mas a longo prazo.");
                break;
            case 10:
            	sprintf(cartas[i].significado, "Roda Da Fortuna:� uma carta que tem a ideia de que a vida tem altos e baixos,ou seja, instabilidade e reviravoltas, mudan�as(podem ser boas ou n�o).");
                break;
            case 11:
            	sprintf(cartas[i].significado, "Justi�a: Uma necessidade de tomar deci��es na base da raz�o e cautela, tomar bastante cuidado pela lei de causa e efeito.");
                break;
            case 12:
            	sprintf(cartas[i].significado, "O Enforcado: Impossibilidades, inefic�cia e...sacrif�cios.Muitos obst�culos mesmo.");
                break;
            case 13:
            	sprintf(cartas[i].significado, "A Morte:Est� entre a transforma��o, desapego e o sorfimento, mudan�as radicais vir�o, e podem n�o ser ruins(a longo prazo).");
                break;
            case 14:
            	sprintf(cartas[i].significado, "A Temperan�a:Indica tr�gua e harmonia diante de conflitos e prote��o espiritual mas...h� um pouco de in�rcia.");
                break;
            case 15:
            	sprintf(cartas[i].significado, "O Diabo:Significa poder, dom�nio, ambi��o. H� sucesso, por�m insatisfat�rio. H� influ�ncia de desejos alheios.");
                break;
            case 16:
            	sprintf(cartas[i].significado, "A Torre: uma das cartas mais temidas dos arcanos maiores. H� perigo, perda e rompimento, momentos dif�cies vir�o, muita dor no caminho.");
                break;
            case 17:
            	sprintf(cartas[i].significado, "A Estrela:Indica tranquilidade e supera��o, h� muita esperan�a e for�as superiores ajudar�o no caminho; Prosperidade e alegria de sobra");
                break;
            case 18:
            	sprintf(cartas[i].significado, "A Lua: carta do autoconhecimento, obst�culos vir�o mas haver� sucesso com a lucidez do usu�rio.");
                break;
            case 19:
            	sprintf(cartas[i].significado, "O Sol: Alegria e otimismo acenam, caminhos super abertos e nenhum obst�culo.");
                break;
            case 20:
            	sprintf(cartas[i].significado, "Julgamento: significa momento de renova��o,um despertar espiritual para avaliar suas a��es passadas e considerar as consequ�ncias delas.");
                break;
            case 21:
            	sprintf(cartas[i].significado, "O Mundo: A carta da perfei��o e do progresso, haver� mudan�as naturais mas positivas");
                break;
            case 22:
            	sprintf(cartas[i].significado, "�S DE PAUS: Momento de muita seguran�a e sorte, h� abund�ncia e fertilidade");
                break;
            case 23:
            	sprintf(cartas[i].significado, "DOIS DE PAUS:Confronto nos projetos com fatos inesperados, mas o obst�culo � super�vel");
                break;
            case 24:
            	sprintf(cartas[i].significado, "TRES DE PAUS:Inova��o, chance e oportunidade de conhecimento");
                break;
            case 25:
            	sprintf(cartas[i].significado, "QUATRO DE PAUS:Acordo e paz em meio a dificuldades, fase de reorganiza��o.");
                break;
			case 26:
            	sprintf(cartas[i].significado, "CINCO DE PAUS:Supera��o das barreiras seguida de tranquilidade nos resultados,al�m de recupera��o da sorte.");
                break;
            case 27:
            	sprintf(cartas[i].significado, "SEIS DE PAUS:Sugere favorecimento das metas e continuidade positiva dos projetos, al�m de autoconfian�a.");
                break;
			case 28:
            	sprintf(cartas[i].significado, "SETE DE PAUS: vit�ria, vantagem e determina��o, h� capacidade de sobra pra enfrentar e superar todos os obst�culos.");
                break;
            case 29:
            	sprintf(cartas[i].significado, "OITO DE PAUS:t�rmino/oportunidade,uma mudan�a desejada.");
                break;
			case 30:
            	sprintf(cartas[i].significado, "NOVE DE PAUS: rivalidade, muita disputa e obst�culos transpon�veis");
                break;
            case 31:
            	sprintf(cartas[i].significado, "DEZ DE PAUS: Redefini��o nos planos e metas, um recome�o por esfor�o do usu�rio.");
                break;
            case 32:
            	sprintf(cartas[i].significado, "VALETE/PAJEM DE PAUS:Sinceridade e devo��o,ato importante para o futuro, promessa .");
                break;
            case 33:
            	sprintf(cartas[i].significado, "CAVALEIRO DE PAUS: Bravura e ousadia, significa que  h� supera��es e aberturas de novos caminhos.Chances novas.");
                break;
            case 34:
            	sprintf(cartas[i].significado, "RAINHA DE PAUS:Honra e verdade,h� garantia de vantagens e reciprocidade.");
                break;
            case 35:
            	sprintf(cartas[i].significado, "REI DE PAUS:Indica progresso e fartura, a reorganiza��o trar� a paz e desenvolvimento de planos.");
                break;
            case 36:
            	sprintf(cartas[i].significado, "AS DE COPAS: Indica abund�ncia e prazer, acordos ser�o bem-sucedidos e al�vio de obst�culos.");
                break;
            case 37:
            	sprintf(cartas[i].significado, "DOIS DE COPAS:Coopera��o e uni�o, que acena tranquilidade e sucesso nos objetivos.Perspectiva positiva.");
                break;
            case 38:
            	sprintf(cartas[i].significado, "TRES DE COPAS:Paz e acordos, � a hora da busca da felicidade e do equil�brio interior, pode ficar otimista.");
                break;
            case 39:
            	sprintf(cartas[i].significado, "QUATRO DE COPAS: Decl�nio, des�nimo e desconfian�a...Sugere ideias equivocadas e muitos sentimentos negativos.");
                break;
            case 40:
            	sprintf(cartas[i].significado, "CINCO DE COPAS: M�goa, frustra��o, abandono.Muito arrependimento.Amargura...");
                break;
            case 41:
            	sprintf(cartas[i].significado, "SEIS DE COPAS: Recorda��o e lamenta��o, momento de nostalgia de situa��es pendentes.");
                break;
            case 42:
            	sprintf(cartas[i].significado, "SETE DE COPAS:Devaneio,vaidade negativa. Sugere que h� imagina��o destrutiva, sucesso ilus�rio e muitos erros.");
                break;
            case 43:
            	sprintf(cartas[i].significado, "OITO DE COPAS:Perda, desilus�o e fracasso...Erro pessoal devido a esfor�os in�teis");
                break;
            case 44:
            	sprintf(cartas[i].significado, "NOVE DE COPAS:Felicidade,sorte e acordos, indica que h� solu��o e harmonia diante os obst�culos, al�m de supera��o");
                break;
            case 45:
            	sprintf(cartas[i].significado, "DEZ DE COPAS:Progresso e riqueza,h� realiza��es plenas e duradouras;Plenitude.");
                break;
            case 46:
            	sprintf(cartas[i].significado, "VALETE DE COPAS:Sinceridade e dedica��o, indica harmonia em todos os caminhos e motiva��es bem-intencionadas");
                break;
            case 47:
            	sprintf(cartas[i].significado, "CAVALEIRO DE COPAS:Sedu��o, promessa e futilidade, ou seja, ilus�o.");
                break;
            case 48:
            	sprintf(cartas[i].significado, "RAINHA DE COPAS: Preserva��o do desejo, mas sem progresso no presente,tenha paci�ncia.");
                break;
            case 49:
            	sprintf(cartas[i].significado, "REI DE COPAS:Progresso, felicidade e vaidade; H� autoconfian�a frente a obst�culos e ao caos. Capacidade e f�.");
                break;
            case 50:
            	sprintf(cartas[i].significado, "AS DE ESPADAS: Poder, for�a e a��o; Sugere a capacidade de gerenciar esses planos, com conquista e persuas�o n�tidas.");
                break;
            case 51:
            	sprintf(cartas[i].significado, "DOIS DE ESPADAS: disputa acirrada, luta. Indica momento dif�cil, com muito obst�culo e disc�rdia");
                break;
            case 52:
            	sprintf(cartas[i].significado, "TRES DE ESPADAS: Dor, sofrimento e decep��o...Sugere o fracasso por mentiras e incapacidade de administrar");
                break;
            case 53:
            	sprintf(cartas[i].significado, "QUATRO DE ESPADAS: Adiamento/in�rcia. Acena a imboliza��o de planos.");
                break;
            case 54:
            	sprintf(cartas[i].significado, "CINCO DE ESPADAS:Engano e fracasso. H� desperd�cio de tempo nesse plano e nenhuma a��o... Desequil�brio para resultados ruins");
                break;
            case 55:
            	sprintf(cartas[i].significado, "SEIS DE ESPADAS:Aus�ncia e hesita��o, que indicam imaturidade e falta de reflex�o nos projetos. Sem futuro positivo");
                break;
            case 56:
            	sprintf(cartas[i].significado, "SETE DE ESPADAS: Cautela, ast�cia e empenho. H� possibilidade e esperan�a de conquistas, a diplomacia � importante");
                break;
            case 57:
            	sprintf(cartas[i].significado, "OITO DE ESPADAS: Conflito, fracasso e erros. H� perigo iminente e esfor�o in�til.");
                break;
            case 58:
            	sprintf(cartas[i].significado, "NOVE DE ESPADAS:Desespero, l�grimas e afli��o, sugere a perda irrepar�vel ou abandono dos planos/projetos.");
                break;
            case 59:
            	sprintf(cartas[i].significado, "10 DE ESPADAS: T�rmino definitivo, mas solu��o e renova��o dos planos. Mas resultaria no fim de problemas e da dor");
                break;
            case 60:
            	sprintf(cartas[i].significado, "VALETE DE ESPADAS: Intriga,erro e imaturidade. O usu�rio n�o possui tanta vis�o desses planos e h� curiosidade f�til.");
                break;
            case 61:
            	sprintf(cartas[i].significado, "CAVALEIRO DE ESPADAS: Bravura,indica perspic�cia que levar� ao sucesso desejado");
                break;
            case 62:
            	sprintf(cartas[i].significado, "RAINHA DE ESPADAS: Intoler�ncia e frieza, sugere ego�smo e obsess�o do usu�rio, al�m de isolamento.");
                break;
            case 63:
            	sprintf(cartas[i].significado, "REI DE ESPADAS: Dom�nio e vit�ria em qualquer situa��o desse rumo, com boa estrat�gia,� claro.");
                break;
            case 64:
            	sprintf(cartas[i].significado, "AS DE OUROS:Abund�ncia, sorte e satisfa��o. Sugere equil�brio e caminhos muito bem abertos para o que se deseja");
                break;
            case 65:
            	sprintf(cartas[i].significado, "DOIS DE OUROS: Impasse e adiamento, ser�o obst�culos resolvidos em breve, mas necess�rio um acordo ou divis�o de ideias");
                break;
            case 66:
            	sprintf(cartas[i].significado, "TRES DE OUROS: Abertura, constru��o e expans�o, ou seja, tudo se movimentar� de forma positiva");
                break;
            case 67:
            	sprintf(cartas[i].significado, "QUATRO DE OUROS: Limita��o e reten��o, que indica incapacidade de compartilhar, alguma situa��o em posse. N�o haver� desenvolvimento");
                break;
            case 68:
            	sprintf(cartas[i].significado, "CINCO DE OUROS: Desperd�cio e preju�zo em planos e na a��o, enfraquecimento do poder e harmonia do usu�rio");
                break;
            case 69:
            	sprintf(cartas[i].significado, " SEIS DE OUROS: Indecis�o,indica que apenas o usu�rio pode gerir as escolhas, mas h� a falta de perspectiva pessoal");
                break;
            case 70:
            	sprintf(cartas[i].significado, "SETE DE OUROS: Equilibrio e expans�o, um grande periodo de sorte e boas chances nesse rumo");
                break;
            case 71:
            	sprintf(cartas[i].significado, "OITO DE OUROS:Oportunidade e aprendizado, acena esfor�os com grandes resultados, h� sorte");
                break;
            case 72:
            	sprintf(cartas[i].significado, "NOVE DE OUROS:Satisfa��o, conforto e seguran�a. Indica recupera��o e recompensa para o usu�rio");
                break;
		    case 73:
            	sprintf(cartas[i].significado, "DEZ DE OUROS:Solu��o e progresso, ou seja, harmonia e realiza��o dos planos, al�m de gl�ria nos resultados.");
                break;
            case 74:
            	sprintf(cartas[i].significado, "VALETE DE OUROS: Significa caminhos abertos e a possibilidade de realiza��o em breve, com capacidade e investiga��o.");
                break;
			case 75:
            	sprintf(cartas[i].significado, "CAVALEIRO DE OUROS:Trabalho e perseveran�a, que acena a praticidade na vit�ria,muita resist�ncia para chegar ao resultado");
                break;
			case 76:
            	sprintf(cartas[i].significado, "RAINHA DE OUROS: Autoridade e bem-estar,que pode significar um certo esfor�o que mant�m o plano sob controle, haver� realiza��o e conserva��o ");
                break;
			case 77:
                sprintf(cartas[i].significado, "REI DE OUROS: seguran�a, desenvolvimento e autoridade, que podem indicar pleno poder sobre o destino ");
                break;
            default:
                sprintf(cartas[i].significado, "Significado n�o encontrado.");
                break;
        }

        // Imprimindo a carta de tar� e seu significado correspondente
        printf("\nCarta %d: %s\n", i + 1, cartas[i].nomeCarta);
        printf("Significado: %s\n", cartas[i].significado);
    }

    // Solicitando coment�rios do usu�rio
    printf("\nVoc� pode comentar algo sobre as cartas de tar� ou fazer outras perguntas? (S/N): ");
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's') {
    printf("\n�timo! Por favor, fa�a suas perguntas ou coment�rios.\n");

    // Loop para processar v�rias perguntas ou coment�rios
    do {
        char perguntaComentario[200];
        printf("Digite sua pergunta ou coment�rio: ");
        scanf(" %[^\n]s", perguntaComentario);

        printf("Obrigado pelo seu questionamento/coment�rio!\n");

        printf("\nVoc� deseja fazer mais perguntas ou coment�rios? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');
} else {
    printf("\nObrigado por usar o meu programa, lembre-se que o tar� n�o v� o futuro definitivo, e sim o rumo que pode tomar e as energias indicadas,al�m de sua interpreta��o do contexto pessoal diante dos significados das cartas\n");
}


    return 0;
}

