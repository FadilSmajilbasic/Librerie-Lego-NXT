1. [Introduzione](#introduzione)

  - [Informazioni sul progetto](#informazioni-sul-progetto)

  - [Abstract](#abstract)

  - [Scopo](#scopo)

2. [Analisi](#analisi)

  - [Analisi del dominio](#analisi-del-dominio)

  - [Analisi dei mezzi](#analisi-dei-mezzi)

  - [Analisi e specifica dei requisiti](#analisi-e-specifica-dei-requisiti)

  - [Pianificazione](#pianificazione)

3. [Progettazione](#progettazione)

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
  La realizzazione del progetto prenderà piede il 16 novembre 2018 (16/11/18) e dovrà essere consegnato entro il 25.01.19

### Abstract

  In this document we will describe how we made a library for the Lego Mindstorms NXT. The library needed to be simple to use. Before our solution the users needed to use the IDE provided by Lego, and use the graphical interface whitch makes even a simple line follower a frustrating operation of needing to use the drag and drop function of the “Lego programming blocks”. We were tasked to make the process simpler creating a library with some useful functions for the various input-output interfaces (buttons, ultrasonic sensors, motors, ecc.) that the NXT has to offer, furthermore it uses the standard coding format that a lot of programming languages use since it derives from C. We had the RobotC language to write the library. With the help of this library an average student should be able to do basic programs for the Lego NXT without any problems.

### Scopo

  Lo scopo del progetto è di creare delle librerie da utilizzare per la programmazione del blocchetto NXT. Lo scopo di questa libreria è rendere la programmazione del robot lego più semplice ed efficace aggiungendo delle funzionalità tipiche per ogni sensore del robot. Questo permette di salvare molto tempo nel processo di implementazione del codice.

## Analisi

### Analisi del dominio

  In questo momento il blocchetto NXT viene programmato tramite il programma grafico chiamato “Lego Mindstorms”, esso non necessita alcuna conoscenza di linguaggi di programmazione per essere utilizzato, questo perchè utilizza una programmazione grafica e non testuale.
  Essendo molto semplice la programmazione grafica si perdono diverse funzionalità che si possono riottenere cambiando approccio, e quindi passando alla programmazione nuda e cruda. Essa può essere svolta con il lunguaggio *RobotC*.
  Gli alunni che utilizzano i robot Lego non hanno mai programmato i blocchetti in un linguaggio differente da quello grafico, ma dispongono delle limitate conoscenze del linguaggio Java.

### Analisi e specifica dei requisiti

  Il committente necessita di una libreria scritta nel linguaggio *RobotC* il quale scopo è quello di semplificare il processo di programmazione dei robot NXT della Lego. Esse devono comprendere dei metodi user-friendly (quindi che vengono richiamati e funzionano senza nessun bisogno di una programmazione aggiuntiva da parte dell'utilizzatore). Oltre alle libreria il committente necessita anche di una guida cartacea che spiega il processo di installazione dei firmware per far interagire la nostra libreria con il blocchetto.
  Per poter usufruire delle semplificazioni del codice che offre il nostro prodotto bisogna soltanto importare la libreria nel proprio file. Essa conterrà delle funzioni che svolgono delle funzioni prefabbricate. L'obbiettivo del nostro lavoro è di creare un prodotto plug-and-play, il quale non necessita molte conoscenze di programmazione per essere utilizzato. L'utente quindi dovrà interagire in modo minimo con il codice, l'unica cosa che dovrà fare è creare un algoritmo utilizzando le funzioni già scritte all'interno della nostra libreria, quindi non fa altro che fare un collage di funzioni al fine di raggiungere un algoritmo che svolge una/delle azioni desiderate.

  |ID  |REQ-001                                         |
  |----|------------------------------------------------|
  |**Nome**    |Libreria in RobotC|
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |            |**Sotto requisiti**|
  |**001**      | Classe per l'utilizzo semplificato dei motori|
  |**002**      | Classe che implementa tutti i tipi di wait presenti in Lego MindStorms|
  |**003**      | Codice ben commentato (Inglese o Italiano)|

  |ID  |REQ-002                                         |
  |----|------------------------------------------------|
  |**Nome**    |Guide d'utilizzo |
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |**Note**    | Da consegnare alla fine del progetto in allegato alla documentazione|
  |            |**Sotto requisiti**|
  |**001**      | Guida all'installazione dei firmware sul blocchetto|
  |**002**      | Guida che istruisce l'utente all'utilizzo del blocchetto|

  |ID  |REQ-003                                         |
  |----|------------------------------------------------|
  |**Nome**    | Verifica funzionamento sensori e attuatori |
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |            |**Sotto requisiti**|
  |**001**      | Controllare che tutti i sensori ed attuatori funzionino correttamente|
  |**002**      | Controllare che ci siano 6 cavi per collegare i sensori/attuatori al blocchetto|

  |ID  |REQ-004                                        |
  |----|------------------------------------------------|
  |**Nome**    | Programma di esempio |
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |            |**Sotto requisiti**|
  |**001**      | Explorer con 4 sensori (Ultrasuoni, due touch, un sensore di luce)|

### Pianificazione

![gantt](img/preventivo.png)

### Analisi dei mezzi

Per la realizzazione della libreria nel linguaggio RobotC useremo l'IDE di RobotC (v4.56) con la licenza fornita dalla scuola.
Il prodotto verrà utilizzato dagli sviluppatori per programmare i loro algoritmi.
La nostra soluzione verrà svulippata e testata utilizzando un Lego NXT.
Per la comunicazione tra il pc è il blochettto lego abbiamo bisogno di un driver trovabile sul sito ufficiale di Lego, esso è chiamato *NXT Fantom Drivers v120*.

Lista delle specifiche tecniche dei computer sui quali è stato realizzato l'intero progetto:
<ol>
  <li>
    Specifiche computer di Luca:
    <ul>
      <li>Nome: Portatile Asus gl702vm</li>
      <li>CPU: I7-7700HQ</li>
      <li>GPU: Nvidia GTX 1060 6GB</li>
      <li>RAM: 16GB</li>
      <li>OS: Windows 10 Home 64 bit</li>
    </ul>
  </li>
  <li>
  Specifiche computer di Fadil:
  <ul>
    <li>Nome: Portatile HP Pavilion cs0800nz</li>
    <li>CPU: I7-8550U</li>
    <li>GPU: Intel UHD Graphics 620</li>
    <li>RAM: 16GB</li>
    <li>OS: Windows 10 Home 64 bit</li>
  </ul>
  </li>
</ol>

## Progettazione

### Design dei dati e database

Nell'immagine sottostante è raffigurato il diagramma UML raffigurante la struttura delle varie classi che abbiamo utilizzato per lo sviluppo della libreria:

![Diagramma delle classi](img/Classes.png)

## Implementazione

<!-- In questo capitolo dovrà essere mostrato come è stato realizzato il
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

Per eventuali dettagli si possono inserire riferimenti ai diari. -->

Nella nostra implementazione abbiamo creato due librerie separate, la SimpleWaitLib che è utile per l'utilizzio dei sensori e la SimpleMotorLib che è utile per l'utilizzo dei motori.

Questo è il codice della libreria SimpleWaitLib, essa contiente tutti i metodi richiesti per operare i sensori dell'NXT:

```codice Simple wait lib```

Questo è il codice della libreria SimpleMotorLib questa ilbreria contine i metodi per operari i sensori in segenti modi: numero delle rotazioni, gradi, secondi, a massima potenza, :

```codice Simple motor lib```

#### Explorer

Per mostrare un utilizzo della nosta libreria svuluppata abbiamo creato un programma d'esempio "Explorer" che va in giro a esplorare il teritorio.

##### Il diagramma di flusso del programma:

![DiagrammaDiFlussoExplorer](img/DiagrammaDiFlussoExplorer.png)

## Test

### Protocollo di test

Definire in modo accurato tutti i test che devono essere realizzati per
garantire l’adempimento delle richieste formulate nei requisiti. I test
fungono da garanzia di qualità del prodotto. Ogni test deve essere
ripetibile alle stesse condizioni.


|Test Case      | TC-001                               |
|---------------|--------------------------------------|
|**Nome**       |Test metodo wait della libreria SimpleWaitLib|
|**Riferimento**|                              |
|**Descrizione**|Verificare la giusta funzionalità del metodo *wait* della libreria SimpleWaitLib |
|**Prerequisiti**| Implementazione del metodo wait terminata |
|**Procedura**     | - Creare un file di test (es: `test.c`) <br> - Inserire il riferimento alla libreria tramite `#include SimpleWaitLib.h` <br> - Inserire, compilare ed eseguire il seguente codice: <br> `goMotor(127, motorA);`<br> `wait(5);` <br> `stopMotor(motorA);` <br> `wait(5);` |
|**Risultati attesi** | Il motore va a massima velocità per 5 secondi dopodichè si ferma ed aspetta per 5 secondi prima di arrestare il programma.|

|Test Case      | TC-002                            |
|---------------|--------------------------------------|
|**Nome**       |Test sensori e attuatori |
|**Riferimento**|REQ-003                               |
|**Descrizione**|Controllare i valori letti dai sensori ed attuatori per garantirne il corretto funzionamento |
|**Procedura**     | - Accendere il blocchetto NXT <br> - Navigare tramite i relativi tasti nel menu principale e selezionare l'opzione *View* <br> - Controllare il corretto funzionamento di ogni sensore ed attuatore |
|**Risultati attesi** | Valori validi e sensati da tutti i sensori ed attuatori. La velocità ed i tick dei motori devono essere realistici.  |

|Test Case      | TC-002                        |
|---------------|--------------------------------------|
|**Nome**       |Test metodi libreria SimpleWaitLib: metodo *wait(float time)*|
|**Riferimento**| REQ-001                          |
|**Descrizione**|Verificare la giusta funzionalità del metodo *wait(float time)* della libreria SimpleWaitLib |
|**Prerequisiti**| Finire di scrivere la libreria |
|**Procedura**     | - Creare un file di test <br> - Inserire il riferimento alla libreria con `#include "SimpleWaitLib.h"` <br> - eseguire il seguente pezzo di codice: <br> `goMotor(127, motorA);`<br> `wait(5);` <br> `stopMotor(motorA);` <br> `wait(5);` |
|**Risultati attesi** | Il motore va a massima potenza per 5 secondi dopodichè si ferma per 5 secondi |

#### template test case:
|Test Case      | TC-003                             |
|---------------|--------------------------------------|
|**Nome**       |`*NAME*` |
|**Riferimento**| REQ-001                          |
|**Descrizione**|Verificare la giusta funzionalità del metodo methodName della libreria SimpleWaitLib |
|**Prerequisiti**| Finire di scrivere la libreria |
|**Procedura**   | - Creare un file di test <br> - Inserire il riferimento alla libreria con `#include "SimpleWaitLib.h"` <br> - eseguire il seguente pezzo di codice: `*CODE*` |
|**Risultati attesi** |  |




### Risultati test

| Nome    | ID    | Risultato |
|-----    |----   |-----------|
|Test metodi libreria SimpleWaitLib -> metodo wait(float time)    |TC-002 |passato    |
|Test sensori e attuatori    |TC-001 |passato    |

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

- http://www.robotc.net/wikiarchive/General, *General Programming - RobotC*, consultato più volte durante tutto l’arco dell’implementazione progetto

- http://www.robotc.net/forums/, *RobotC.net forums*, consultato più volte durante tutto l’arco dell’implementazione progetto

## Allegati
<h1 style="color: red;">DA COMPLETARE </h1>

- Diari di lavoro
- Codici sorgente/documentazione macchine virtuali
- Eventuali guide utente / Manuali di utilizzo
- Mandato e/o Qdc
- Prodotto
