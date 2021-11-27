# B. Сумма номеров
https://contest.yandex.ru/contest/27794/problems/B/

Ограничение времени

1 секунда

Ограничение памяти

64Mb

#### Ввод

стандартный ввод или input.txt

#### Вывод

стандартный вывод или output.txt

Вася очень любит везде искать своё счастливое число <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math>. Каждый день он ходит в школу по улице, вдоль которой припарковано <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math> машин. Он заинтересовался вопросом, сколько существует наборов машин, стоящих подряд на местах с <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math> до <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>R</mi></math>, что сумма их номеров равна <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math>. Помогите Васе узнать ответ на его вопрос.

Например, если число <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi> <mo>=</mo> <mn>5</mn></math>, <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi> <mo>=</mo> <mn>1</mn><mn>7</mn></math>, а номера машин равны 17, 7, 10, 7, 10, то существует 4 набора машин:

17 (<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi> <mo>=</mo> <mn>1</mn><mo>,</mo><mi>R</mi> <mo>=</mo> <mn>1</mn></math>),

7, 10 (<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi> <mo>=</mo> <mn>2</mn><mo>,</mo><mi>R</mi> <mo>=</mo> <mn>3</mn></math>),

10, 7 (<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi> <mo>=</mo> <mn>3</mn><mo>,</mo><mi>R</mi> <mo>=</mo> <mn>4</mn></math>),

7, 10 (<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi> <mo>=</mo> <mn>4</mn><mo>,</mo><mi>R</mi> <mo>=</mo> <mn>5</mn></math>)

## Формат ввода

В первой строке входных данных задаются числа <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math> и <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math> (<math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>N</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>, <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>K</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>e</mn></mrow><mrow><mn>9</mn></mrow></msup></math>).

Во второй строке содержится <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math> чисел, задающих номера машин. Номера машин могут принимать значения от <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math> до <math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>9</mn><mn>9</mn><mn>9</mn></math> включительно.

## Формат вывода

Необходимо вывести одно число — количество наборов.

### Пример 1

#### Ввод
5 17\
17 7 10 7 10
#### Вывод
4

### Пример 2

#### Ввод
5 10\
1 2 3 4 1
#### Вывод
2