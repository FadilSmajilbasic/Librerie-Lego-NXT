1. [Introduzione](#introduzione)

  - [Informazioni sul progetto](#informazioni-sul-progetto)

  - [Abstract](#abstract)

  - [Scopo](#scopo)

2. [Analisi](#analisi)

  - [Analisi del dominio](#analisi-del-dominio)
  
  - [Analisi dei mezzi](#analisi-dei-mezzi)

  - [Analisi e specifica dei requisiti](#analisi-e-specifica-dei-requisiti)

  - [Use case](#use-case)

  - [Pianificazione](#pianificazione)

3. [Progettazione](#progettazione)

  - [Design dell’architettura del sistema](#design-dell’architettura-del-sistema)

  - [Design dei dati e database](#design-dei-dati-e-database)

4. [Implementazione](#implementazione)

5. [Test](#test)

  - [Protocollo di test](#protocollo-di-test)

  - [Risultati test](#risultati-test)

  - [Mancanze/limitazioni conosciute](#mancanze/limitazioni-conosciute)

6. [Consuntivo](#consuntivo)

7. [Conclusioni](#conclusioni)

  - [Sviluppi futuri](#sviluppi-futuri)

  - [Considerazioni personali](#considerazioni-personali)

8. [Sitografia](#sitografia)

9. [Allegati](#allegati)


## Introduzione

### Informazioni sul progetto

  Il progetto sarà gestito e realizzato dall’allievo Luca Di Bello e Fadil Smajlbasic (studenti di informatica all’Arti e Mestieri di Trevano) sotto la supervisione del professor Luca Muggiasca, Adriano Barchi, Francesco Mussi e dalla professoressa Elisa Nannini.
  La realizzazione del progetto prenderà piede il 16 novembre 2018 (16/11/18) e dovrà essere consegnato entro il <INSERIRE DATA DI CONSEGNA>


### Abstract

 In this document we will describe how we made a library for the Lego Mindstorms NXT. The library needed to be simple to use. Before our solution the users needed to use the IDE provided by Lego, and use the graphical interface whitch makes even a simple line follower a frustrating operation of needing to use the drag and drop function of the “Lego programming blocks”. We were tasked to make the process simpler creating a library with some useful functions for the various input-output interfaces (buttons, gyros, ultrasonic sensors, motors, ecc.) that the NXT has to offer, furthermore it uses the standard coding format that a lot of programming languages use since it derives from C. We had two languages to write the library: The first was Java and the second is RobotC. Based on the execution time and the efficiency we had to choose one or the other and motivate the choice. With the help of this library an average student should be able to do basic programs for the Lego NXT without any problems.

### Scopo

  Lo scopo del progetto è di creare due librerie (una in Java ed una in RobotC) da utilizzare per la programmazione del blocchetto NXT ed EV3. Lo scopo di queste librerie è il rendere la programmazione del robot lego più semplice aggiungendo delle funzionalità tipiche per ogni sensore del robot. Questo permette di salvare molto tempo nel processo di implementazione del codice.


## Analisi

### Analisi del dominio

  In questo momento i blocchetti NXT ed EV3 vengono programmati tramite il programma grafico chiamato “Lego Mindstorms”, esso non necessita nessuna conoscenza di linguaggi per essere utilizzato dato che utilizza una programmazione grafica e non testuale. Essendo molto semplice la programmazione in quel modo si perdono diverse funzionalità che si possono riottenere cambiando approccio, quindi passando alla programmazione nuda e cruda. Essa può essere svolta con due linguaggi principali: Java e RobotC (un adattamento del linguaggio C).
Gli alunni che utilizzano i robot Lego non hanno mai programmato i blocchetti in un altro linguaggio, ma dispongono delle limitate conoscenze del linguaggio Java. 


### Analisi e specifica dei requisiti

  Il committente necessita di due librerie (una scritta in Java ed una scritta in RobotC). Il loro scopo è quello di semplificare il processo di programmazione dei robot della lego (sia NXT che EV3), esse devono comprendere dei metodi user-friendly, quindi che vengono richiamati e funzionano senza nessun bisogno di una programmazione aggiuntiva da parte dell'utilizzatore. Oltre alle libreria il committente necessita anche di una guida cartacea che spiega il processo di installazione dei firmware per far interagire le nostre librerie con il blocchetto.
  Per usufruire semplificazioni del codice che offre il nostro prodotto bisogna soltanto importare la libreria (indipendentemente dal linguaggio). Essa conterrà degli oggetti, tramite i quali sarà possibile accedere a delle funzioni prefabbricate. Questo perchè l'obbiettivo del nostro lavoro è di creare un prodotto plug-and-play, il quale non necessita molte conoscenze di programmazione per essere utilizzato. L'utente quindi dovrà interagire minimamente con il codice, l'unica cosa che dovrà fare è creare un algoritmo utilizzando le funzioni già scritte all'interno della libreria, quindi non fa altro che fare un collage di funzioni al fine di raggiungere un algoritmo che svolge un azione desiderata.
  Entrambe le librerie saranno in grado di fare le stesse determinate cose, l'unica differenza tra di loro sono le prestazioni: Java essendo un linguaggio interpretato sarà molto più lento rispetto al linguaggio RobotC.

  <b style="color:red">DA FARE LA SPECIFICA DEI REQUISITI</b>

  |ID  |REQ-001                                         |
  |----|------------------------------------------------|
  |**Nome**    |Creazione interfaccia |
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |**Note**    |Si necessitano i permessi di root / Dipende dal requisito REQ-001 (Creazione DB)|
  |            |**Sotto requisiti**|
  |**001**      | Si necessita una maschera di login|
  |**002**      | Si dovranno poter immettere nuovi allievi|
  |**003**      | Dovrà essere possibile la ricerca di allievi|

  

**Spiegazione elementi tabella dei requisiti:**

**ID**: identificativo univoco del requisito

**Nome**: breve descrizione del requisito

**Priorità**: indica l’importanza di un requisito nell’insieme del
progetto, definita assieme al committente. Ad esempio poter disporre di
report con colonne di colori diversi ha priorità minore rispetto al
fatto di avere un database con gli elementi al suo interno. Solitamente
si definiscono al massimo di 2-3 livelli di priorità.

**Versione**: indica la versione del requisito. Ogni modifica del
requisito avrà una versione aggiornata.

Sulla documentazione apparirà solamente l’ultima versione, mentre le
vecchie dovranno essere inserite nei diari.

**Note**: eventuali osservazioni importanti o riferimenti ad altri
requisiti.

**Sotto requisiti**: elementi che compongono il requisito.

### Pianificazione

Prima di stabilire una pianificazione bisogna avere almeno una vaga idea
del modello di sviluppo che si intende adottare. In questa sezione
bisognerà inserire il modello concettuale di sviluppo che si seguirà
durante il progetto. Gli elementi di riferimento per una buona
pianificazione derivano da una scomposizione top-down della problematica
del progetto.

La pianificazione può essere rappresentata mediante un diagramma di
Gantt.

Se si usano altri metodi di pianificazione (es scrum), dovranno apparire
in questo capitolo.

### Analisi dei mezzi

Per la realizzazione della libreria nel linguaggio RobotC useremo l'IDE di RobotC (v4.56) con la licenza fornita dalla scuola.
Per la realizzazione della libreria nel linguaggio Java useremo l'IDE NetBeans (v8.2).
Il prodotto

Elencare e *descrivere* i mezzi disponibili per la realizzazione del
progetto. Ricordarsi di sempre descrivere nel dettaglio le versioni e il
modello di riferimento.

SDK, librerie, tools utilizzati per la realizzazione del progetto e
eventuali dipendenze.

Su quale piattaforma dovrà essere eseguito il prodotto? Che hardware
particolare è coinvolto nel progetto? Che particolarità e limitazioni
presenta? Che hw sarà disponibile durante lo sviluppo?

## Progettazione

Questo capitolo descrive esaustivamente come deve essere realizzato il
prodotto fin nei suoi dettagli. Una buona progettazione permette
all’esecutore di evitare fraintendimenti e imprecisioni
nell’implementazione del prodotto.

### Design dell’architettura del sistema

Descrive:

-   La struttura del programma/sistema lo schema di rete...

-   Gli oggetti/moduli/componenti che lo compongono.

-   I flussi di informazione in ingresso ed in uscita e le
    relative elaborazioni. Può utilizzare *diagrammi di flusso dei
    dati* (DFD).

-   Eventuale sitemap

### Design dei dati e database

Descrizione delle strutture di dati utilizzate dal programma in base
agli attributi e le relazioni degli oggetti in uso.

### Schema E-R, schema logico e descrizione.

Se il diagramma E-R viene modificato, sulla doc dovrà apparire l’ultima
versione, mentre le vecchie saranno sui diari.

### Design delle interfacce

Descrizione delle interfacce interne ed esterne del sistema e
dell’interfaccia utente. La progettazione delle interfacce è basata
sulle informazioni ricavate durante la fase di analisi e realizzata
tramite mockups.

### Design procedurale

Descrive i concetti dettagliati dell’architettura/sviluppo utilizzando
ad esempio:

-   Diagrammi di flusso e Nassi.

-   Tabelle.

-   Classi e metodi.

-   Tabelle di routing

-   Diritti di accesso a condivisioni …

Questi documenti permetteranno di rappresentare i dettagli procedurali
per la realizzazione del prodotto.

## Implementazione

In questo capitolo dovrà essere mostrato come è stato realizzato il
lavoro. Questa parte può differenziarsi dalla progettazione in quanto il
risultato ottenuto non per forza può essere come era stato progettato.

Sulla base di queste informazioni il lavoro svolto dovrà essere
riproducibile.

In questa parte è richiesto l’inserimento di codice sorgente/print
screen di maschere solamente per quei passaggi particolarmente
significativi e/o critici.

Inoltre dovranno essere descritte eventuali varianti di soluzione o
scelte di prodotti con motivazione delle scelte.

Non deve apparire nessuna forma di guida d’uso di librerie o di
componenti utilizzati. Eventualmente questa va allegata.

Per eventuali dettagli si possono inserire riferimenti ai diari.

## Test

### Protocollo di test

Definire in modo accurato tutti i test che devono essere realizzati per
garantire l’adempimento delle richieste formulate nei requisiti. I test
fungono da garanzia di qualità del prodotto. Ogni test deve essere
ripetibile alle stesse condizioni.


|Test Case      | TC-001                               |
|---------------|--------------------------------------|
|**Nome**       |Import a card, but not shown with the GUI |
|**Riferimento**|REQ-012                               |
|**Descrizione**|Import a card with KIC, KID and KIK keys with no obfuscation, but not shown with the GUI |
|**Prerequisiti**|Store on local PC: Profile\_1.2.001.xml (appendix n\_n) and Cards\_1.2.001.txt (appendix n\_n) |
|**Procedura**     | - Go to “Cards manager” menu, in main page click “Import Profiles” link, Select the “1.2.001.xml” file, Import the Profile - Go to “Cards manager” menu, in main page click “Import Cards” link, Select the “1.2.001.txt” file, Delete the cards, Select the “1.2.001.txt” file, Import the cards |
|**Risultati attesi** |Keys visible in the DB (OtaCardKey) but not visible in the GUI (Card details) |


### Risultati test

Tabella riassuntiva in cui si inseriscono i test riusciti e non del
prodotto finale. Se un test non riesce e viene corretto l’errore, questo
dovrà risultare nel documento finale come riuscito (la procedura della
correzione apparirà nel diario), altrimenti dovrà essere descritto
l’errore con eventuali ipotesi di correzione.

### Mancanze/limitazioni conosciute

Descrizione con motivazione di eventuali elementi mancanti o non
completamente implementati, al di fuori dei test case. Non devono essere
riportati gli errori e i problemi riscontrati e poi risolti durante il
progetto.

## Consuntivo

Consuntivo del tempo di lavoro effettivo e considerazioni riguardo le
differenze rispetto alla pianificazione (cap 1.7) (ad esempio Gannt
consuntivo).

## Conclusioni

Quali sono le implicazioni della mia soluzione? Che impatto avrà?
Cambierà il mondo? È un successo importante? È solo un’aggiunta
marginale o è semplicemente servita per scoprire che questo percorso è
stato una perdita di tempo? I risultati ottenuti sono generali,
facilmente generalizzabili o sono specifici di un caso particolare? ecc

### Sviluppi futuri
  Migliorie o estensioni che possono essere sviluppate sul prodotto.

### Considerazioni personali
  Cosa ho imparato in questo progetto? ecc

### Sitografia

1.  URL del sito (se troppo lungo solo dominio, evt completo nel
    diario),

2.  Eventuale titolo della pagina (in italico),

3.  Data di consultazione (GG-MM-AAAA).

**Esempio:**

-   http://standards.ieee.org/guides/style/section7.html, *IEEE
    Standards Style Manual*, 07-06-2008.

## Allegati

Elenco degli allegati, esempio:

-   Diari di lavoro

-   Codici sorgente/documentazione macchine virtuali

-   Istruzioni di installazione del prodotto (con credenziali
    di accesso) e/o di eventuali prodotti terzi

-   Documentazione di prodotti di terzi

-   Eventuali guide utente / Manuali di utilizzo

-   Mandato e/o Qdc

-   Prodotto

-   …
