# DEV LOG - 16.11.2026

## class Connection

### Krótki opis
Szablonowa klasa do obsługi połączeń, dziedziczom od niej Maestro i Node. Są one bardziej szczegółowo zaimplementowane do wykonywania swoich rol w sieci.

### createConnection()
Ogólne tworzenie połączenia czyli setup socketa dla obsługi połączeń
### sendMessage()
Ogólna funkcja do wysyłania wiadomości pomiędzy meastro i nodes. Implementacja samych wiadomość będzie zawarta w class Message.
### recvMessage()
Ogólna funkcja do odbierania wiadomości pomiędzy meastro i nodes. Implementacja samych wiadomość będzie zawarta w class Message.
### closeConnection()

### getFD()
Ogólny getter
### getPort()
Ogólny getter
### getIPAddress()
Ogólny getter

### setIPAddress()
Ogólny setter
### setPort()
Ogólny setter

### Side Notes
Trzeba będzie zaprojektować klasę realizującą połączenia pomiędzy serwerem, a klientem (uprościć działanie połączeń)

Przykład:

- sendMSG(type of message, itd);
- recvMSG(type of message, itd);

## class Message

Ogólna realizacje wiadomość czego potrzebujemy od danej wiadomość. Czyli jeśli potrzebuje np. dostać informacje o wartość CPU to spodziewam się na wyjściu danych o CPU.
Trzeba będzie odszyfrowywać dane przychodzące (serialize & deserialize)

## class CPU_Message / class RAM_Message

Klasa dziedziczy po message ale ma już bardziej zawężone działanie w obszarze funkcji.