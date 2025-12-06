 # Мини Библиотечна система на C++

Документация за учебен проект на C++ — библиотека с книги, автори, читатели и заеми.

## Съдържание
- [Компилация](#компилация)
- [Бърз преглед](#бърз-преглед)
- [Подробно описание на класовете](#подробно-описание-на-класовете)
- [Бележки](#бележки)

---

## Компилация

Примерна команда (Windows, TDM-GCC / g++) — стартирайте в Command Prompt или PowerShell:

```bash
D:\TDM-GCC-64\bin\g++.exe -Wall -Wextra -g3 \
c:\Users\PC_LENOVO\PycharmProjects\4kurs\c++_lections\homework_OOP_lections\main.cpp \
-o c:\Users\PC_LENOVO\PycharmProjects\4kurs\c++_lections\homework_OOP_lections\output\main.exe
```

Съвети:
- -Wall -Wextra показват допълнителни предупреждения.
- -g3 включва информация за дебъг.
- Изпълнимият файл ще е: c:\Users\PC_LENOVO\PycharmProjects\4kurs\c++_lections\homework_OOP_lections\output\main.exe

---

## Бърз преглед

Проектът съдържа следните компоненти:
- Author — представя автор (име, година).
- Book — книга: заглавие, автор, година, цена, ISBN; следи общ брой създадени книги.
- Member — читател: име, ID, година на присъединяване.
- Loan — заем: ISBN, memberId, начална и крайна дата, статус върната/не.
- Library — управлява колекции и операции: добавяне, заемане, връщане и търсене.

---

## Подробно описание на класовете

Author
- Полета: `std::string name`, `int birthYear`
- Конструктори: по подразбиране и с параметри.
- Валидация: `setBirthYear(int)` приема 1850–2025.
- Методи: `getName()`, `getBirthYear()`, `setBirthYear()`, `to_string()`.

Book
- Полета: `title`, `author` (Author), `year`, `price`, `isbn`, `static int totalBooks`
- Валидация: година в [1500,2025]; цена >= 0.
- Поддържа Rule of 5; проследява `totalBooks`.
- Методи: гетъри/сетъри, `to_string()`, `getTotalBooks()`.

Member
- Полета: `name`, `memberId`, `yearJoined`
- Валиден член: `memberId` не е празен.
- Методи: гетъри и `bool valid()`.

Loan
- Полета: `isbn`, `memberId`, `startDate`, `dueDate`, `returned`
- Формат на датите: `YYYY-MM-DD` (лексикографско сравнение работи правилно).
- Конструктор валидира: празни полета или due < start хвърлят `std::invalid_argument`.
- Методи: `markReturned()`, `isReturned()`, `isOverdue(today)`, `to_string()`.

Library
- Полета: вектори `books`, `members`, `loans`
- Основни операции:
  - `addBook(const Book&)` — добавя, ако ISBN липсва
  - `addMember(const Member&)` — добавя валиден член
  - `hasBook`, `hasMember`
  - `isBookAvailable(isbn)` — налична ако съществува и няма активен заем
  - `loanBook(isbn, memberId, start, due)` — създава Loan (върща false при грешка)
  - `returnBook(isbn, memberId)` — маркира заем като върнат
  - `findByAuthor(authorName)`, `findByTitle(titlePart)`

  - `to_string()` — обобщена информация (брой книги, членове, активни заеми)

 ## Автор
 Име: Valentina Номер: 22105 Курс: Обектно-ориентирано програмиране (C++) Дата: 6.12.2025
