 # Мини Библиотечна Система на C++

Учебен проект на C++ — библиотека с книги, автори, читатели и заеми.  
Проектът демонстрира обектно-ориентирано програмиране (OOP) чрез класове `Author`, `Book`, `Member`, `Loan` и `Library`.

---

## Съдържание
- [Структура на проекта](#структура-на-проекта)
- [Компилация и изпълнение](#компилация-и-изпълнение)
- [Бърз преглед](#бърз-преглед)
- [Подробно описание на класовете](#подробно-описание-на-класовете)
- [Бележки](#бележки)
- [Примерна визуализация](#примерна-визуализация)
- [Автор](#автор)

---

## Структура на проекта
library/
├── Author.h
├── Book.h
├── Member.h
├── Loan.h
├── Library.h
├── main.cpp
└── README.md

---

## Компилация и изпълнение

Отворете терминал в директорията на проекта и изпълнете:

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o main
./main
Бърз преглед

Проектът съдържа следните компоненти:

Author — представя автор (име, година)

Book — книга: заглавие, автор, година, цена, ISBN; следи общ брой създадени книги

Member — читател: име, ID, година на присъединяване

Loan — заем: ISBN, memberId, начална и крайна дата, статус върната/не

Library — управлява колекции и операции: добавяне, заемане, връщане и търсене

Подробно описание на класовете
Author

Полета: std::string name, int birthYear

Конструктори: по подразбиране и с параметри

Валидация: setBirthYear(int) приема 1850–2025

Методи: getName(), getBirthYear(), setBirthYear(), to_string()

Book

Полета: title, author (Author), year, price, isbn, static int totalBooks

Валидация: година в [1500,2025]; цена >= 0

Поддържа Rule of 5 и проследява totalBooks

Методи: гетъри/сетъри, to_string(), getTotalBooks()

Member

Полета: name, memberId, yearJoined

Валиден член: memberId не е празен

Методи: гетъри, bool valid()

Loan

Полета: isbn, memberId, startDate, dueDate, returned

Формат на датите: YYYY-MM-DD

Конструктор валидира: празни полета или due < start хвърля std::invalid_argument

Методи: markReturned(), isReturned(), isOverdue(today), to_string()

Library

Полета: вектори books, members, loans

Основни операции:

addBook(const Book&) — добавя, ако ISBN липсва

addMember(const Member&) — добавя валиден член

hasBook(isbn), hasMember(memberId)

isBookAvailable(isbn) — налична ако съществува и няма активен заем

loanBook(isbn, memberId, start, due) — създава Loan (връща false при грешка)

returnBook(isbn, memberId) — маркира заем като върнат

findByAuthor(authorName), findByTitle(titlePart)

to_string() — обобщена информация (брой книги, членове, активни заеми)

Бележки

Проектът демонстрира:

Разделение между интерфейс (.h) и имплементация (.cpp)

Използване на списъци за инициализация

Работа със статични членове

Приложение на const-коректност

Обработка на изключения

Примерна визуализация:

<img width="916" height="485" alt="Screenshot 2025-12-06 175321" src="https://github.com/user-attachments/assets/8b44e431-60bd-47b2-8fe0-69bb6998307a" />
##Автор

Име: Valentina

Номер: 22105

Курс: Обектно-ориентирано програмиране (C++)

Дата: 6.12.2025
