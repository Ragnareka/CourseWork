# CourseWork
Im a jerk

Имеются много способов реализации идеи биологической эволюции в рамках ГА. Традиционным считается ГА, представленный на схеме.

НАЧАЛО /* генетический алгоритм */

Создать начальную популяцию

Оценить приспособленность каждой особи

останов := FALSE

ПОКА НЕ останов ВЫПОЛНЯТЬ

НАЧАЛО /* создать популяцию нового поколения */

ПОВТОРИТЬ (размер_популяции/2) РАЗ

НАЧАЛО /* цикл воспроизводства */

Выбрать две особи с высокой приспособленностью из предыдущего поколения для скрещивания

Скрестить выбранные особи и получить двух потомков

Оценить приспособленности потомков

Поместить потомков в новое поколение

КОНЕЦ

ЕСЛИ популяция сошлась ТО останов := TRUE

КОНЕЦ

КОНЕЦ
