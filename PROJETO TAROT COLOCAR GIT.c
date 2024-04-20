#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Definindo a estrutura para representar as cartas de tarô
typedef struct {
    char nomeCarta[50];
    char significado[200];
} CartaTarot;

int main() {
    int i;
    char resposta;
    CartaTarot cartas[3];

    // Semente para geração de números aleatórios
    srand(time(NULL));

    setlocale(LC_ALL, "portuguese");

    printf("Olá! que tal responder questôes da nossa vida com base num joguinho de tarô?\n");
    printf("Lembrando que nesse caso isso é apenas um teste de um jogo!\n");
    printf("Por favor, pense e digite três questões(gerais) importantes de sua vida.\n");

    // Preenchendo as questões com as cartas de tarô usando um loop do-while
    i = 0;
    do {
        printf("Digite a sua questão %d: ", i + 1);
        scanf(" %[^\n]s", cartas[i].nomeCarta); // Lê a questão até encontrar uma quebra de linha
        i++;
    } while (i < 3);

    printf("\nAqui estão as suas cartas de tarô e seus significados resumidos:\n");
    printf("\nVocê pode interpretá-las mais a fundo no seu interior\n");

    // Gerando as respostas aleatórias para cada carta de tarô usando um loop for
    for (i = 0; i < 3; i++) {
        // Gerar um número aleatório entre 0 e 77 (representando todas as cartas do tarô)
        int cartaAleatoria = rand() % 78;

        // Definindo os significados para cada carta de tarô
        switch (cartaAleatoria) {
            case 0:
                sprintf(cartas[i].significado, "A carta O Louco significa a ousadia, a irreflexão e o prazer,várias incertezas pelo caminho...mas não há obstáculos).");
                break;
            case 1:
                sprintf(cartas[i].significado, "A carta O Mago representa criatividade, habilidade e auto-confiança, os caminhos estão abertos...só depende do consulente");
                break;
            case 2:
                sprintf(cartas[i].significado, "É a carta A Sacerdotisa,o usuário busca perfeição e tem o caminho todo aberto para o sucesso... embora o próprio se atrapalhe.");
                break;
            case 3:
            	sprintf(cartas[i].significado, "A Imperatriz, a carta significa grande êxito em resolver todos os problemas com inteligência,muito crescimento e sorte ao favor.");
                break;
            case 4:
            	sprintf(cartas[i].significado, "A carta é O Imperador,que representa controle e realização, poder objetivo e um grande domínio sobre todos os obstáculos .");
                break;
            case 5:
            	sprintf(cartas[i].significado, "O Papa, que simboliza equilíbrio, organização e fidelidade,tudo tende a harmonização...quando for por ações corretas.");
                break;
            case 6:
            	sprintf(cartas[i].significado, "Enamorados, a carta que simboliza uma oferta/escolha.Depende muito disso do consulente, mas a sorte está a favor.");
                break;
            case 7:
            	sprintf(cartas[i].significado, "A Carruagem(ou O Carro). Esta significa progresso,direção, ou seja, há desenolvimento favorecido pela força mística. Carta vitoriosa.");
                break;
			case 8:
            	sprintf(cartas[i].significado, "A Força:Coragem, conquista, estabilidade. Resumindo, tudo de bom que o consulente precisará .");
                break;
			case 9:
            	sprintf(cartas[i].significado, "O Eremita: tenha paciência e bastante observação, haverá progresso, mas a longo prazo.");
                break;
            case 10:
            	sprintf(cartas[i].significado, "Roda Da Fortuna:É uma carta que tem a ideia de que a vida tem altos e baixos,ou seja, instabilidade e reviravoltas, mudanças(podem ser boas ou não).");
                break;
            case 11:
            	sprintf(cartas[i].significado, "Justiça: Uma necessidade de tomar decições na base da razão e cautela, tomar bastante cuidado pela lei de causa e efeito.");
                break;
            case 12:
            	sprintf(cartas[i].significado, "O Enforcado: Impossibilidades, ineficácia e...sacrifícios.Muitos obstáculos mesmo.");
                break;
            case 13:
            	sprintf(cartas[i].significado, "A Morte:Está entre a transformação, desapego e o sorfimento, mudanças radicais virão, e podem não ser ruins(a longo prazo).");
                break;
            case 14:
            	sprintf(cartas[i].significado, "A Temperança:Indica trégua e harmonia diante de conflitos e proteção espiritual mas...há um pouco de inércia.");
                break;
            case 15:
            	sprintf(cartas[i].significado, "O Diabo:Significa poder, domínio, ambição. Há sucesso, porém insatisfatório. Há influência de desejos alheios.");
                break;
            case 16:
            	sprintf(cartas[i].significado, "A Torre: uma das cartas mais temidas dos arcanos maiores. Há perigo, perda e rompimento, momentos difícies virão, muita dor no caminho.");
                break;
            case 17:
            	sprintf(cartas[i].significado, "A Estrela:Indica tranquilidade e superação, há muita esperança e forças superiores ajudarão no caminho; Prosperidade e alegria de sobra");
                break;
            case 18:
            	sprintf(cartas[i].significado, "A Lua: carta do autoconhecimento, obstáculos virão mas haverá sucesso com a lucidez do usuário.");
                break;
            case 19:
            	sprintf(cartas[i].significado, "O Sol: Alegria e otimismo acenam, caminhos super abertos e nenhum obstáculo.");
                break;
            case 20:
            	sprintf(cartas[i].significado, "Julgamento: significa momento de renovação,um despertar espiritual para avaliar suas ações passadas e considerar as consequências delas.");
                break;
            case 21:
            	sprintf(cartas[i].significado, "O Mundo: A carta da perfeição e do progresso, haverá mudanças naturais mas positivas");
                break;
            case 22:
            	sprintf(cartas[i].significado, "ÁS DE PAUS: Momento de muita segurança e sorte, há abundância e fertilidade");
                break;
            case 23:
            	sprintf(cartas[i].significado, "DOIS DE PAUS:Confronto nos projetos com fatos inesperados, mas o obstáculo é superável");
                break;
            case 24:
            	sprintf(cartas[i].significado, "TRES DE PAUS:Inovação, chance e oportunidade de conhecimento");
                break;
            case 25:
            	sprintf(cartas[i].significado, "QUATRO DE PAUS:Acordo e paz em meio a dificuldades, fase de reorganização.");
                break;
			case 26:
            	sprintf(cartas[i].significado, "CINCO DE PAUS:Superação das barreiras seguida de tranquilidade nos resultados,além de recuperação da sorte.");
                break;
            case 27:
            	sprintf(cartas[i].significado, "SEIS DE PAUS:Sugere favorecimento das metas e continuidade positiva dos projetos, além de autoconfiança.");
                break;
			case 28:
            	sprintf(cartas[i].significado, "SETE DE PAUS: vitória, vantagem e determinação, há capacidade de sobra pra enfrentar e superar todos os obstáculos.");
                break;
            case 29:
            	sprintf(cartas[i].significado, "OITO DE PAUS:término/oportunidade,uma mudança desejada.");
                break;
			case 30:
            	sprintf(cartas[i].significado, "NOVE DE PAUS: rivalidade, muita disputa e obstáculos transponíveis");
                break;
            case 31:
            	sprintf(cartas[i].significado, "DEZ DE PAUS: Redefinição nos planos e metas, um recomeço por esforço do usuário.");
                break;
            case 32:
            	sprintf(cartas[i].significado, "VALETE/PAJEM DE PAUS:Sinceridade e devoção,ato importante para o futuro, promessa .");
                break;
            case 33:
            	sprintf(cartas[i].significado, "CAVALEIRO DE PAUS: Bravura e ousadia, significa que  há superações e aberturas de novos caminhos.Chances novas.");
                break;
            case 34:
            	sprintf(cartas[i].significado, "RAINHA DE PAUS:Honra e verdade,há garantia de vantagens e reciprocidade.");
                break;
            case 35:
            	sprintf(cartas[i].significado, "REI DE PAUS:Indica progresso e fartura, a reorganização trará a paz e desenvolvimento de planos.");
                break;
            case 36:
            	sprintf(cartas[i].significado, "AS DE COPAS: Indica abundância e prazer, acordos serão bem-sucedidos e alívio de obstáculos.");
                break;
            case 37:
            	sprintf(cartas[i].significado, "DOIS DE COPAS:Cooperação e união, que acena tranquilidade e sucesso nos objetivos.Perspectiva positiva.");
                break;
            case 38:
            	sprintf(cartas[i].significado, "TRES DE COPAS:Paz e acordos, é a hora da busca da felicidade e do equilíbrio interior, pode ficar otimista.");
                break;
            case 39:
            	sprintf(cartas[i].significado, "QUATRO DE COPAS: Declínio, desânimo e desconfiança...Sugere ideias equivocadas e muitos sentimentos negativos.");
                break;
            case 40:
            	sprintf(cartas[i].significado, "CINCO DE COPAS: Mágoa, frustração, abandono.Muito arrependimento.Amargura...");
                break;
            case 41:
            	sprintf(cartas[i].significado, "SEIS DE COPAS: Recordação e lamentação, momento de nostalgia de situações pendentes.");
                break;
            case 42:
            	sprintf(cartas[i].significado, "SETE DE COPAS:Devaneio,vaidade negativa. Sugere que há imaginação destrutiva, sucesso ilusório e muitos erros.");
                break;
            case 43:
            	sprintf(cartas[i].significado, "OITO DE COPAS:Perda, desilusão e fracasso...Erro pessoal devido a esforços inúteis");
                break;
            case 44:
            	sprintf(cartas[i].significado, "NOVE DE COPAS:Felicidade,sorte e acordos, indica que há solução e harmonia diante os obstáculos, além de superação");
                break;
            case 45:
            	sprintf(cartas[i].significado, "DEZ DE COPAS:Progresso e riqueza,há realizações plenas e duradouras;Plenitude.");
                break;
            case 46:
            	sprintf(cartas[i].significado, "VALETE DE COPAS:Sinceridade e dedicação, indica harmonia em todos os caminhos e motivações bem-intencionadas");
                break;
            case 47:
            	sprintf(cartas[i].significado, "CAVALEIRO DE COPAS:Sedução, promessa e futilidade, ou seja, ilusão.");
                break;
            case 48:
            	sprintf(cartas[i].significado, "RAINHA DE COPAS: Preservação do desejo, mas sem progresso no presente,tenha paciência.");
                break;
            case 49:
            	sprintf(cartas[i].significado, "REI DE COPAS:Progresso, felicidade e vaidade; Há autoconfiança frente a obstáculos e ao caos. Capacidade e fé.");
                break;
            case 50:
            	sprintf(cartas[i].significado, "AS DE ESPADAS: Poder, força e ação; Sugere a capacidade de gerenciar esses planos, com conquista e persuasão nítidas.");
                break;
            case 51:
            	sprintf(cartas[i].significado, "DOIS DE ESPADAS: disputa acirrada, luta. Indica momento difícil, com muito obstáculo e discórdia");
                break;
            case 52:
            	sprintf(cartas[i].significado, "TRES DE ESPADAS: Dor, sofrimento e decepção...Sugere o fracasso por mentiras e incapacidade de administrar");
                break;
            case 53:
            	sprintf(cartas[i].significado, "QUATRO DE ESPADAS: Adiamento/inércia. Acena a imbolização de planos.");
                break;
            case 54:
            	sprintf(cartas[i].significado, "CINCO DE ESPADAS:Engano e fracasso. Há desperdício de tempo nesse plano e nenhuma ação... Desequilíbrio para resultados ruins");
                break;
            case 55:
            	sprintf(cartas[i].significado, "SEIS DE ESPADAS:Ausência e hesitação, que indicam imaturidade e falta de reflexão nos projetos. Sem futuro positivo");
                break;
            case 56:
            	sprintf(cartas[i].significado, "SETE DE ESPADAS: Cautela, astúcia e empenho. Há possibilidade e esperança de conquistas, a diplomacia é importante");
                break;
            case 57:
            	sprintf(cartas[i].significado, "OITO DE ESPADAS: Conflito, fracasso e erros. Há perigo iminente e esforço inútil.");
                break;
            case 58:
            	sprintf(cartas[i].significado, "NOVE DE ESPADAS:Desespero, lágrimas e aflição, sugere a perda irreparável ou abandono dos planos/projetos.");
                break;
            case 59:
            	sprintf(cartas[i].significado, "10 DE ESPADAS: Término definitivo, mas solução e renovação dos planos. Mas resultaria no fim de problemas e da dor");
                break;
            case 60:
            	sprintf(cartas[i].significado, "VALETE DE ESPADAS: Intriga,erro e imaturidade. O usuário não possui tanta visão desses planos e há curiosidade fútil.");
                break;
            case 61:
            	sprintf(cartas[i].significado, "CAVALEIRO DE ESPADAS: Bravura,indica perspicácia que levará ao sucesso desejado");
                break;
            case 62:
            	sprintf(cartas[i].significado, "RAINHA DE ESPADAS: Intolerância e frieza, sugere egoísmo e obsessão do usuário, além de isolamento.");
                break;
            case 63:
            	sprintf(cartas[i].significado, "REI DE ESPADAS: Domínio e vitória em qualquer situação desse rumo, com boa estratégia,é claro.");
                break;
            case 64:
            	sprintf(cartas[i].significado, "AS DE OUROS:Abundância, sorte e satisfação. Sugere equilíbrio e caminhos muito bem abertos para o que se deseja");
                break;
            case 65:
            	sprintf(cartas[i].significado, "DOIS DE OUROS: Impasse e adiamento, serão obstáculos resolvidos em breve, mas necessário um acordo ou divisão de ideias");
                break;
            case 66:
            	sprintf(cartas[i].significado, "TRES DE OUROS: Abertura, construção e expansão, ou seja, tudo se movimentará de forma positiva");
                break;
            case 67:
            	sprintf(cartas[i].significado, "QUATRO DE OUROS: Limitação e retenção, que indica incapacidade de compartilhar, alguma situação em posse. Não haverá desenvolvimento");
                break;
            case 68:
            	sprintf(cartas[i].significado, "CINCO DE OUROS: Desperdício e prejuízo em planos e na ação, enfraquecimento do poder e harmonia do usuário");
                break;
            case 69:
            	sprintf(cartas[i].significado, " SEIS DE OUROS: Indecisão,indica que apenas o usuário pode gerir as escolhas, mas há a falta de perspectiva pessoal");
                break;
            case 70:
            	sprintf(cartas[i].significado, "SETE DE OUROS: Equilibrio e expansão, um grande periodo de sorte e boas chances nesse rumo");
                break;
            case 71:
            	sprintf(cartas[i].significado, "OITO DE OUROS:Oportunidade e aprendizado, acena esforços com grandes resultados, há sorte");
                break;
            case 72:
            	sprintf(cartas[i].significado, "NOVE DE OUROS:Satisfação, conforto e segurança. Indica recuperação e recompensa para o usuário");
                break;
		    case 73:
            	sprintf(cartas[i].significado, "DEZ DE OUROS:Solução e progresso, ou seja, harmonia e realização dos planos, além de glória nos resultados.");
                break;
            case 74:
            	sprintf(cartas[i].significado, "VALETE DE OUROS: Significa caminhos abertos e a possibilidade de realização em breve, com capacidade e investigação.");
                break;
			case 75:
            	sprintf(cartas[i].significado, "CAVALEIRO DE OUROS:Trabalho e perseverança, que acena a praticidade na vitória,muita resistência para chegar ao resultado");
                break;
			case 76:
            	sprintf(cartas[i].significado, "RAINHA DE OUROS: Autoridade e bem-estar,que pode significar um certo esforço que mantém o plano sob controle, haverá realização e conservação ");
                break;
			case 77:
                sprintf(cartas[i].significado, "REI DE OUROS: segurança, desenvolvimento e autoridade, que podem indicar pleno poder sobre o destino ");
                break;
            default:
                sprintf(cartas[i].significado, "Significado não encontrado.");
                break;
        }

        // Imprimindo a carta de tarô e seu significado correspondente
        printf("\nCarta %d: %s\n", i + 1, cartas[i].nomeCarta);
        printf("Significado: %s\n", cartas[i].significado);
    }

    // Solicitando comentários do usuário
    printf("\nVocê pode comentar algo sobre as cartas de tarô ou fazer outras perguntas? (S/N): ");
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's') {
    printf("\nÓtimo! Por favor, faça suas perguntas ou comentários.\n");

    // Loop para processar várias perguntas ou comentários
    do {
        char perguntaComentario[200];
        printf("Digite sua pergunta ou comentário: ");
        scanf(" %[^\n]s", perguntaComentario);

        printf("Obrigado pelo seu questionamento/comentário!\n");

        printf("\nVocê deseja fazer mais perguntas ou comentários? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');
} else {
    printf("\nObrigado por usar o meu programa, lembre-se que o tarô não vê o futuro definitivo, e sim o rumo que pode tomar e as energias indicadas,além de sua interpretação do contexto pessoal diante dos significados das cartas\n");
}


    return 0;
}

