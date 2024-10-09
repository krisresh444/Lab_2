# Лабораторная работа №2
## Задание
1. Напиcать программу по варианту №11, используя оператор цикла while.
2. Написать программу, используя оператор цикла for.
3. Построить график с использованием `gnuplot`.
4. Составьть блок-схемы.
5. Оформить отчёт
### Описание проделанной работы
- Написала программу, используя оператор цикла `while`.
```
#include <stdio.h>
#include <math.h>

int main(){
    float h;
    FILE *my_graph;
    printf("Enter h: ");
    scanf("%f",&h);
    my_graph = fopen("my_graph","w");
    float x=0;
    while (x<=2)
    {
        if (x<=1)
        {
            fprintf(my_graph,"%f\t%f\n",x,(pow(x,2)*atan(x)));
            printf("%f\t%f\n",x,(pow(x,2)*atan(x)));
        } 
        else
        {
            fprintf(my_graph,"%f\t%f\n",x,sin(1/pow(x,2)));
            printf("%f\t%f\n",x,sin(1/pow(x,2)));
        }
        x+=h;
    }
    fclose(my_graph);
    return 0;
}
```
- Написала программу, используя оператор цикла `for`.
```
#include <stdio.h>
#include <math.h>

int main(){
    float h;
    FILE *my_graph;
    printf("Enter h: ");
    scanf("%f",&h);
    my_graph = fopen("my_graph.txt","w");
        for (float x=0;x<=2;x+=h)
        {
        if (x<=1)
        {
            fprintf(my_graph,"%f\t%f\n",x,(pow(x,2)*atan(x)));
            printf("%f\t%f\n",x,(pow(x,2)*atan(x)));
        }
        else
        {
            fprintf(my_graph,"%f\t%f\n",x,sin(1/pow(x,2)));
            printf("%f\t%f\n",x,sin(1/pow(x,2)));
        }
        }
    fclose(my_graph);
    return 0;
}
```
- Установила `gnuplot`,ввела в терминал команду `./prog > my_graph.txt`,создала файл `ploy.gpi`,выполнила команду `chmod +x plot.gpi` и построила график.
- Составила блок-схемы.
#### График
<image src = 2024-10-09_16-28-20.png alt="график">

##### Блок-схемы
- Блок-схема для цикла `while`
<image src = 2024-10-09_16-56-03.png alt="блок-схема для цикла while">
- Блок-схема для цикла `for`
<image src = 2024-10-09_17-16-59.png alt="блок-схема для цикла for">

###### Скриншоты результатов
- Результат цикла `while`
<image src = 2024-10-09_17-58-31.png alt="результат цикла while">

- Результат цикла `for`
<image src = 2024-10-09_18-03-13.png alt="результат цикла for">

###### Источники информации
- https://evil-teacher.on.fleek.co/prog_pm/term1/lab02/
- https://habr.com/ru/companies/ruvds/articles/517450/
- https://docs.github.com/en/get-started/writing-on-github/working-with-advanced-formatting/writing-mathematical-expressions
- https://doka.guide/tools/markdown/
- https://programforyou.ru/block-diagram-redactor
- https://stackoverflow.com/questions/74930588/gnuplot-setup-vs-code/79056576#79056576