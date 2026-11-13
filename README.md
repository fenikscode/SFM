# PLAN NA PROJEKT

## class Connection

Trzeba będzie zaprojektować klasę realizującą połączenia pomiędzy serwerem, a klientem (uprościć działanie połączeń)

Przykład:

- sendMSG(type of message, itd);
- recvMSG(type of message, itd);

## class Message

Ogólna realizacje wiadomość czego potrzebujemy od danej wiadomość. Czyli jeśli potrzebuje np. dostać informacje o wartość CPU to spodziewam się na wyjściu danych o CPU.
Trzeba będzie odszyfrowywać dane przychodzące (serialize & deserialize)

## class CPU_Message / class RAM_Message

Klasa dziedziczy po message ale ma już bardziej zawężone działanie w obszarze funkcji.