## Чекпоинт 5 (одиночный). Система типов

### Дедлайн - 8 апреля 16:59


Расширяем функциональность! В прошлом чекпоинте мы научились строить дерево scope-ов, теперь необходимо научиться его эффективно обходить!

Цель текущего чекпоинта - построить визитор, который берет AST-дерево и проверяет на ошибки компиляции, связанные с типизацией.
Для этого необходимо построить структуру, обходящую дерево scope-ов, чтобы по токену можно было получить следующие типы (элементы таблицы классов):
* примитивный тип
* методы
    * принимаемые аргументы (имя - тип)
    * возвращаемое значение
* классы
    * список методов
    * список полей


Необходимо контролировать, чтобы функция именно вызывалась, и чтобы переменной класса нельзя было присвоить тип.