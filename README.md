# stm32_project

## Skład zespołu
- Jakub Sarata 402344
- Marcin Biela 302959

### Używane peryferia
- wyświetlacz
- przyciski 2 na ekspanderze
- diody 4 
- fotorezystor
- UART - zgranie danych do komputera w celu późniejszego przetworzenia
- czujnik temperatury 1-Wire interface

### Projekt:
- obsługa przerwań od przycisków
- fotorezystor, czujnik temperatury przerwania od timerów
- UART - przesyłanie danych przez port szeregowy do komputera w celu przetworzenia 

**Mierzymy temperature i natężenie światła, wysyłamy obie te wartości przez port szeregowy
Na płytce wyświetlamy te wartości a przyciskami przełączamy się między nimi
Diodami pokazujemy co mierzymy tzn jeden kolor świeci się gdy mierzymy temperaturę a inny gdy natężenie światła. Wykorzystujemy DMA do komunikacji, będzie możliwość wysłania z PC do STM komend w stylu: 't' ~ 'zwróć temperaturę', 'ON' ~ 'włącz cykliczne wysyłanie danych do PC' i podobnie na wyłączenie**.