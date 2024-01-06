1)Nel file entropia.c implementare la definizione della funzione:

    extern double entropia(const double *v, size_t n);

La funzione riceve in input un puntatore a un vettore che contiene n elementi di tipo double, dove l'elemento di indice i rappresenta la probabilità P(i)P(i) che una sorgente XX emetta il valore ii.

La funzione deve restituire l'entropia EE della sorgente, ottenuta come:

E=−∑i=0n−1P(i)log⁡2P(i)E=−i=0∑n−1​P(i)log2​P(i)

Eventuali probabilità nulle non devono essere considerate nel calcolo dell'entropia.

Se v è NULL, n=0, o tutti gli elementi di v sono uguali a zero, la funzione restituisce 0.

2)Creare i file rle.h e rle.c che consentano di utilizzare la funzione:

    extern bool easy_rle_decode(const char* nomefilein, const char* nomefileout);

La funzione accetta come parametro un nome di file di input (stringa C zero terminata) da aprire in modalità lettura non tradotta (binario) e un nome di file di output (stringa C zero terminata) da aprire in modalità scrittura non tradotta (binario).

Il file di input è codificato con coppie di byte (n,c), il primo dei quali è con un numero intero senza segno. In output ogni coppia deve produrre n+1 volte il byte c.

Ad esempio, dato il file seguente (visto come in un editor esadecimale):


    Offset(h) 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
    00000000  00 61 01 62 02 63                                .a.b.c


il file di output dovrebbe contenere

    abbccc

La funzione ritorna false se non riesce ad aprire il file di input o di output.

3)Nel file sottrai_stringhe.c implementare la definizione della funzione:

    extern char *sottrai_stringhe(const char *a, const char *b);

La funzione riceve in input due puntatori a due stringhe C a e b, ciascuna delle quali contiene la rappresentazione ASCII in base 10 di un numero naturale composto da una quantità variabile di cifre, anche molto elevata.

La funzione deve restituire una stringa C che rappresenta la differenza tra a e b. Il risultato non deve contenere zeri superflui prima della cifra più significativa.

Ad esempio, con a = "12345" e b = "12300" la funzione deve restituire la stringa "45". Con a = "12345" e b = "4999", la funzione deve restituire la stringa "7346".

Il valore rappresentato da a sarà sempre maggiore o uguale a quello rappresentato da b.
Se a e b rappresentano lo stesso numero, la funzione restituisce "0".
Se a o b valgono NULL, la funzione restituisce NULL.
Le stringhe di input saranno sempre correttamente formattate.

