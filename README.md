# stm32_project

## Skład zespołu
- Jakub Sarata 402344
- Marcin Biela 302959

### Używane peryferia
- wyświetlacz
- przyciski 2 na ekspanderze
- diody 1: zmienny kolor: 'czerwony' - fotorezystor, 'bialy' - temperatura w [C]
- fotorezystor
- UART - zgranie danych do komputera w celu późniejszego przetworzenia
- czujnik temperatury 1-Wire interface

### Projekt:
- obsługa przerwań od przycisków
- fotorezystor, czujnik temperatury z DMA
- UART - przesyłanie danych przez port szeregowy do komputera w celu przetworzenia 

**Mierzymy temperature i natężenie światła, wysyłamy obie te wartości przez port szeregowy
Na płytce wyświetlamy te wartości a przyciskami przełączamy się między nimi
Sygnalizacja, tego co wyświetlamy jest sygnalizowana diodami: 'czerwony' - nateżenie światła, 'bialy' - temperatura w [C]. Wykorzystujemy DMA danych z ADC: uzyskania temperatury i danych z fotorezystora, będzie możliwość. Dane przesyłamy po UART przez przerwania od timerów. Jest możliwość wysłania z PC do STM komend: 't' ~ 'zwróć temperaturę', 's' ~ zwróc dane z fotorezystora, 'a'~ 'włącz cykliczne wysyłanie danych do PC'**.