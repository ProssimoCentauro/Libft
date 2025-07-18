/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applausi_per_fibra.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:11:24 by rtodaro           #+#    #+#             */
/*   Updated: 2025/07/18 16:40:38 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	applausi_per_fibra(void)
{
	const char *versi[] = {
		"Oh, io non capisco perché ma ogni periodo c'è qualcuno che\n",
		"Se ne viene fuori dicendo che io sono morto\n",
		"Raga, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi, applausi per\n",
		"Io mangiavo lucertole aperte da ragazzino\n",
		"Tornavo a casa e vomitavo in mezzo al giardino\n",
		"Non ho mai smesso un giorno di fantasticare\n",
		"Non ho mai fatto grandi successi in generale\n",
		"Guardando gli altri mi sembravano così lontani\n",
		"Chiedendomi se a casa loro volassero i divani\n",
		"L'ultima volta che mio padre è andato a letto con mia madre\n",
		"Prese a calci una parete e in testa gli cadde una trave\n",
		"E mio fratello che mi chiese quanto fosse grave\n",
		"Fatto sta che litigando si divisero le strade\n",
		"Anche se restano le urla e rimangono le grida\n",
		"Per casa, per strada, raga\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi, applausi per\n",
		"Ho perso la testa troppe volte da ragazzino\n",
		"A ogni flash mi nascondevo in uno stanzino\n",
		"Ho ancora qualche problema a socializzare\n",
		"Ma tutto sommato non diresti che sto andando male\n",
		"Questo è Fibra, Fibra, l'anno scorso dove andava?\n",
		"Posso dire una cazzata? Mi son ripulito, raga\n",
		"Non c'è stata mai una strada da seguire in qualche modo\n",
		"Che sfiga, Sfiga\n",
		"È Fabri Fibra\n",
		"Hai comprato il mio CD e lo canti tutto a memoria\n",
		"È uno scandalo quando poi l'hai copiato a metà scuola\n",
		"Questo è il mio passaparola, questo è l'anno \"Abbasso Vibra\"\n",
		"Doppia F è la mia sigla, raga\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi, applausi per\n",
		"Ora, se tu hai seguito il mio percorso come se fosse un concorso\n",
		"Allora fai l'ultimo sforzo e chiediti il perché\n",
		"È sempre il solito discorso, ogni mattina col rimorso\n",
		"Almeno pagami il rimborso e vaffanculo anche a te\n",
		"Io non voglio Fibra in giro\n",
		"Non voglio Fibra ai party\n",
		"Non voglio chi ha successo, non voglio quattro infarti\n",
		"Non voglio far del bene perché tu non vuoi bene\n",
		"Non si può stare insieme se m'ingorghi le vene\n",
		"Non domandarti come passano i giorni e le notti\n",
		"Non guardi mamma mentre piange e lacrima dagli occhi\n",
		"Cambio lavoro, cambio casa, cambio figa\n",
		"Cambio le amicizie, che sfiga\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi\n",
		"Applausi per Fibra, Fibra, Fibra, Fibra, Fibra\n",
		"Applausi, applausi, applausi per\n",
		"(Bum bum cha, Fibra, bum bum cha cha\n",
		"Applausi per la F-I, la B, la R-A\n",
		"Bum bum cha, Fibra, bum bum cha cha\n",
		"Applausi per la F-I, la B, la R-A\n",
		"Bum bum cha, Fibra, bum bum cha\n",
		"Applausi per la F-I, la B, la R-A\n",
		"Bum bum bum cha, Fibra, bum bum cha\n",
		"Appla-applausi per la F-I, la B, la R-A)\n",
		"Ciao, questa è la mia segreteria telefonica\n",
		"Al momento non ci sono\n",
		"Sì, al momento non ci sono\n",
		"Comunque lasciate un messaggio dopo il segnale e vi richiamo\n",
		"Beep\n",
		"Oh, bella Fibra, Ascolta\n",
		"Sono, una persona, no\n",
		"Fibra, stai attento, ai testi\n",
		"Beep\n",
		"Cazzo, sto parlando da solo\n",
		"Io parlo da solo\n",
		NULL
	};

	int	i = 0;
	while (versi[i])
		ft_putstr_fd((char *)versi[i++], 1);
}

