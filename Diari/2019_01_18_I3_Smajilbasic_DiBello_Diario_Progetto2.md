# PROGETTO 2 | Diario di lavoro - 18.01.2019
##### Fadil Smajilbasic, Luca Di Bello
##### Canobbio, [18.01.2019]

### Lavori svolti

Il programma d'esempio explorer è finito cno tutte le funzionalità richieste.
Abbiamo continuato a scrivere l'Implementazione e abbiamo iniziato a scrivere i test case nella documentazione.

#### Problemi riscontrati e soluzioni adottate

Problema: Mentre girava il robot non riconosceva la riga nera sotto di sè  perchè i motori lavoravano in modo sincrono. 
Soluzione: http://www.robotc.net/wikiarchive/Multitasking_tips
Bisogna creare una task  che lavora come una thread:

```
task flashLed_1()
{
    while( true ) 
        {
        // toggle output
        SensorValue[ LED_1 ] = 1 - SensorValue[ LED_1 ];
 
        wait1Msec( 1 );
        }
}
```

Deve essere richiamata dal main task nel seguente modo:

`StartTask( flashLed_1, 6 );`


#### Punto della situazione rispetto alla pianificazione
Siamo avanti rispetto al gantt preventivo.

#### Programma di massima per la prossima giornata di lavoro

Finire i test case e i risultati dei test della documentazione