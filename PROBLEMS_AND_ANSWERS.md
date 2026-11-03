# IOITC Problems and Answers (editorials)

## Failed / missing items

None

---

## 1. Policija

- Day/Contest: Day 1 / COI 2007
- Problem URL: https://dmoj.ca/problem/coi06p2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi06p2.txt`
- Editorial URL: https://hsin.hr/coci/archive/2006_2007/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\95d424e0_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\95d424e0_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi06p2

Submit solution
All submissions
Best submissions
Read editorial
Points:17 (partial)
Time limit:1.4s
Memory limit:64M
Problem type

To help capture criminals on the run, the police are introducing a new computer system. The area covered by the police contains 
𝑁
 cities and 
𝐸
 bidirectional roads connecting them. The cities are labelled 
1
 to 
𝑁
.

The police often want to catch criminals trying to get from one city to another. Inspectors, looking at a map, try to determine where to set up barricades and roadblocks. The new computer system should answer the following two types of queries:

Consider two cities 
𝐴
 and 
𝐵
, and a road connecting cities 
𝐺
1
 and 
𝐺
2
. Can the criminals get from city 
𝐴
 to city 
𝐵
 if that one road is blocked and the criminals can't use it?
Consider three cities 
𝐴
, 
𝐵
 and 
𝐶
. Can the criminals get from city 
𝐴
 to city 
𝐵
 if the entire city 
𝐶
 is cut off and the criminals can't enter that city?

Write a program that implements the described system.

Input Specification

The first line contains two integers 
𝑁
 and 
𝐸
 
(
2
≤
𝑁
≤
100
000
,
1
≤
𝐸
≤
500
000
)
, the number of cities and roads.

Each of the following 
𝐸
 lines contains two distinct integers between 
1
 and 
𝑁
 – the labels of two cities connected by a road. There will be at most one road between any pair of cities.

The following line contains the integer 
𝑄
 
(
1
≤
𝑄
≤
300
000
)
, the number of queries the system is being tested on.

Each of the following 
𝑄
 lines contains either four or five integers. The first of these integers is the type of the query – 1 or 2.

If the query is of type 
1
, then the same line contains four more integers 
𝐴
, 
𝐵
, 
𝐺
1
 and 
𝐺
2
 as described earlier. 
𝐴
 and 
𝐵
 will be different. 
𝐺
1
 and 
𝐺
2
 will represent an existing road.

If the query is of type 
2
, then the same line contains three more integers 
𝐴
, 
𝐵
 and 
𝐶
. 
𝐴
, 
𝐵
 and 
𝐶
 will be distinct integers.

The test data will be such that it is initially possible to get from each city to every other city.

Output Specification

Output the answers to all 
𝑄
 queries, one per line. The answer to a query can be yes or no.

Note: if your program correctly answers all questions of one type but not the other, it will receive 50% of the score for that case. Even then your program needs to answer all 
𝑄
 queries (the other queries can be answered arbitrarily).

Sample Input
Copy
13 15
1 2
2 3
3 5
2 4
4 6
2 6
1 4
1 7
7 8
7 9
7 10
8 11
8 12
9 12
12 13
5
1 5 13 1 2
1 6 2 1 4
1 13 6 7 8
2 13 6 7
2 13 6 8
Sample Output
Copy
yes
yes
yes
no
yes
Comments

There are no comments at the moment.
```


## 2. Otoci

- Day/Contest: Day 1 / COI 2009
- Problem URL: https://dmoj.ca/problem/coi08p2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi08p2.txt`
- Editorial URL: https://hsin.hr/coci/archive/2008_2009/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\9956a341_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\9956a341_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi08p2

Submit solution
All submissions
Best submissions
Read editorial
Points:25 (partial)
Time limit:5.0s
Memory limit:128M
Problem types

Some time ago Mirko founded a new tourist agency named "Dreams of Ice". The agency purchased 
𝑁
 icy islands near the South Pole and now offers excursions. Especially popular are the emperor penguins, which can be found in large numbers on the islands.

Mirko's agency has become a huge hit; so big that it is no longer cost-effective to use boats for the excursions. The agency will build bridges between islands and transport tourists by buses. Mirko wants to introduce a computer program to manage the bridge building process so that fewer mistakes are made.

The islands are numbered 
1
 through 
𝑁
. No two islands are initially connected by bridges. The initial number of penguins on each island is known. That number may change, but will always be between 
0
 and 
1
000
 (inclusive).

Your program must handle the following three types of commands:

bridge A B – an offer was received to build a bridge between islands A and B (A and B will be different). To limit costs, your program must accept the offer only if there isn't already a way to get from one island to the other using previously built bridges. If the offer is accepted, the program should output yes, after which the bridge is built. If the offer is rejected, the program should output no.

penguins A X – the penguins on island A have been recounted and there are now X of them. This is an informative command and your program does not need to respond.

excursion A B – a group of tourists wants an excursion from island A to island B. If the excursion is possible (it is possible to get from island A to B), the program should output the total number of penguins the tourists would see on the excursion (including islands A and B). Otherwise, your program should output impossible.

Important note: your program must output responses to commands bridge and excursion immediately after they are received. The server program will not send the next command until your program responds to the previous one.

Another important note: for the server program to be able to read your program's responses, your program must flush the standard output after every response it outputs.

In C++, use the command cout << flush;
In C, use fflush(stdout);
In pascal, use flush(output);
Input Specification

The first line contains the integer 
𝑁
 
(
1
≤
𝑁
≤
30
000
)
, the number of islands.

The second line contains 
𝑁
 integers between 
0
 and 
1
000
, the initial number of penguins on each of the islands.

The third line contains an integer 
𝑄
 
(
1
≤
𝑄
≤
300
000
)
, the number of commands. 
𝑄
 commands follow, each on its own line. As noted above, after receiving a command bridge or excursion, your program will not receive another command until it has responded to the previous one.

Output Specification

Output the responses to commands bridge and excursion, each on its own line.

Scoring

In test cases worth 
50
%
 of points, the command penguins will not appear. In these test cases 
𝑁
 will be odd, while in all other cases 
𝑁
 will be even.

Sample Input 1
Copy
5
4 2 4 5 6
10
excursion 1 1
excursion 1 2
bridge 1 2
excursion 1 2
bridge 3 4
bridge 3 5
excursion 4 5
bridge 1 3
excursion 2 4
excursion 2 5
Sample Output 1
Copy
4
impossible
yes
6
yes
yes
15
yes
15
16
Sample Input 2
Copy
6
1 2 3 4 5 6
10
bridge 1 2
bridge 2 3
bridge 4 5
excursion 1 3
excursion 1 5
bridge 3 4
excursion 1 5
penguins 3 10
excursion 1 3
bridge 1 5
Sample Output 2
Copy
yes
yes
yes
6
impossible
yes
15
13
no
Comments

There are no comments at the moment.
```


## 3. Plahte

- Day/Contest: Day 1 / COI 2009
- Problem URL: https://dmoj.ca/problem/coi08p3
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi08p3.txt`
- Editorial URL: https://hsin.hr/coci/archive/2008_2009/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\9956a341_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\9956a341_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi08p3

Submit solution
All submissions
Best submissions
Read editorial
Points:25 (partial)
Time limit:0.6s
Memory limit:128M
Problem type

Mirko washed his sheets and is on his way to hang them to dry in front of his house. However, strong winds have pulled the clothesline out of the ground so Mirko temporarily laid out the sheets on the grass.

The grass field can be modeled by an infinite square grid, where every unit square is represented by a pair of coordinates. Sheets are rectangles in the grid with sides parallel to the coordinate axes. Sheets may overlap.

In an effort to put his clothesline back up, Mirko slammed a pole into the ground at coordinates 
(
0
,
0
)
. An entirely unexpected turn of events followed. Oil sprung from the ground and the shock caused Mirko to faint. While Mirko lay unconscious, the oil is spreading, staining his sheets.

Time is measured from the moment the oil starts spreading - at time zero only square 
(
0
,
0
)
 is covered in oil. The oil is spreading at a speed of one square per second in all eight directions, as shown in the figure below. When oil enters a square, it stains that square of fabric on all sheets covering the square.

The grass field from the first example after zero, one and two seconds.

Write a program that, given 
𝑀
 points in time, calculates the total area of stained fabric on all sheets for each of the given time points.

Input Specification

The first line contains an integer 
𝑁
 
(
1
≤
𝑁
≤
100
000
)
, the number of sheets.

Each of the following 
𝑁
 lines contains four integers 
𝑥
1
, 
𝑦
1
, 
𝑥
2
 and 
𝑦
2
 
(
−
1
000
000
≤
𝑥
1
≤
𝑥
2
≤
1
000
000
)
, 
(
−
1
000
000
≤
𝑦
1
≤
𝑦
2
≤
1
000
000
)
. The coordinates 
(
𝑥
1
,
𝑦
1
)
 and 
(
𝑥
2
,
𝑦
2
)
 represent diagonally opposite corners of a sheet (again, these coordinates are unit squares, not points on the plane). None of the sheets will cover the square 
(
0
,
0
)
.

The next line contains an integer 
𝑀
 
(
1
≤
𝑀
≤
100
000
)
, the number of points in time.
The next line contains 
𝑀
 integers between 
0
 and 
1
000
000
, the time points. They will be given in strictly ascending order.

Output Specification

For each of the time points, output on a separate line the total area of stained fabric on all sheets, in the order the time points are given in the input.

Sample Input 1
Copy
3
-2 1 1 2
1 0 2 1
-3 -3 -2 0
2
1 2
Sample Output 1
Copy
5
15
Sample Input 2
Copy
4
5 1 8 4
-8 1 -5 4
-10 2 10 3
6 0 8 10
6
1 2 3 4 7 9
Sample Output 2
Copy
0
5
14
18
70
100
Sample Input 3
Copy
1
1 1 1000000 1000000
3
100 10000 1000000
Sample Output 3
Copy
10000
100000000
1000000000000
Comments

There are no comments at the moment.
```


## 4. Torrent

- Day/Contest: Day 2 / COI 2016
- Problem URL: https://oj.uz/problem/view/COI16_torrent
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\3f7a4534_COI16_torrent.txt`
- Editorial URL: https://hsin.hr/coci/archive/2015_2016/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\4b8f6aa6_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\4b8f6aa6_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI16_torrent

View problem - Torrent (COI16_torrent) :: oj.uzView problem - Torrent (COI16_torrent)

Torrent Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o torrent torrent.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o torrent torrent.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o torrent torrent.cpp
Java/usr/bin/javac -encoding UTF-8 torrent.java
/bin/sh -c echo "Main-Class: torrent" > __manifest__.txt
/bin/sh -c jar cfm torrent.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b torrent.py
/bin/mv torrent.pyc __main__.pyc
/usr/bin/zip torrent.pyz.zip __main__.pyc
/bin/mv torrent.pyz.zip torrent.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB101826724089.89%

Problem Source
Croatian Olympiad in Informatics 2016 Problem 4
```


## 5. Sabor

- Day/Contest: Day 2 / COI 2007
- Problem URL: https://dmoj.ca/problem/coi06p3
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi06p3.txt`
- Editorial URL: https://hsin.hr/coci/archive/2006_2007/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\95d424e0_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\95d424e0_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi06p3

Submit solution
All submissions
Best submissions
Read editorial
Points:20 (partial)
Time limit:1.0s
Memory limit:64M
Problem type

The president of the political party in power is holding a conference in the party headquarters. Politicians, members of the party, live in a two-dimensional grid, one member in each cell (except in cells containing obstacles). The headquarters are located in cell 
(
0
,
0
)
. This is also where the president of the party lives.

Politicians make steps in one of the four directions (up, down, left, right), moving to one of the four adjacent cells in one step. They can't enter cells with obstacles. The conference will be attended by all party members that can reach headquarters in 
𝑆
 steps or less. Each member coming to the conference will take the shortest route to headquarters (or any such route, if there is more than one).

The president has observed that politicians change their party affiliation with each step they take, becoming a member of the other party (there are only two parties on the political scene).

Write a program that determines how many politicians come to the conference as members of the party in power, and how many come as members of the opposing party.

Input Specification

The first line contains two integers 
𝐵
 and 
𝑆
 
(
0
≤
𝐵
≤
10
000
,
1
≤
𝑆
≤
10
000
000
)
, the number of obstacles and the largest number of steps from the task description.

Each of the following 
𝐵
 lines contains two integers, the coordinates of one obstacle. The absolute value of both coordinates will be less than 
1000
.

No two obstacles will be in the same cell and there will be no obstacle in cell 
(
0
,
0
)
.

Output Specification

Output two integers on a single line separated by a space, the number of politicians that come to the conference as members of the party in power and the opposing party, respectively.

Sample Input 1
Copy
0 2
Sample Output 1
Copy
9 4
Sample Input 2
Copy
4 5
-1 1
0 -1
0 1
1 0
Sample Output 2
Copy
10 16
Sample Input 3
Copy
4 50000
1 1
-1 -1
1 -1
-1 1
Sample Output 3
Copy
2500099997 2500000000
Comments


0
bradypotter16 
commented on Nov. 7, 2017, 10:48 p.m.

Clarification: When politicians are to take the shortest route possible, are they able to alter their route if an obstacle is in the way?
```


## 6. Pastiri

- Day/Contest: Day 2 / COI 2020
- Problem URL: https://oj.uz/problem/view/COI20_pastiri
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\0a089a25_COI20_pastiri.txt`
- Editorial URL: https://hsin.hr/coci/archive/2019_2020/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\19c5807e_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\19c5807e_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI20_pastiri

View problem - Pastiri (COI20_pastiri) :: oj.uzView problem - Pastiri (COI20_pastiri)

Pastiri Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o pastiri pastiri.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o pastiri pastiri.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o pastiri pastiri.cpp
Java/usr/bin/javac -encoding UTF-8 pastiri.java
/bin/sh -c echo "Main-Class: pastiri" > __manifest__.txt
/bin/sh -c jar cfm pastiri.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b pastiri.py
/bin/mv pastiri.pyc __main__.pyc
/usr/bin/zip pastiri.pyz.zip __main__.pyc
/bin/mv pastiri.pyz.zip pastiri.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms512 MiB5241097770.64%

Problem Source
Croatian Olympiad in Informatics 2020 Problem 2
```


## 7. Umnožak

- Day/Contest: Day 3 / COI 2008
- Problem URL: https://dmoj.ca/problem/coi07p4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi07p4.txt`
- Editorial URL: https://hsin.hr/coci/archive/2007_2008/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\e373562f_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\e373562f_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi07p4

Submit solution
All submissions
Best submissions
Read editorial
Points:25 (partial)
Time limit:0.6s
Memory limit:32M
Problem type

The digit-product of a positive integer is the product of the number's decimal digits. For example, the digit-product of 
2612
 is 
2
⋅
6
⋅
1
⋅
2
=
24
.

The self-product of a number is the product of the number and its digit-product. For example, the self-product of 
2612
 is 
2612
⋅
24
=
62
688
.

Write a program that, given two positive integers 
𝐴
 and 
𝐵
, calculates the number of positive integers whose self-product is between 
𝐴
 and 
𝐵
, inclusive.

Input Specification

The first and only line contains two integers 
𝐴
 and 
𝐵
 
(
1
≤
𝐴
≤
𝐵
<
10
18
)
.

Output Specification

Output should consist of a single integer, the number of positive integers whose self-product is between 
𝐴
 and 
𝐵
.

Scoring

In test cases worth a total of 
25
 points, 
𝐴
 and 
𝐵
 will be at most 
10
8
.

In test cases worth another 
15
, 
𝐴
 and 
𝐵
 will be at most 
10
12
.

Sample Input 1
Copy
20 30
Sample Output 1
Copy
2
Sample Input 2
Copy
145 192
Sample Output 2
Copy
4
Explanation for Sample Output 2

The self-products of numbers 
19
, 
24
, 
32
 and 
41
 are in order 
171
, 
192
, 
192
 and 
164
.

Sample Input 3
Copy
2224222 2224222
Sample Output 3
Copy
1
Comments

There are no comments at the moment.
```


## 8. Izbori

- Day/Contest: Day 3 / COI 2009
- Problem URL: https://dmoj.ca/problem/coi08p1
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi08p1.txt`
- Editorial URL: https://hsin.hr/coci/archive/2008_2009/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\9956a341_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\9956a341_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi08p1

Submit solution
All submissions
Best submissions
Read editorial
Points:30 (partial)
Time limit:0.6s
Memory limit:128M
Problem type

It is election time. 
𝑉
 voters attend the election, each casting their vote for one of 
𝑁
 political parties. 
𝑀
 officials will be elected into the parliament.

The conversion from votes to parliament seats is done using the D'Hondt method with a 
5
%
 threshold. More precisely, suppose that the parties are numbered 
1
 through 
𝑁
 and that they receive 
𝑉
1
,
𝑉
2
,
…
,
𝑉
𝑁
 votes. Parliament seats are allocated as follows:

All parties that receive strictly less than 
5
%
 of 
𝑉
 votes are erased from the list of parties.
The parliament is initially empty i.e. every party has zero seats allocated.
For each party 
𝑃
, the quotient 
𝑄
𝑃
=
𝑉
𝑃
𝑆
𝑃
+
1
 is calculated, where 
𝑉
𝑃
 is the total number of votes received by party 
𝑃
, and 
𝑆
𝑃
 is the number of seats already allocated to party 
𝑃
.
The party with the largest quotient 
𝑄
𝑃
 is allocated one seat. If multiple parties have the same largest quotient, the lower numbered party wins the seat.
Repeat steps 
3
 and 
4
 until the parliament is full.

The votes are being counted and only part of the 
𝑉
 votes has been tallied. It is known how many votes each party has received so far.

Write a program that calculates for each party, among all possible outcomes of the election after all 
𝑉
 votes are counted, the largest and smallest number of seats the party wins.

Input Specification

The first line contains the integers 
𝑉
, 
𝑁
 and 
𝑀
 
(
1
≤
𝑉
≤
10
000
000
,
1
≤
𝑁
≤
100
,
1
≤
𝑀
≤
200
)
, the numbers of votes, parties and seats in the parliament.

The second line contains 
𝑁
 integers – how many votes (of those that have been counted) each party got. The sum of these numbers will be at most 
𝑉
.

Output Specification

On the first line output 
𝑁
 integers separated by spaces – the largest number of seats each party can win.

On the second line output 
𝑁
 integers separated by spaces – the smallest number of seats each party can win.

Scoring

For each test case, the two subtasks (two lines of output) are scored independently.

Solving the first subtask correctly is worth 
20
%
 of points.

Solving the second subtask correctly is worth 
80
%
 of points. It is necessary to output exactly 
𝑁
 integers on the first line (even if they are completely wrong) for the second subtask to be graded.

Sample Input 1
Copy
20 4 5
4 3 6 1
Sample Output 1
Copy
3 3 3 2
1 0 1 0
Explanation for Sample Output 1

In the first example, 
14
 votes have been tallied and 
6
 are yet to be counted. To illustrate one possible outcome, suppose that the first party receives 
2
 of those 
6
 votes, the second none, the third 
1
 vote and the fourth 
3
 votes. The parties' totals are 
6
,
3
,
7
 and 
4
 votes. All parties exceeded the 
5
%
 threshold. Seats are allocated as follows:

The quotients are initially 
6
/
1
,
3
/
1
,
7
/
1
 and 
4
/
1
; the largest is 
7
/
1
 so party 
3
 wins a seat.
The quotients are 
6
/
1
,
3
/
1
,
7
/
2
 and 
4
/
1
; the largest is 
6
/
1
 so party 
1
 wins a seat.
The quotients are 
6
/
2
,
3
/
1
,
7
/
2
 and 
4
/
1
; the largest is 
4
/
1
 so party 
4
 wins a seat.
The quotients are 
6
/
2
,
3
/
1
,
7
/
2
 and 
4
/
2
; the largest is 
7
/
2
 so party 
3
 wins a seat.
The quotients are 
6
/
2
,
3
/
1
,
7
/
3
 and 
4
/
2
; parties 
1
 and 
2
 are tied with quotients 
6
/
2
 and 
3
/
1
, but party 
1
 is lower numbered so it wins the last seat.

In this outcome, the numbers of seats won by the parties are 
2
,
0
,
2
 and 
1
. Since it is possible for the second party not to win any seats, the second number on the second line of output is zero.

Sample Input 2
Copy
100 3 5
30 20 10
Sample Output 2
Copy
4 3 3
1 1 0
Comments

There are no comments at the moment.
```


## 9. Izlet

- Day/Contest: Day 3 / COI 2019
- Problem URL: https://oj.uz/problem/view/COI19_izlet
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\1e1e95c5_COI19_izlet.txt`
- Editorial URL: https://codeforces.com/blog/entry/66506#comment-505659
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f50b8255_66506.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI19_izlet

View problem - Izlet (COI19_izlet) :: oj.uzView problem - Izlet (COI19_izlet)

Izlet Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o izlet izlet.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o izlet izlet.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o izlet izlet.cpp
Java/usr/bin/javac -encoding UTF-8 izlet.java
/bin/sh -c echo "Main-Class: izlet" > __manifest__.txt
/bin/sh -c jar cfm izlet.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b izlet.py
/bin/mv izlet.pyc __main__.pyc
/usr/bin/zip izlet.pyz.zip __main__.pyc
/bin/mv izlet.pyz.zip izlet.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB401815567.90%

Problem Source
Croatian Olympiad in Informatics 2019 Problem 1
```


## 10. Tenis

- Day/Contest: Day 4 / COI 2019
- Problem URL: https://oj.uz/problem/view/COI19_tenis
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\24a7f381_COI19_tenis.txt`
- Editorial URL: https://codeforces.com/blog/entry/66506#comment-505659
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f50b8255_66506.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI19_tenis

View problem - Tenis (COI19_tenis) :: oj.uzView problem - Tenis (COI19_tenis)

Tenis Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o tenis tenis.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o tenis tenis.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o tenis tenis.cpp
Java/usr/bin/javac -encoding UTF-8 tenis.java
/bin/sh -c echo "Main-Class: tenis" > __manifest__.txt
/bin/sh -c jar cfm tenis.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b tenis.py
/bin/mv tenis.pyc __main__.pyc
/usr/bin/zip tenis.pyz.zip __main__.pyc
/bin/mv tenis.pyz.zip tenis.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
500 ms512 MiB327907381.11%

Problem Source
Croatian Olympiad in Informatics 2019 Problem 4
```


## 11. Zagrade

- Day/Contest: Day 4 / COI 2017
- Problem URL: https://oj.uz/problem/view/COI17_zagrade
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\0a1fd7b9_COI17_zagrade.txt`
- Editorial URL: https://codeforces.com/blog/entry/51198#comment-350995
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\289970a0_51198.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI17_zagrade

View problem - Zagrade (COI17_zagrade) :: oj.uzView problem - Zagrade (COI17_zagrade)

Zagrade Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o zagrade zagrade.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o zagrade zagrade.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o zagrade zagrade.cpp
Java/usr/bin/javac -encoding UTF-8 zagrade.java
/bin/sh -c echo "Main-Class: zagrade" > __manifest__.txt
/bin/sh -c jar cfm zagrade.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b zagrade.py
/bin/mv zagrade.pyc __main__.pyc
/usr/bin/zip zagrade.pyz.zip __main__.pyc
/bin/mv zagrade.pyz.zip zagrade.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB4281199983.19%

Problem Source
Croatian Olympiad in Informatics 2017 Problem 4
```


## 12. Zagonetka

- Day/Contest: Day 4 / COI 2018
- Problem URL: https://oj.uz/problem/view/COI18_zagonetka
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\bb02e67d_COI18_zagonetka.txt`
- Editorial URL: https://codeforces.com/blog/entry/58552#comment-422062
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f15985fc_58552.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI18_zagonetka

View problem - Zagonetka (COI18_zagonetka) :: oj.uzView problem - Zagonetka (COI18_zagonetka)

Zagonetka Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o zagonetka zagonetka.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o zagonetka zagonetka.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o zagonetka zagonetka.cpp
Java/usr/bin/javac -encoding UTF-8 zagonetka.java
/bin/sh -c echo "Main-Class: zagonetka" > __manifest__.txt
/bin/sh -c jar cfm zagonetka.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b zagonetka.py
/bin/mv zagonetka.pyc __main__.pyc
/usr/bin/zip zagonetka.pyz.zip __main__.pyc
/bin/mv zagonetka.pyz.zip zagonetka.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB629885157.95%

Problem Source
Croatian Olympiad in Informatics 2018 Problem 4

 Attachments
File nameSize
zagonetka_codesample.c813 bytes
zagonetka_codesample.cpp816 bytes
zagonetka_codesample_py2.py560 bytes
zagonetka_codesample_py3.py634 bytes
zagonetka_test.cpp11.60 KiB
```


## 13. Čvenk

- Day/Contest: Day 5 / COI 2015
- Problem URL: https://oj.uz/problem/view/COI15_cvenk
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ce013bd7_COI15_cvenk.txt`
- Editorial URL: https://hsin.hr/coci/archive/2014_2015/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\2b1ae9fb_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\2b1ae9fb_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI15_cvenk

View problem - ČVENK (COI15_cvenk) :: oj.uzView problem - ČVENK (COI15_cvenk)

ČVENK Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o cvenk cvenk.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o cvenk cvenk.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o cvenk cvenk.cpp
Java/usr/bin/javac -encoding UTF-8 cvenk.java
/bin/sh -c echo "Main-Class: cvenk" > __manifest__.txt
/bin/sh -c jar cfm cvenk.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b cvenk.py
/bin/mv cvenk.pyc __main__.pyc
/usr/bin/zip cvenk.pyz.zip __main__.pyc
/bin/mv cvenk.pyz.zip cvenk.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB268423378.57%

Problem Source
Croatian Olympiad in Informatics 2015 Problem 1
```


## 14. Ogledala

- Day/Contest: Day 5 / COI 2015
- Problem URL: https://oj.uz/problem/view/COI15_ogledala
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\43a2a016_COI15_ogledala.txt`
- Editorial URL: https://hsin.hr/coci/archive/2014_2015/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\2b1ae9fb_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\2b1ae9fb_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI15_ogledala

View problem - OGLEDALA (COI15_ogledala) :: oj.uzView problem - OGLEDALA (COI15_ogledala)

OGLEDALA Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o ogledala ogledala.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o ogledala ogledala.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o ogledala ogledala.cpp
Java/usr/bin/javac -encoding UTF-8 ogledala.java
/bin/sh -c echo "Main-Class: ogledala" > __manifest__.txt
/bin/sh -c jar cfm ogledala.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b ogledala.py
/bin/mv ogledala.pyc __main__.pyc
/usr/bin/zip ogledala.pyz.zip __main__.pyc
/bin/mv ogledala.pyz.zip ogledala.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms512 MiB396412048.78%

Problem Source
Croatian Olympiad in Informatics 2015 Problem 3
```


## 15. Kamion

- Day/Contest: Day 5 / COI 2011
- Problem URL: https://dmoj.ca/problem/coi10p4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi10p4.txt`
- Editorial URL: https://hsin.hr/coci/archive/2010_2011/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\dff2b004_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\dff2b004_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi10p4

Submit solution
All submissions
Best submissions
Read editorial
Points:30 (partial)
Time limit:3.0s
Memory limit:64M
Problem types

Mirko is a truck driver. His job is to travel between cities by roads, loading and unloading the cargo. His truck is so big that it can load an unlimited number of packages, but the automated loading system enables only the last loaded package to be unloaded. There exist 
26
 different types of packages, each of which is denoted by a letter of the English alphabet.

The cities are connected by one-way roads of length 
1
 kilometer. More precisely, there exist 
3
 types of roads, conveniently denoted by 
1
, 
2
, and 
3
:

Type 
1
 – each time Mirko drives down the road of this type, he must load exactly one package of the appropriate type for that road.
Type 
2
 – each time Mirko drives down the road of this type, he must unload exactly one package of the appropriate type for that road.
Type 
3
 – Mirko can drive down the road of this type without loading or unloading packages (no loading/unloading).

Mirko is required not to load/unload any cargo except when driving down the roads of type 
2
 or 
3
, as stated above.

Mirko can travel along 
𝐸
 roads connecting 
𝑁
 cities. He starts in city 
1
 and his goal is to reach city 
𝑁
. When arriving in city 
𝑁
, Mirko's truck is not required to be empty.

Write a program which computes the number of different ways that Mirko can travel so that he traverses at most 
𝐾
 kilometers.

Input Specification

The first line of input contains positive integers 
𝑁
, 
𝐸
 and 
𝐾
 
(
2
≤
𝑁
≤
50
,
1
≤
𝐸
≤
2
450
,
1
≤
𝐾
≤
50
)
, which denote the number of cities, the number of roads and the maximum number of kilometers that Mirko may traverse before reaching his destination.

The following 
𝐸
 lines contain the description of the roads along which Mirko can travel. Each type of road has its own format:

Type 
1
 – x y C, where 
𝑥
 and 
𝑦
 are positive integers which describe the direction of the road and 
𝐶
 is an uppercase letter of the English alphabet which denotes the type of package that Mirko must load onto the truck.
Type 
2
 – x y c, where 
𝑥
 and 
𝑦
 are positive integers which describe the direction of the road and 
𝑐
 is a lowercase letter of the English alphabet which denotes the type of package that Mirko must unload from the truck.
Type 
3
 – x y, where 
𝑥
 and 
𝑦
 are positive integers which describe the direction of the road.

In the above formats, the road is traversable when traveling from city 
𝑥
 to city 
𝑦
. Also, it will always be true that 
1
≤
𝑥
,
𝑦
≤
𝑁
, 
𝑥
≠
𝑦
, and no two roads will connect two cities in the same direction.

Output Specification

In a single line of output, print the number of different ways Mirko can arrive in city 
𝑁
, starting from city 
1
, while respecting the aforementioned requirements. Since this number can be quite big, print the remainder of that number when divided by 
10
007
.

Sample Input 1
Copy
2 1 10
1 2 a
Sample Output 1
Copy
0
Sample Input 2
Copy
7 9 5
1 2 A
2 3 B
2 5
5 3 C
3 4 b
3 6 c
3 7
4 7 a
6 7 a
Sample Output 2
Copy
4
Comments

There are no comments at the moment.
```


## 16. Loza

- Day/Contest: Day 6 / COI 2010
- Problem URL: https://dmoj.ca/problem/coi09p3
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi09p3.txt`
- Editorial URL: https://dmoj.ca/problem/coi09p3/editorial
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\dmoj_coi09p3_editorial.txt`

**Problem statement:**

```
https://dmoj.ca/problem/coi09p3

Submit solution
All submissions
Best submissions
Read editorial
Points:20 (partial)
Time limit:0.6s
Memory limit:32M
Problem type

Scientists in Antarctica have found a new species! They extracted one sample and took it to the laboratory for testing.

They quickly noticed the species reproduces quite often and that only one parent is required for reproduction. However after the parent reproduces twice, it becomes sterile and cannot reproduce again.

In spite of this, the number of specimens in the laboratory skyrocketed and the need for family trees appeared.

They decided to draw the tree in a simple text editor using the following conventions:

The names of the specimens will be written inside nice boxes using characters -, | and o. The center point of the upper and lower border will be marked by the character +. If the length of the border is even, + will be on the left of the two center points.

Copy
o--+--o        o----+----o        o-+--o
|anton|        |anamarija|        |pero|
o--+--o        o----+----o        o-+--o

The boxes will be connected with links. One link connects two or more boxes on their respective + characters, with the parent specimen placed above its children. The boxes and links must not overlap.

Copy
+            +                  +
|            |                  |
o        o---o---o        o-----o-----o
|        |       |        |           |
+        +       +        +           +

If the parent has one child, a point to point (leftmost example) link is used. If the parent has two children, a branching link is used, with the older child on the left, and the younger on the right.

Branching links may be expanded in the horizontal direction as long as the number of - characters on both sides stays equal. Links cannot be expanded vertically.

Don't worry, you will not be asked to draw the tree, only determine the number of characters required to draw it. Space characters are not counted, only -, |, +, o and letters in the names.

Input Specification

The first line of input contains one integer 
𝑁
 
(
1
≤
𝑁
≤
300
000
)
, number of specimens in the laboratory.

The specimens are marked with numbers 
1
 to 
𝑁
 in the order of birth, with the oldest marked 
1
 and youngest marked 
𝑁
.

The next 
𝑁
 lines contain birth notes of all specimens in the order of birth. Each specimen (except the first whose parent is unknown) is described with two pieces of information:

name - a sequence of at most 
20
 lowercase English alphabet characters
parent - one integer denoting the parent of this specimen
Output Specification

The first and only line of input should contain the minimal number of characters needed to draw the family tree.

Scoring

Test data worth 
50
%
 of points has 
𝑁
<
30
.

Test data worth 
75
%
 of points has 
𝑁
<
3
000
.

Sample Input 1
Copy
3
adam
kain 1
abel 1
Sample Output 1
Copy
64
Sample Explanation 1
Copy
   o-+--o
   |adam|
   o-+--o
     |
  o--o--o
  |     |
o-+--oo-+--o
|kain||abel|
o-+--oo-+--o
Sample Input 2
Copy
12
anton
ana 1
luka 1
mia 2
tea 3
jakov 3
semiramida 5
dominik 5
anamarija 4
eustahije 4
lovro 2
lovro 11
Sample Output 2
Copy
371
Sample Explanation 2
Copy
                             o--+--o
                             |anton|
                             o--+--o
                                |
                   o------------o------------o
                   |                         |
                 o-+-o                     o-+--o
                 |ana|                     |luka|
                 o-+-o                     o-+--o
                   |                         |
           o-------o-------o              o--o--o
           |               |              |     |
         o-+-o          o--+--o         o-+-oo--+--o
         |mia|          |lovro|         |tea||jakov|
         o-+-o          o--+--o         o-+-oo--+--o
           |               |              |
     o-----o-----o         o        o-----o-----o
     |           |         |        |           |
o----+----o o----+----o o--+--oo----+-----o o---+---o
|anamarija| |eustahije| |lovro||semiramida| |dominik|
o----+----o o----+----o o--+--oo----+-----o o---+---o
Comments

There are no comments at the moment.
```


## 17. Palinilap

- Day/Contest: Day 6 / COI 2016
- Problem URL: https://oj.uz/problem/view/COI16_palinilap
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\32de8fd5_COI16_palinilap.txt`
- Editorial URL: https://usaco.guide/problems/coi-2016palinilap/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\00708838_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI16_palinilap

View problem - Palinilap (COI16_palinilap) :: oj.uzView problem - Palinilap (COI16_palinilap)

Palinilap Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o palinilap palinilap.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o palinilap palinilap.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o palinilap palinilap.cpp
Java/usr/bin/javac -encoding UTF-8 palinilap.java
/bin/sh -c echo "Main-Class: palinilap" > __manifest__.txt
/bin/sh -c jar cfm palinilap.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b palinilap.py
/bin/mv palinilap.pyc __main__.pyc
/usr/bin/zip palinilap.pyz.zip __main__.pyc
/bin/mv palinilap.pyz.zip palinilap.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms512 MiB5241097467.89%

Problem Source
Croatian Olympiad in Informatics 2016 Problem 2
```


## 18. Cigle

- Day/Contest: Day 6 / COI 2021
- Problem URL: https://oj.uz/problem/view/COI21_cigle
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\4c860a65_COI21_cigle.txt`
- Editorial URL: https://hsin.hr/hio2021/zadaci/rjesenja.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\60e7809c_rjesenja.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\60e7809c_rjesenja`

**Problem statement:**

```
https://oj.uz/problem/view/COI21_cigle

View problem - Cigle (COI21_cigle) :: oj.uzView problem - Cigle (COI21_cigle)

Cigle Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o cigle cigle.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o cigle cigle.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o cigle cigle.cpp
Java/usr/bin/javac -encoding UTF-8 cigle.java
/bin/sh -c echo "Main-Class: cigle" > __manifest__.txt
/bin/sh -c jar cfm cigle.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b cigle.py
/bin/mv cigle.pyc __main__.pyc
/usr/bin/zip cigle.pyz.zip __main__.pyc
/bin/mv cigle.pyz.zip cigle.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms512 MiB4211068782.08%

Problem Source
Croatian Olympiad in Informatics 2021 Problem 2
```


## 19. Ljepotica

- Day/Contest: Day 7 / COI 2019
- Problem URL: https://oj.uz/problem/view/COI19_ljetopica
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\72f7556c_COI19_ljetopica.txt`
- Editorial URL: https://codeforces.com/blog/entry/66506#comment-505659
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f50b8255_66506.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI19_ljetopica

View problem - Ljetopica (COI19_ljetopica) :: oj.uzView problem - Ljetopica (COI19_ljetopica)

Ljetopica Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o ljetopica ljetopica.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o ljetopica ljetopica.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o ljetopica ljetopica.cpp
Java/usr/bin/javac -encoding UTF-8 ljetopica.java
/bin/sh -c echo "Main-Class: ljetopica" > __manifest__.txt
/bin/sh -c jar cfm ljetopica.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b ljetopica.py
/bin/mv ljetopica.pyc __main__.pyc
/usr/bin/zip ljetopica.pyz.zip __main__.pyc
/bin/mv ljetopica.pyz.zip ljetopica.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
500 ms512 MiB219504080.00%

Problem Source
Croatian Olympiad in Informatics 2019 Problem 2
```


## 20. Sir

- Day/Contest: Day 7 / COI 2015
- Problem URL: https://oj.uz/problem/view/COI15_sir
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\341a8832_COI15_sir.txt`
- Editorial URL: https://hsin.hr/coci/archive/2014_2015/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\2b1ae9fb_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\2b1ae9fb_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI15_sir

View problem - SIR (COI15_sir) :: oj.uzView problem - SIR (COI15_sir)

SIR Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o sir sir.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o sir sir.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o sir sir.cpp
Java/usr/bin/javac -encoding UTF-8 sir.java
/bin/sh -c echo "Main-Class: sir" > __manifest__.txt
/bin/sh -c jar cfm sir.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b sir.py
/bin/mv sir.pyc __main__.pyc
/usr/bin/zip sir.pyz.zip __main__.pyc
/bin/mv sir.pyz.zip sir.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms512 MiB312383181.58%

Problem Source
Croatian Olympiad in Informatics 2015 Problem 4
```


## 21. Kampanja

- Day/Contest: Day 7 / COI 2012
- Problem URL: https://dmoj.ca/problem/coi11p1
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ab06d748_coi11p1.txt`
- Editorial URL: https://hsin.hr/coci/archive/2011_2012/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f3709bb8_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\f3709bb8_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi11p1

COI '11 #1 Kampanja - DMOJ: Modern Online Judge

        This site works best with JavaScript enabled.

        COI '11 #1 Kampanja

                View as PDF

            Submit solution

    All submissions

    Best submissions

        Read editorial

        Points:

                20 (partial)        

        Time limit:
        1.0s

        Memory limit:
        128M

                    Problem type                

                Graph Theory

        The elections are nearing, so President Amabo Kcarab is planning a tour of the States, with speeches in
WDC and LA. To provide adequate security, the Secret Service needs to constantly monitor all cities
that the President will pass through (including WDC and LA).

Of course, the federal budget needs to be spent responsibly, so the President will not be using AF1, but
will be travelling by car. Also, the Secret Service will plan the President's tour from WDC to LA and back to WDC such that the least possible number of cities needs to be monitored.

For this problem, assume that the States consist of ~N~ cities, denoted by numbers from ~1~ to ~N~, and ~M~
unidirectional Interstates, with each Interstate linking two different cities. WDC is city number ~1~, LA
number ~2~.

Write a program to compute the minimum number of cities that need to be monitored such that there
exists a path from WDC to LA and back to WDC passing only through monitored cities.

Input Specification

The first line of input contains the two integers ~N~ and ~M~ ~(2 \le N \le 100, 2 \le M \le 200)~, the number of
cities and the number of Interstates linking the cities, respectively.

Each of the following ~M~ lines contains two different integers ~A, B~ ~(1 \le A, B \le N)~, the beginning and
ending city served by the given Interstate. No two Interstates link the same two cities in the same
direction, but two Interstates can link the same two cities in opposite directions.

Output Specification

The first and only line of output must contain the minimum number of cities that need to be
monitored.

Scoring

In test data worth a total of ~20~ points, ~N~ will be at most ~20~.

Note: Test data will ensure that a solution will always exist.

Sample Input 1

6 7
1 3
3 4
4 5
5 1
4 2
2 6
6 3
Sample Output 1

6
Explanation for Sample Output 1

The President can take the following route: ~\mathbf 1 \to 3 \to 4 \to \mathbf 2 \to 6 \to 3 \to 4 \to 5 \to \mathbf 1~. Since he needs to pass through each city at least once, the solution is ~6~.

Sample Input 2

9 11
1 3
3 4
4 2
2 5
5 3
3 6
6 1
2 7
7 8
8 9
9 1
Sample Output 2

6

    Comments

        There are no comments at the moment.
```


## 22. Roboti

- Day/Contest: Day 8 / COI 2010
- Problem URL: https://dmoj.ca/problem/coi09p4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi09p4.txt`
- Editorial URL: https://hsin.hr/coci/archive/2009_2010/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\06af0de6_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\06af0de6_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi09p4

Submit solution
All submissions
Best submissions
Read editorial
Points:25 (partial)
Time limit:5.0s
Memory limit:32M
Problem types

Two robots are lost in a warehouse. The robots are numbered 
1
 and 
2
. The warehouse is a grid with 
𝑅
 rows and 
𝐶
 columns with each field either blocked or free. The robots are controlled through radio commands. Each command consists of two pieces of data:

𝑟
𝑜
𝑏
𝑜
𝑡
 - 
1
 or 
2
, the number of robot we are moving.
𝑑
𝑖
𝑟
𝑒
𝑐
𝑡
𝑖
𝑜
𝑛
 - character U, D, L, or R representing the direction (up, down, left, right) we want to move the robot in.

If the destination field is blocked, taken by another robot or outside the warehouse, nothing happens and the robot stays where he is. If the field is free, the robot moves in it.

The robots are equipped with GPS devices, however due to malfunctions during deployment, we cannot receive the exact location of the robots, only their Manhattan distance to each other. If the robots are on fields 
(
𝑟
1
,
𝑐
1
)
 and 
(
𝑟
2
,
𝑐
2
)
, then their Manhattan distance is 
|
𝑟
1
−
𝑟
2
|
+
|
𝑐
1
−
𝑐
2
|
.

After each command, unsuccessful or successful, the only information we know is the current distance.

Robots are currently in the warehouse on different, unoccupied locations. Write a program that will issue a series of commands required to place both robots on two special extraction points in the warehouse. The commands are issued by writing on the standard output. After each command, you must read the current distance on the standard input.

The warehouse will be such that all free fields are connected.

Interaction

Before interacting with the robots, a few input data is given.

The first line contains integers 
𝑅
 and 
𝐶
 
(
2
≤
𝑅
,
𝐶
≤
200
)
, number of rows and columns in the warehouse.

The next 
𝑅
 rows contain 
𝐶
 characters each. Only characters ., #, and x will appear. . represents a free field, # blocked field, and x one of the two extraction fields. There will be exactly two x characters.

The next line contains the starting Manhattan distance.

After loading all input data, you may begin issuing commands to the robots using standard input. Each command must be formatted robot direction followed by newline character. After each command, you must flush the standard output. Use fflush(stdout) in C/C++ or flush(StdOut) in Pascal.

When you are done issuing commands, print 0 on a line by itself.

Scoring

Test cases worth 
40
 points do not contain blocked fields.

Test cases worth 
80
 points have 
𝑅
,
𝐶
≤
50
.

Sample Input
Copy
4 5
##x..
.##..
.....
....x
Comments

There are no comments at the moment.
```


## 23. Lovci

- Day/Contest: Day 8 / COI 2011
- Problem URL: https://dmoj.ca/problem/coi10p5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi10p5.txt`
- Editorial URL: https://hsin.hr/coci/archive/2010_2011/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\dff2b004_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\dff2b004_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi10p5

Submit solution
All submissions
Best submissions
Read editorial
Points:35 (partial)
Time limit:1.0s
Memory limit:64M
Problem types

Mirko drew a 
2
𝑁
 by 
2
𝑁
 chessboard and decided to play the following game:

On each square, he inscribed an integer denoting the value of that square. In the middle of the first row (columns 
𝑁
 and 
𝑁
+
1
), he placed two bishops. Mirko now calculates the lines of sight of the two bishops: these are squares on the same diagonal as one of the bishops, but not on the square covered by any of the bishops.

For instance, if 
𝑁
=
3
, the squares within the line of sight of the two bishops (denoted by X) at their starting positions (denoted by L) are as follows:

Copy
OOLLOO
OXXXXO
XXOOXX
XOOOOX
OOOOOO
OOOOOO

In a limited number of moves, Mirko tries to gain the maximum score by the following strategy:

Before making any moves, Mirko calculates the sum of the values on squares within the lines of sight of the two bishops. That is Mirko's initial score.
On each turn, Mirko chooses one of the bishops and moves it to a square within its line of sight.
In its new position, the bishop can now see new squares. The sum of those squares, previously unseen by any of the bishops from the start of the game, is now added to Mirko's score.

Write a program which calculates the maximum score that Mirko can achieve in 
𝐾
 turns.

Input Specification

The first line of input contains two integers 
𝑁
,
𝐾
 
(
1
≤
𝑁
≤
10
,
0
≤
𝐾
≤
100
)
, the dimension of the chessboard and the number of turns.

The following 
2
𝑁
 lines contain the values of the squares in the corresponding row, 
2
𝑁
 values per row. Those values are integers from range 
−
1
000
000
 to 
1
000
000
, inclusive.

Output Specification

In a single line of output, print the maximum score that Mirko can achieve.

Scoring

In test cases worth a total of 
40
%
 points, 
𝐾
≤
5
.

Sample Input 1
Copy
2 0
0 -9 -9 0
0 1 1 0
1 0 0 1
0 0 6 0
Sample Output 1
Copy
4
Sample Input 2
Copy
2 1
0 -9 -9 0
0 1 1 0
1 0 0 1
0 0 6 0
Sample Output 2
Copy
1
Comments

There are no comments at the moment.
```


## 24. Histogrami

- Day/Contest: Day 8 / COI 2014
- Problem URL: https://dmoj.ca/problem/coi13p2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi13p2.txt`
- Editorial URL: https://dmoj.ca/problem/coi13p2/editorial
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\dmoj_coi13p2_editorial.txt`

**Problem statement:**

```
https://dmoj.ca/problem/coi13p2

Submit solution
All submissions
Best submissions
Read editorial
Points:30 (partial)
Time limit:1.0s
Memory limit:256M
Problem types

A histogram is a graphical representation of a statistical distribution of data. In other words, it is a function that assigns a positive integer value to each number in the interval 
0
,
1
,
2
,
…
,
𝑊
−
1
. For this task, we describe a histogram with a series of points in the standard coordinate system which, sequentially, determine the top edge of the area that the histogram encloses.

More specifically, we define a histogram of width 
𝑊
 with an even number of points in the form:

(
𝑥
0
,
𝑦
1
)
,
(
𝑥
1
,
𝑦
1
)
,
(
𝑥
1
,
𝑦
2
)
,
(
𝑥
2
,
𝑦
2
)
,
(
𝑥
2
,
𝑦
3
)
,
…
,
(
𝑥
𝑁
/
2
−
1
,
𝑦
𝑁
/
2
)
,
(
𝑥
𝑁
/
2
,
𝑦
𝑁
/
2
)

Therefore, starting from the first point, for every pair of adjacent points it must hold that their 
𝑦
 coordinates are equal and that their 
𝑥
 coordinates are equal. Thus, the histogram begins and ends with a horizontal segment and in between horizontal and vertical segments alternate.

Additionally, the following holds for the shape of a histogram:

𝑥
0
=
0
 - the histogram begins on the line 
𝑥
=
0
.
𝑥
𝑁
/
2
=
𝑊
 - the histogram ends on the line 
𝑥
=
𝑊
.
𝑥
𝑖
<
𝑥
𝑖
+
1
, for each 
𝑖
=
1
,
2
,
…
,
𝑁
/
2
−
1
 - the histogram is defined from left to right and the length of each horizontal segment is at least one.
𝑦
𝑖
>
0
 - the height of the histogram is always greater than zero.
𝑦
𝑖
≠
𝑦
𝑖
+
1
 - the length of each vertical segment is at least one.

For a histogram 
𝐻
, let 
𝑦
𝐻
(
𝑥
)
 be the height of the histogram in the interval 
[
𝑥
,
𝑥
+
1
]
. For example, the surface area which the histogram encloses can be calculated by the formula 
∑
𝑥
=
0
𝑊
−
1
𝑦
𝐻
(
𝑥
)
. If two histograms, 
𝐻
 and 
𝐻
′
, are given, with equal width 
𝑊
 (which can possibly be defined with a different number of points), then we can measure the difference between these two histograms in various ways. This measure of difference between two histograms is also called inaccuracy of histogram 
𝐻
′
 with regard to histogram 
𝐻
. In this task, we examine two different ways of measuring differences between two histograms and we define them in the following way:

diffcount
(
𝐻
′
,
𝐻
)
=
∑
𝑥
=
0
𝑊
−
1
diff
(
𝑦
𝐻
(
𝑥
)
,
𝑦
𝐻
′
(
𝑥
)
)
, where 
	

	
diff
(
𝑦
1
,
𝑦
2
)
=
{
0
	
if 
𝑦
1
=
𝑦
2


1
	
if 
𝑦
1
≠
𝑦
2



abserror
(
𝐻
′
,
𝐻
)
=
∑
𝑥
=
0
𝑊
−
1
|
𝑦
𝐻
(
𝑥
)
−
𝑦
𝐻
′
(
𝑥
)
|

In other words, the first way measures the number of unit segments 
[
𝑥
,
𝑥
+
1
]
 in which the two histograms differ, whereas the second way is the sum of absolute values of differences on those individual unit segments.

Write a program that will, for a given histogram 
𝐻
, set of points 
𝑆
 and way of measuring inaccuracy, find and output histogram 
𝐻
′
 which only uses points from the set 
𝑆
 in its definition and has the least possible inaccuracy with regard to the given histogram 
𝐻
.

Figure 1. Illustration of the histogram and the set 
𝑆
 in both test cases given below and the solutions for the first and the second way of measuring inaccuracy.

The definition of histogram 
𝐻
′
 must comply with all aforementioned conditions (for example, there shouldn't be two continuous horizontal segments in the definition of histogram 
𝐻
′
), and each point in the definition must be one of the points from the set 
𝑆
.

Input Specification

The first line of input contains integers 
𝑁
,
𝑀
,
𝐺
 
(
2
≤
𝑁
,
𝑀
≤
10
5
,
1
≤
𝐺
≤
2
,
𝑁
 even
)
: the total number of points in the definition of histogram 
𝐻
, number of points in set 
𝑆
 and the number which determines what method of measuring the inaccuracy is used: 
1
 for 
diffcount
 and 
2
 for 
abserror
.

Each of the following 
𝑁
 lines contains integers 
𝑋
 and 
𝑌
 
(
0
≤
𝑋
≤
10
6
,
1
≤
𝑌
≤
10
6
)
 - coordinates of one point from the definition of histogram 
𝐻
. The histogram's definition will comply with all the conditions from the task statement.

Each of the following 
𝑀
 lines contains integers 
𝑋
 and 
𝑌
 
(
0
≤
𝑋
≤
10
6
,
1
≤
𝑌
≤
10
6
)
 - coordinates of one point from set 
𝑆
. All the points in the set 
𝑆
 will be different from one another, but they can match with points from the definition of the histogram 
𝐻
.

Output Specification

The first line of output must contain the least possible inaccuracy 
𝐷
.

The second line of output must contain an even integer 
𝐿
 - the total number of points in the definition of the required optimal histogram.

In each of the following 
𝐿
 lines, output two integers 
𝑋
 and 
𝑌
 - coordinates of the point in the histogram's definition.

The histogram's definition must comply with all the conditions from the task.

Please note: The solution may not be unique, but the input data will be such that there is always at least one solution.

Constraints
Subtask	Points	Constraints
1	25	
𝐺
=
1
, 
𝑀
≤
5
000

2	25	
𝐺
=
1

3	25	
𝐺
=
2
, 
𝑀
≤
5
000

4	25	
𝐺
=
2
Scoring

If the histogram's definition is incorrect or wasn't output, but the first line of output is correct (minimal inaccuracy), your solution will get 
70
%
 of total points for that test case.

Sample Input 1
Copy
10 12 1
0 2
2 2
2 3
4 3
4 1
5 1
5 5
9 5
9 2
10 2
0 4
0 6
3 3
3 6
9 4
9 1
5 3
5 5
10 5
9 2
10 1
8 5
Sample Output 1
Copy
5
6
0 6
3 6
3 3
5 3
5 5
10 5
Sample Input 2
Copy
10 12 2
0 2
2 2
2 3
4 3
4 1
5 1
5 5
9 5
9 2
10 2
0 4
0 6
3 3
3 6
9 4
9 1
5 3
5 5
10 5
9 2
10 1
8 5
Sample Output 2
Copy
14
4
0 4
9 4
9 1
10 1
Comments

There are no comments at the moment.
```


## 25. Hiperprostor

- Day/Contest: Day 9 / COI 2013
- Problem URL: https://dmoj.ca/problem/coi12p1
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi12p1.txt`
- Editorial URL: https://hsin.hr/hio2013/zadaci/rjesenja.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\cb434f74_rjesenja.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\cb434f74_rjesenja`

**Problem statement:**

```
https://dmoj.ca/problem/coi12p1

Submit solution
All submissions
Best submissions
Points:20 (partial)
Time limit:0.5s
Memory limit:32M
Problem types

In the distant future, food is transported between planets via one-way trade routes. Each route directly connects two planets and has a known transit time.

The traders' guild plans to add some new routes utilizing a recently discovered technology – hyperspace travel. Travelling via hyperspace is also one-directional. Since it is still experimental, hyperspace travel time is not yet known, however it is known not to depend on distances between planets, so each hyperspace route will take an equal amount of time to traverse.

The picture below shows an example of three interconnected planets with transit times shown. The planets are labelled with positive integers, and the hyperspace travel time is denoted by 
𝑥
 (the picture corresponds to the second example input):

Transit time is measured in days and is always a positive integer.

The traders' guild wishes to analyze the consequences of introducing the new routes: for some two planets 
𝐴
 and 
𝐵
, they want to know what are all the possible values of the shortest path total transit time from 
𝐴
 to 
𝐵
, for all possible values of 
𝑥
. For example, in the situation above, shortest path travel from planet 
2
 to planet 
1
 could take 
5
 (if 
𝑥
≥
5
), 
4
, 
3
, 
2
, or 
1
 day (if 
𝑥
<
5
).

Input Specification

The first line of input contains the two integers 
𝑃
 and 
𝑅
, the number of planets and the number of routes, respectively 
(
1
≤
𝑃
≤
500
,
0
≤
𝑅
≤
10
000
)
.

Each of the following 
𝑅
 lines contains two integers 
𝐶
 and 
𝐷
, the planet labels 
(
1
≤
𝐶
,
𝐷
≤
𝑃
,
𝐶
≠
𝐷
)
, and 
𝑇
, the travel time from 
𝐶
 to 
𝐷
. For conventional routes, 
𝑇
 is an integer 
(
1
≤
𝑇
≤
1
000
000
)
, and for hyperspace routes, 
𝑇
 is the character x. Multiple lines can exist between the same two planets.

The following line contains the integer 
𝑄
, the number of queries 
(
1
≤
𝑄
≤
10
)
.

Each of the following 
𝑄
 lines contains two integers 
𝐴
 and 
𝐵
, the planet labels 
(
𝐴
≠
𝐵
)
 representing a query by the traders' guild: "what are the possible values of shortest path transit time from 
𝐴
 to 
𝐵
?".

Output Specification

The output must contain 
𝑄
 rows, one per query.

Each row must contain two integers: the number of different values and their sum. If the number of different values is unbounded, output only inf in that row. If there is no path from 
𝐴
 to 
𝐵
, the number of different values and their sum is 
0
.

Scoring

If the output is incorrect, but the first number in each of the 
𝑄
 rows is correct, the solution will be awarded 
50
%
 of points for that test case. Note: The output must contain both numbers in each row where the number of values is bounded in order to qualify.

In test data worth a total of 
50
 points, the following constraints hold: 
𝑃
≤
30
, 
𝑅
≤
300
, and 
𝑇
≤
50
.

Sample Input 1
Copy
4 4
1 2 x
2 3 x
3 4 x
1 4 8
3
2 1
1 3
1 4
Sample Output 1
Copy
0 0
inf
3 17
Explanation for Sample Output 1
There is no possible path from 
2
 to 
1
.
For any positive integer 
𝑥
, the shortest path from 
1
 to 
3
 takes 
2
𝑥
 time, so the solution is inf.
The shortest path from 
1
 to 
4
 can take 
3
 (for 
𝑥
=
1
), 
6
 (for 
𝑥
=
2
), or 
8
 (for 
𝑥
≥
3
) time. 
3
+
6
+
8
=
17
.
Sample Input 2
Copy
3 5
3 2 x
2 1 x
2 1 5
1 3 10
3 1 20
6
1 2
2 3
3 1
2 1
3 2
1 3
Sample Output 2
Copy
inf
5 65
15 185
5 15
inf
1 10
Comments

There are no comments at the moment.
```


## 26. Izvanzemaljci

- Day/Contest: Day 9 / COI 2021
- Problem URL: https://oj.uz/problem/view/COI21_izvanzemaljci
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\cde20f8f_COI21_izvanzemaljci.txt`
- Editorial URL: https://hsin.hr/hio2021/zadaci/rjesenja.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\60e7809c_rjesenja.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\60e7809c_rjesenja`

**Problem statement:**

```
https://oj.uz/problem/view/COI21_izvanzemaljci

View problem - Izvanzemaljci (COI21_izvanzemaljci) :: oj.uzView problem - Izvanzemaljci (COI21_izvanzemaljci)

Izvanzemaljci Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o izvanzemaljci izvanzemaljci.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o izvanzemaljci izvanzemaljci.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o izvanzemaljci izvanzemaljci.cpp
Java/usr/bin/javac -encoding UTF-8 izvanzemaljci.java
/bin/sh -c echo "Main-Class: izvanzemaljci" > __manifest__.txt
/bin/sh -c jar cfm izvanzemaljci.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b izvanzemaljci.py
/bin/mv izvanzemaljci.pyc __main__.pyc
/usr/bin/zip izvanzemaljci.pyz.zip __main__.pyc
/bin/mv izvanzemaljci.pyz.zip izvanzemaljci.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB605611118.03%

Problem Source
Croatian Olympiad in Informatics 2021 Problem 3
```


## 27. Paint

- Day/Contest: Day 9 / COI 2020
- Problem URL: https://oj.uz/problem/view/COI20_paint
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\12d7eaa7_COI20_paint.txt`
- Editorial URL: https://hsin.hr/coci/archive/2019_2020/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\19c5807e_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\19c5807e_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI20_paint

View problem - Paint (COI20_paint) :: oj.uzView problem - Paint (COI20_paint)

Paint Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o paint paint.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o paint paint.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o paint paint.cpp
Java/usr/bin/javac -encoding UTF-8 paint.java
/bin/sh -c echo "Main-Class: paint" > __manifest__.txt
/bin/sh -c jar cfm paint.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b paint.py
/bin/mv paint.pyc __main__.pyc
/usr/bin/zip paint.pyz.zip __main__.pyc
/bin/mv paint.pyz.zip paint.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB924803138.75%

Problem Source
Croatian Olympiad in Informatics 2020 Problem 1
```


## 28. Svjetlost

- Day/Contest: Day 10 / COI 2018
- Problem URL: https://oj.uz/problem/view/COI18_svjetlost
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\6b8c6cd3_COI18_svjetlost.txt`
- Editorial URL: https://codeforces.com/blog/entry/58552#comment-422062
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f15985fc_58552.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI18_svjetlost

View problem - Svjetlost (COI18_svjetlost) :: oj.uzView problem - Svjetlost (COI18_svjetlost)

Svjetlost Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms1024 MiB217291758.62%

Problem Source
Croatian Olympiad in Informatics 2018 Problem 3
```


## 29. Relay

- Day/Contest: Day 10 / COI 2016
- Problem URL: https://oj.uz/problem/view/COI16_relay
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\349f3223_COI16_relay.txt`
- Editorial URL: https://hsin.hr/coci/archive/2015_2016/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\4b8f6aa6_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\4b8f6aa6_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI16_relay

View problem - Relay (COI16_relay) :: oj.uzView problem - Relay (COI16_relay)

Relay Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o relay relay.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o relay relay.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o relay relay.cpp
Java/usr/bin/javac -encoding UTF-8 relay.java
/bin/sh -c echo "Main-Class: relay" > __manifest__.txt
/bin/sh -c jar cfm relay.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b relay.py
/bin/mv relay.pyc __main__.pyc
/usr/bin/zip relay.pyz.zip __main__.pyc
/bin/mv relay.pyz.zip relay.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB89241145.83%

Problem Source
Croatian Olympiad in Informatics 2016 Problem 3
```


## 30. Semafor

- Day/Contest: Day 10 / COI 2020
- Problem URL: https://oj.uz/problem/view/COI20_semafor
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\c90edb8b_COI20_semafor.txt`
- Editorial URL: https://hsin.hr/coci/archive/2019_2020/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\19c5807e_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\19c5807e_olympiad_solutions`

**Problem statement:**

```
https://oj.uz/problem/view/COI20_semafor

View problem - Semafor (COI20_semafor) :: oj.uzView problem - Semafor (COI20_semafor)

Semafor Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o semafor semafor.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o semafor semafor.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o semafor semafor.cpp
Java/usr/bin/javac -encoding UTF-8 semafor.java
/bin/sh -c echo "Main-Class: semafor" > __manifest__.txt
/bin/sh -c jar cfm semafor.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b semafor.py
/bin/mv semafor.pyc __main__.pyc
/usr/bin/zip semafor.pyz.zip __main__.pyc
/bin/mv semafor.pyz.zip semafor.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms512 MiB172342573.53%

Problem Source
Croatian Olympiad in Informatics 2020 Problem 3
```


## 31. Mjesec

- Day/Contest: Day 11 / COI 2012
- Problem URL: https://dmoj.ca/problem/coi11p2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi11p2.txt`
- Editorial URL: https://hsin.hr/coci/archive/2011_2012/olympiad_solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f3709bb8_olympiad_solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\f3709bb8_olympiad_solutions`

**Problem statement:**

```
https://dmoj.ca/problem/coi11p2

Submit solution
All submissions
Best submissions
Read editorial
Points:30 (partial)
Time limit:5.0s
Memory limit:256M
Problem types

The fully automated lunar station's upkeep is the responsibility of the service robot M1RK8. The robot is moving along a circular track (a track forming a cycle). The track consists of straight segments with north, south, east, or west orientations, and in-place 
90
-degree turns to the left or right. The length of each straight segment is a positive integer number of metres, so the entire track can be shown in a Cartesian plane with segments passing through lattice (integer-coordinates) points and parallel to the coordinate axes. The track never intersects with itself, and no two segments touch or overlap (except, of course, at adjacent endpoints, i.e. turns).

Here is an example track with 
8
 turns:

A meteorite has struck the Moon near the station, so most sensors went offline. Thus, neither the position of the robot nor the direction that it is facing is currently known. We cannot begin repair work on the station until we have established the robot's position along the track.

This task will not be easy since the only command available for moving the robot is move K, where 
𝐾
 is the positive integer number of metres that the robot must move along the track. After executing the command, the robot returns two integers: 
𝐿
 and 
𝑅
. The number 
𝐿
 is the number of left turns that the robot had to make while executing the last move command, and 
𝑅
 is the number of right turns.

Notes: The robot's starting position, as well as the position after each command, is always a lattice (integer-coordinates) point. If the robot ends the move command at a turn point, it will turn in the direction of the rest of the track before ending the move command, so the next move command will start with going straight.

For example, if the robot is at the coordinates 
(
3
,
3
)
 and facing east, after executing the command move 4 it will end up at 
(
6
,
2
)
 facing north and return the result 2 1, meaning that it has made two left and one right turns while executing the command. After that, the command move 1 will move the robot to 
(
6
,
3
)
 and return 0 0.

Write a program that will determine the position of the robot using at most 
5
000
 commands of the form move K. The program has to finish with the command stop X Y, where 
𝑋
 and 
𝑌
 are the final coordinates of the robot after executing all commands.

Interaction

Before interacting with the robot, the program needs to read the following data from the input:

The first line of input contains the positive integer 
𝑁
 
(
6
≤
𝑁
≤
10
000
)
, the number of turns on the track, which is also equal to the number of straight segments.
The following 
𝑁
 lines of input contain the coordinates of turns in order that they appear along the track, one per line, given as pairs of integers 
𝑋
 and 
𝑌
 
(
1
≤
𝑋
,
𝑌
≤
100
000
)
.

Notes: The direction of the robot along the track can be in order that the coordinates are given, or the opposite order. The track will be such that the robot's position is uniquely determinable, i.e. the test data will never contain two track points with different orientation that give the same result for every possible "move" command sequence.

After reading the data above, it is possible to give commands to the robot using standard output. Make sure to flush the output after each move K command; after flushing, you can read in the two numbers 
𝐿
 and 
𝑅
 from standard input. 
𝐾
 must be between 
1
 and 
1
000
000
000
, inclusive.

After determining the coordinates of the robot, your program must output stop X Y to standard output, flush the output, and regularly finish execution.

Scoring

The following constraints will hold in a subset of the test data:

worth a total of 
40
 points: 
𝑁
≤
100
 and 
𝑋
,
𝑌
≤
50
worth a total of 
60
 points: 
𝑁
≤
100
 and 
𝑋
,
𝑌
≤
100
000
worth a total of 
80
 points: 
𝑁
≤
2
000
 and 
𝑋
,
𝑌
≤
100
000
Testing

Your solution can be tested either locally. For this, you first need to create a file describing the desired test case.

The first line must contain the positive integer 
𝑁
, the number of turns.
The following 
𝑁
 lines must contain the coordinates of turns in the order that they appear along the track: two integers, 
𝑋
 and 
𝑌
, for each line.
The following line must contain the two integers 
𝑋
0
 and 
𝑌
0
 and the word 
𝑆
. 
𝑋
0
 and 
𝑌
0
 represent the starting coordinates of the robot, while 
𝑆
 describes the robot's direction. 
𝑆
 can be one of the following: same if the robot is moving along the track in the order of turns given in input, or opposite if the robot is moving in the opposite direction. The starting coordinates can be either at a turn or along a straight segment of the track.

An example of a test input file corresponding to the track example given earlier:

Copy
8
2 4
6 4
6 2
4 2
4 3
3 3
3 2
2 2
3 3 opposite
Comments

There are no comments at the moment.
```


## 32. Rotacije

- Day/Contest: Day 11 / COI 2013
- Problem URL: https://dmoj.ca/problem/coi12p2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_coi12p2.txt`
- Editorial URL: https://hsin.hr/hio2013/zadaci/rjesenja.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\cb434f74_rjesenja.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\cb434f74_rjesenja`

**Problem statement:**

```
https://dmoj.ca/problem/coi12p2

Submit solution
All submissions
Best submissions
Points:30 (partial)
Time limit:0.5s
Memory limit:256M
Problem types

The famous archaeologist Diana Jones has discovered a secret passageway leading to hidden treasure near Nowhere, Kansas. The passageway is blocked by a stone gate which has an ancient unlocking mechanism chiselled into it. Fortunately, she has immediately recognized the chiselled symbols:

The unlocking mechanism is a table with 
𝑅
 rows and 
𝐶
 columns. Each cell contains a unique positive integer between 
1
 and 
𝑅
×
𝐶
, inclusive. At first glance, the numbers appear to be ordered randomly.
The mechanism contains cogwheels which Diana can use to rearrange the table cells. In one move, she can rotate any 
2
-by-
2
 group of adjacent cells clockwise by 
90
 degrees.
The gate will be unlocked when the numbers are rearranged in sorted row-major order (the upper left cell must contain 
1
, the cell to the right of it 
2
, and so on until the lower right cell, which must contain 
𝑅
×
𝐶
).

For example, for the initial arrangement shown in the first picture, two moves are sufficient to unlock the mechanism:

Write a program that, given the initial arrangement of cells, finds a sequence of moves that unlocks the mechanism. The number of moves needn't be optimal, however it must not exceed 
100
000
.

Input Specification

The first line of input contains the two positive integers 
𝑅
 and 
𝐶
 
(
2
≤
𝑅
≤
𝐶
≤
25
)
.

Each of the following 
𝑅
 lines contains 
𝐶
 positive integers 
𝑍
𝑖
,
𝑗
 
(
1
≤
𝑍
𝑖
,
𝑗
≤
𝑅
×
𝐶
)
, the numbers chiselled into the corresponding mechanism cells, which describes the initial arrangement.

Output Specification

The output must contain the required sequence of moves, one per line. For each move, output two positive integers 
𝑀
 and 
𝑁
 
(
1
≤
𝑀
≤
𝑅
−
1
,
1
≤
𝑁
≤
𝐶
−
1
)
 representing the row and column index of the upper left cell in the 
2
-by-
2
 group rotated in that move.

Note: For the given input data, a solution, not necessarily unique, will always exist.

Scoring

In test data worth a total of 
40
 points, 
𝑅
×
𝐶
≤
9
.

In test data worth a total of 
40
 points, 
𝑅
=
2
.

In test data worth a total of 
60
 points, at least one of the two constraints above will hold.

Sample Input 1
Copy
2 3
3 2 6
1 4 5
Sample Output 1
Copy
1 1
1 2
Explanation for Sample Output 1

According to the picture in the problem description, the initial arrangement can be ordered in two moves: we first rotate the group with the upper left corner in row 
1
 and column 
1
, and then the group with the upper left corner in row 
1
 and column 
2
.

Sample Input 2
Copy
3 3
1 2 3
4 6 9
7 5 8
Sample Output 2
Copy
2 2
Sample Input 3
Copy
2 4
1 2 7 3
5 6 8 4
Sample Output 3
Copy
1 3
1 3
1 3
Comments

There are no comments at the moment.
```


## 33. Pick

- Day/Contest: Day 11 / COI 2018
- Problem URL: https://oj.uz/problem/view/COI18_pick
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\d839f650_COI18_pick.txt`
- Editorial URL: https://hsin.hr/hio2018/zadaci/rjesenja.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\10eb4d26_rjesenja.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\10eb4d26_rjesenja`

**Problem statement:**

```
https://oj.uz/problem/view/COI18_pick

View problem - Pick (COI18_pick) :: oj.uzView problem - Pick (COI18_pick)

Pick Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o pick pick.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o pick pick.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o pick pick.cpp
Java/usr/bin/javac -encoding UTF-8 pick.java
/bin/sh -c echo "Main-Class: pick" > __manifest__.txt
/bin/sh -c jar cfm pick.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b pick.py
/bin/mv pick.pyc __main__.pyc
/usr/bin/zip pick.pyz.zip __main__.pyc
/bin/mv pick.pyz.zip pick.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms1024 MiB124231043.48%

Problem Source
Croatian Olympiad in Informatics 2018 Problem 2
```


## 34. Raspad

- Day/Contest: Day 12 / COI 2017
- Problem URL: https://oj.uz/problem/view/COI17_raspad
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\83ad3471_COI17_raspad.txt`
- Editorial URL: https://codeforces.com/blog/entry/51198#comment-350995
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\289970a0_51198.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI17_raspad

View problem - Raspad (COI17_raspad) :: oj.uzView problem - Raspad (COI17_raspad)

Raspad Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o raspad raspad.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o raspad raspad.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o raspad raspad.cpp
Java/usr/bin/javac -encoding UTF-8 raspad.java
/bin/sh -c echo "Main-Class: raspad" > __manifest__.txt
/bin/sh -c jar cfm raspad.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b raspad.py
/bin/mv raspad.pyc __main__.pyc
/usr/bin/zip raspad.pyz.zip __main__.pyc
/bin/mv raspad.pyz.zip raspad.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
6000 ms1024 MiB176563664.29%

Problem Source
Croatian Olympiad in Informatics 2017 Problem 2
```


## 35. Trapezi

- Day/Contest: Day 12 / COI 2017
- Problem URL: https://oj.uz/problem/view/COI17_trapezi
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ed02a68e_COI17_trapezi.txt`
- Editorial URL: https://codeforces.com/blog/entry/51198#comment-350995
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\289970a0_51198.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI17_trapezi

View problem - Trapezi (COI17_trapezi) :: oj.uzView problem - Trapezi (COI17_trapezi)

Trapezi Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o trapezi trapezi.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o trapezi trapezi.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o trapezi trapezi.cpp
Java/usr/bin/javac -encoding UTF-8 trapezi.java
/bin/sh -c echo "Main-Class: trapezi" > __manifest__.txt
/bin/sh -c jar cfm trapezi.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b trapezi.py
/bin/mv trapezi.pyc __main__.pyc
/usr/bin/zip trapezi.pyz.zip __main__.pyc
/bin/mv trapezi.pyz.zip trapezi.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
500 ms1024 MiB8415746.67%

Problem Source
Croatian Olympiad in Informatics 2017 Problem 3
```


## 36. MalnaRISC

- Day/Contest: Day 12 / COI 2021
- Problem URL: https://oj.uz/problem/view/COI21_malnarisc
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\3d21ce8b_COI21_malnarisc.txt`
- Editorial URL: https://hsin.hr/hio2021/zadaci/rjesenja.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\60e7809c_rjesenja.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\60e7809c_rjesenja`

**Problem statement:**

```
https://oj.uz/problem/view/COI21_malnarisc

View problem - MalnaRISC (COI21_malnarisc) :: oj.uzView problem - MalnaRISC (COI21_malnarisc)

MalnaRISC Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o malnarisc malnarisc.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o malnarisc malnarisc.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o malnarisc malnarisc.cpp
Java/usr/bin/javac -encoding UTF-8 malnarisc.java
/bin/sh -c echo "Main-Class: malnarisc" > __manifest__.txt
/bin/sh -c jar cfm malnarisc.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b malnarisc.py
/bin/mv malnarisc.pyc __main__.pyc
/usr/bin/zip malnarisc.pyz.zip __main__.pyc
/bin/mv malnarisc.pyz.zip malnarisc.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2500 ms512 MiB469803341.25%

Problem Source
Croatian Olympiad in Informatics 2021 Problem 4
```


## 37. Mađioničar

- Day/Contest: Day 13 / COI 2022
- Problem URL: https://oj.uz/problem/view/COI22_madionicar
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\33225a0f_COI22_madionicar.txt`
- Editorial URL: https://codeforces.com/blog/entry/103280#comment-917355
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\56286d8e_103280.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI22_madionicar

View problem - Mađioničar (COI22_madionicar) :: oj.uzView problem - Mađioničar (COI22_madionicar)

Mađioničar Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5000 ms512 MiB434937378.49%

Problem Source
Croatian Olympiad in Informatics 2022 Problem 1
```


## 38. Vinjete

- Day/Contest: Day 13 / COI 2022
- Problem URL: https://oj.uz/problem/view/COI22_vinjete
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\929ed3ce_COI22_vinjete.txt`
- Editorial URL: https://codeforces.com/blog/entry/103280#comment-917355
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\56286d8e_103280.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI22_vinjete

View problem - Vinjete (COI22_vinjete) :: oj.uzView problem - Vinjete (COI22_vinjete)

Vinjete Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB249634673.02%

Problem Source
Croatian Olympiad in Informatics 2022 Problem 4
```


## 39. CERN

- Day/Contest: Day 13 / COI 2024
- Problem URL: https://qoj.ac/problem/8894
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\e1c72702_8894.txt`
- Editorial URL: https://errorgorn.github.io/2024/04/30/COI.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\26476de1_COI.html.txt`

**Problem statement:**

```
https://qoj.ac/problem/8894

CERN - Problem - QOJ.ac

									Login

					Register

				QOJ.ac

				QOJ

	QOJ

			 Contests

			 Category

			 Problems

			 Submissions

			 Hack!

			 Blogs

			 Day 1

			Time Limit:			4 s		
				Memory Limit:			512 MB		
				Total points:			100		

	#8894. CERN	

		Statistics	

			Statement		

     Languages

		Default

							简体中文

				Submit			

					Custom Test				

				Attachments			

				Discussions & Issues							

			The problem was used in the following contests:
			Croatian Olympiad in Informatics 2024

Submit

Run

					 Discussions

						About Discussions

						The discussion section is only for posting: General Discussions (problem-solving strategies, alternative approaches), and Off-topic conversations.

						This is NOT for reporting issues! If you want to report bugs or errors, please use the Issues section below.

					Open Discussions 0

					No discussions in this category.

					 Issues

						About Issues

						If you find any issues with the problem (statement, scoring, time/memory limits, test cases, etc.), you may submit an issue here. A problem moderator will review your issue.

						Guidelines:

							This is not a place to publish discussions, editorials, or requests to debug your code. Issues are only visible to you and problem moderators.

							Do not submit duplicated issues.

							Issues must be filed in English or Chinese only.

				Active Issues 0

				No issues in this category.

				Closed/Resolved Issues 0

				No issues in this category.

						 English					

					العربية
						English
						Español
						Français
						日本語
						한국어
							Türkçe
							简体中文
						繁體中文

				QOJ.ac
 |  QOJ 4.5.48 (2019-2026)

				Made with ❤️ by Qingyu✨ | Contact us: [email protected]

				Server Time: 2026-11-02 16:28:27 (UTC+8)
```


## 40. Menza

- Day/Contest: Day 14 / COI 2022
- Problem URL: https://oj.uz/problem/view/COI22_menza
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\35a7d897_COI22_menza.txt`
- Editorial URL: https://codeforces.com/blog/entry/103280#comment-917355
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\56286d8e_103280.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI22_menza

:: oj.uz404
404 Not Found
Sorry, the page you are looking for does not exist.
Back to home
```


## 41. Ministarstvo

- Day/Contest: Day 14 / COI 2024
- Problem URL: https://qoj.ac/problem/8896
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\a779a1b0_8896.txt`
- Editorial URL: https://errorgorn.github.io/2024/04/30/COI.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\26476de1_COI.html.txt`

**Problem statement:**

```
https://qoj.ac/problem/8896

Ministarstvo - Problem - QOJ.ac

									Login

					Register

				QOJ.ac

				QOJ

	QOJ

			 Contests

			 Category

			 Problems

			 Submissions

			 Hack!

			 Blogs

			 Day 1

			Time Limit:			1 s		
				Memory Limit:			1024 MB		
				Total points:			100		

	#8896. Ministarstvo	

		Statistics	

			Statement		

     Languages

		Default

							简体中文

				Submit			

					Custom Test				

				Attachments			

				Discussions & Issues							

			The problem was used in the following contests:
			Croatian Olympiad in Informatics 2024

Submit

Run

					 Discussions

						About Discussions

						The discussion section is only for posting: General Discussions (problem-solving strategies, alternative approaches), and Off-topic conversations.

						This is NOT for reporting issues! If you want to report bugs or errors, please use the Issues section below.

					Open Discussions 0

					No discussions in this category.

					 Issues

						About Issues

						If you find any issues with the problem (statement, scoring, time/memory limits, test cases, etc.), you may submit an issue here. A problem moderator will review your issue.

						Guidelines:

							This is not a place to publish discussions, editorials, or requests to debug your code. Issues are only visible to you and problem moderators.

							Do not submit duplicated issues.

							Issues must be filed in English or Chinese only.

				Active Issues 0

				No issues in this category.

				Closed/Resolved Issues 0

				No issues in this category.

						 English					

					العربية
						English
						Español
						Français
						日本語
						한국어
							Türkçe
							简体中文
						繁體中文

				QOJ.ac
 |  QOJ 4.5.48 (2019-2026)

				Made with ❤️ by Qingyu✨ | Contact us: [email protected]

				Server Time: 2026-11-02 16:28:27 (UTC+8)
```


## 42. Sličnost

- Day/Contest: Day 14 / COI 2023
- Problem URL: https://oj.uz/problem/view/COI23_slicnost
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\5c86afe5_COI23_slicnost.txt`
- Editorial URL: https://codeforces.com/blog/entry/116652#comment-1031304
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\df3e5166_116652.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI23_slicnost

View problem - Sličnost (COI23_slicnost) :: oj.uzView problem - Sličnost (COI23_slicnost)

Sličnost Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB362411946.34%

Problem Source
Croatian Olympiad in Informatics 2023 Problem 4
```


## 43. Povjerenstvo

- Day/Contest: Day 15 / COI 2022
- Problem URL: https://oj.uz/problem/view/COI22_povjerenstvo
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\2ddb60cb_COI22_povjerenstvo.txt`
- Editorial URL: https://codeforces.com/blog/entry/103280#comment-917355
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\56286d8e_103280.txt`

**Problem statement:**

```
https://oj.uz/problem/view/COI22_povjerenstvo

View problem - Povjerenstvo (COI22_povjerenstvo) :: oj.uzView problem - Povjerenstvo (COI22_povjerenstvo)

Povjerenstvo Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB106372362.16%

Problem Source
Croatian Olympiad in Informatics 2022 Problem 3
```


## 44. Koreografija

- Day/Contest: Day 15 / COI 2024
- Problem URL: https://qoj.ac/problem/8895
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\02f47f5b_8895.txt`
- Editorial URL: https://errorgorn.github.io/2024/04/30/COI.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\26476de1_COI.html.txt`

**Problem statement:**

```
https://qoj.ac/problem/8895

Koreografija - Problem - QOJ.ac

									Login

					Register

				QOJ.ac

				QOJ

	QOJ

			 Contests

			 Category

			 Problems

			 Submissions

			 Hack!

			 Blogs

			 Day 1

			Time Limit:			8 s		
				Memory Limit:			1024 MB		
				Total points:			100		

	#8895. Koreografija	

		Statistics	

			Statement		

     Languages

		Default

							简体中文

				Submit			

				Discussions & Issues							

			The problem was used in the following contests:
			Croatian Olympiad in Informatics 2024

Submit

					 Discussions

						About Discussions

						The discussion section is only for posting: General Discussions (problem-solving strategies, alternative approaches), and Off-topic conversations.

						This is NOT for reporting issues! If you want to report bugs or errors, please use the Issues section below.

					Open Discussions 0

					No discussions in this category.

					 Issues

						About Issues

						If you find any issues with the problem (statement, scoring, time/memory limits, test cases, etc.), you may submit an issue here. A problem moderator will review your issue.

						Guidelines:

							This is not a place to publish discussions, editorials, or requests to debug your code. Issues are only visible to you and problem moderators.

							Do not submit duplicated issues.

							Issues must be filed in English or Chinese only.

				Active Issues 0

				No issues in this category.

				Closed/Resolved Issues 0

				No issues in this category.

						 English					

					العربية
						English
						Español
						Français
						日本語
						한국어
							Türkçe
							简体中文
						繁體中文

				QOJ.ac
 |  QOJ 4.5.48 (2019-2026)

				Made with ❤️ by Qingyu✨ | Contact us: [email protected]

				Server Time: 2026-11-02 16:28:27 (UTC+8)
```


## 45. Sirologija

- Day/Contest: Day 15 / COI 2024
- Problem URL: https://qoj.ac/problem/8897
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\c8d65d17_8897.txt`
- Editorial URL: https://errorgorn.github.io/2024/04/30/COI.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\26476de1_COI.html.txt`

**Problem statement:**

```
https://qoj.ac/problem/8897

Sirologija - Problem - QOJ.ac

									Login

					Register

				QOJ.ac

				QOJ

	QOJ

			 Contests

			 Category

			 Problems

			 Submissions

			 Hack!

			 Blogs

			 Day 1

			Time Limit:			1 s		
				Memory Limit:			1024 MB		
				Total points:			100		

	#8897. Sirologija	

		Statistics	

			Statement		

     Languages

		Default

							简体中文

				Submit			

					Custom Test				

				Attachments			

				Discussions & Issues							

			The problem was used in the following contests:
			Croatian Olympiad in Informatics 2024

Submit

Run

					 Discussions

						About Discussions

						The discussion section is only for posting: General Discussions (problem-solving strategies, alternative approaches), and Off-topic conversations.

						This is NOT for reporting issues! If you want to report bugs or errors, please use the Issues section below.

					Open Discussions 0

					No discussions in this category.

					 Issues

						About Issues

						If you find any issues with the problem (statement, scoring, time/memory limits, test cases, etc.), you may submit an issue here. A problem moderator will review your issue.

						Guidelines:

							This is not a place to publish discussions, editorials, or requests to debug your code. Issues are only visible to you and problem moderators.

							Do not submit duplicated issues.

							Issues must be filed in English or Chinese only.

				Active Issues 0

				No issues in this category.

				Closed/Resolved Issues 0

				No issues in this category.

						 English					

					العربية
						English
						Español
						Français
						日本語
						한국어
							Türkçe
							简体中文
						繁體中文

				QOJ.ac
 |  QOJ 4.5.48 (2019-2026)

				Made with ❤️ by Qingyu✨ | Contact us: [email protected]

				Server Time: 2026-11-02 16:28:27 (UTC+8)
```


## 46. Packing Biscuits

- Day/Contest: Day 16 / IOI 2020
- Problem URL: https://oj.uz/problem/view/IOI20_biscuits
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\9eb0b488_IOI20_biscuits.txt`
- Editorial URL: https://ioi2020.sg/wp-content/uploads/sites/4/2020/09/biscuits-solutions-ISC.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\a8e4dda5_biscuits-solutions-ISC.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI20_biscuits

View problem - Packing Biscuits (IOI20_biscuits) :: oj.uzView problem - Packing Biscuits (IOI20_biscuits)

Packing Biscuits Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o biscuits biscuits.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o biscuits biscuits.cpp
Java/usr/bin/javac -encoding UTF-8 biscuits.java
/bin/sh -c echo "Main-Class: biscuits" > __manifest__.txt
/bin/sh -c jar cfm biscuits.jar __manifest__.txt *.class

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB437157631454.51%

Problem Source
IOI 2020 Day 2 Problem 1

 Attachments
File nameSize
public.zip4.62 KiB
```


## 47. Bus Terminals

- Day/Contest: Day 16 / IOI 2002
- Problem URL: https://dmoj.ca/problem/ioi02p5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_ioi02p5.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2002solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\e8f7f108_ioi2002solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\e8f7f108_ioi2002solutions`

**Problem statement:**

```
https://dmoj.ca/problem/ioi02p5

Submit solution
All submissions
Best submissions
Read editorial
Points:30 (partial)
Time limit:1.0s
Memory limit:32M
Problem type
IOI '02 - Yong-In, Korea

Yong-In city plans to build a bus network with 
𝑁
 bus stops. Each bus stop is at a street corner. Yong-In is a modern city, so its map is a grid of square blocks of equal size. Two of these bus stops are to be selected as hubs 
𝐻
1
 and 
𝐻
2
. The hubs will be connected to each other by a direct bus line and each of the remaining 
𝑁
−
2
 bus stops will be connected directly to either 
𝐻
1
 or 
𝐻
2
 (but not to both), but not to any other bus stop.

The distance between any two bus stops is the length of the shortest possible route following the streets. That is, if a bus stop is represented as 
(
𝑥
,
𝑦
)
 with 
𝑥
-coordinate 
𝑥
 and 
𝑦
-coordinate 
𝑦
, then the distance between two bus stops 
(
𝑥
1
,
𝑦
1
)
 and 
(
𝑥
2
,
𝑦
2
)
 is 
|
𝑥
1
−
𝑥
2
|
+
|
𝑦
1
−
𝑦
2
|
. If bus stops 
𝐴
 and 
𝐵
 are connected to the same hub 
𝐻
1
, then the length of the route from 
𝐴
 to 
𝐵
 is the sum of the distances from 
𝐴
 to 
𝐻
1
 and from 
𝐻
1
 to 
𝐵
. If bus stops 
𝐴
 and 
𝐵
 are connected to different hubs, e.g., 
𝐴
 to 
𝐻
1
 and 
𝐵
 to 
𝐻
2
, then the length of the route from 
𝐴
 to 
𝐵
 is the sum of the distances from 
𝐴
 to 
𝐻
1
, from 
𝐻
1
 to 
𝐻
2
, and from 
𝐻
2
 to 
𝐵
.

The planning authority of Yong-In city would like to make sure that every citizen can reach every point within the city as quickly as possible. Therefore, city planners want to choose two bus stops to be hubs in such a way that in the resulting bus network the length of the longest route between any two bus stops is as short as possible.

One choice 
𝑃
 of two hubs and assignments of bus stops to those hubs is better than another choice 
𝑄
 if the length of the longest bus route is shorter in 
𝑃
 than in 
𝑄
. Your task is to write a program to compute the length of this longest route for the best choice 
𝑃
.

Input Specification

Your program is to read from standard input. The first line contains one positive integer 
𝑁
 
(
2
≤
𝑁
≤
500
)
, the number of bus stops. Each of the remaining 
𝑁
 lines contains the 
𝑥
-coordinate followed by the 
𝑦
-coordinate of a bus stop. The 
𝑥
- and 
𝑦
-coordinates are positive integers 
≤
5
000
. No two bus stops are at the same location.

Output Specification

Your program is to write to standard output. The output contains one line with a single positive integer, the minimum length of the longest bus route for the input.

Sample Input 1
Copy
6
1 7
16 6
12 4
4 4
1 1
11 1
Sample Output 1
Copy
20
Sample Input 2
Copy
7
7 9
10 9
5 3
1 1
7 2
15 6
17 7
Sample Output 2
Copy
25

The following figures show the bus networks for the inputs given above. If in Example 
1
 bus stops 
3
 and 
4
 are selected as hubs then the longest route is either between bus stops 
2
 and 
5
 or between bus stops 
2
 and 
1
. There is no better choice for the hubs, and the answer is 
20
.

For the bus network in Example 
2
, if bus stops 
5
 and 
6
 are selected as hubs then the longest route is obtained between bus stops 
2
 and 
7
. There is no better choice for the hubs, and the answer is 
25
.

Comments

There are no comments at the moment.
```


## 48. Depot

- Day/Contest: Day 16 / IOI 2001
- Problem URL: https://dmoj.ca/problem/ioi01p6
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_ioi01p6.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2001solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\7c09dc59_ioi2001solutions.pdf`

**Problem statement:**

```
https://dmoj.ca/problem/ioi01p6

Submit solution
All submissions
Best submissions
Read editorial
Points:30 (partial)
Time limit:1.0s
Memory limit:32M
Problem type
IOI '01 - Tampere, Finland

A Finnish high technology company has a big rectangular depot. The depot has a worker and a manager. The sides of the depot, in the order around it, are called left, top, right and bottom. The depot area is divided into equal-sized squares by dividing the area into rows and columns. The rows are numbered starting from the top with integers 
1
,
2
,
…
 and the columns are numbered starting from the left with integers 
1
,
2
,
…
.

The depot has containers, which are used to store invaluable technological devices. The containers have distinct identification numbers. Each container occupies one square. The depot is so big, that the number of containers ever to arrive is smaller than the number of rows and smaller than the number of columns. The containers are not removed from the depot, but sometimes a new container arrives. The entry to the depot is at the top left corner.

The worker has arranged the containers around the top left corner of the depot in such a way that he will be able to find them by their identification numbers. He uses the following method.

Suppose that the identification number of the next container to be inserted is 
𝑘
 (container 
𝑘
, for short). The worker travels the first row starting from the left and looks for the first container with identification number larger than 
𝑘
. If no such container is found, then container 
𝑘
 is placed immediately after the rightmost of the containers previously in the row. If such a container 
𝑙
 is found, then container 
𝑙
 is replaced by container 
𝑘
, and 
𝑙
 is inserted to the following row using the same method. If the worker reaches a row having no containers, the container is placed in the leftmost square of that row. Suppose that containers 
3
,
4
,
9
,
2
,
5
,
1
 have arrived to the depot in this order. Then the placement of the containers at the depot is as follows.

Copy
1 4 5
2 9
3

The manager comes to the worker and they have the following dialogue:
Manager: Did container 
5
 arrive before container 
4
?
Worker: No, that is impossible.
Manager: Oh, so you can tell the arrival order of the containers by their placement.
Worker: Generally not. For instance, the containers now in the depot could have arrived in the order 
3
,
2
,
1
,
4
,
9
,
5
 or in the order 
3
,
2
,
1
,
9
,
4
,
5
 or in one of 
14
 other orders.

As the manager does not want to show that the worker seems much smarter, he goes away. You are to help the manager and write a program which, given a container placement, computes all possible orders in which they might have arrived.

Input Specification

The first line contains one integer 
𝑅
: the number of rows with containers in them. The following 
𝑅
 lines contain information about rows 
1
,
…
,
𝑅
 starting from the top as follows. First on each of those lines is an integer 
𝑀
: the number of containers in that row. Following that, there are 
𝑀
 integers on the line: the identification numbers of the containers in the row starting from the left. All container identification numbers 
𝐼
 satisfy 
1
≤
𝐼
≤
50
. The total number of containers in the depot is at least 
1
 and no more than 
13
.

Output Specification

The output should contain as many lines as there are possible arrival orders. Each of these lines contains 
𝑁
 integers: the identification numbers of the containers in the potential arrival order described by that line. All lines describe an arrival order not described in any other line.

Sample Input 1
Copy
3
3 1 4 5
2 2 9
1 3
Sample Output 1
Copy
3 2 1 4 9 5
3 2 1 9 4 5
3 4 2 1 9 5
3 2 4 1 9 5
3 2 9 1 4 5
3 9 2 1 4 5
3 4 2 9 1 5
3 4 9 2 1 5
3 2 4 9 1 5
3 2 9 4 1 5
3 9 2 4 1 5
3 4 2 9 5 1
3 4 9 2 5 1
3 2 4 9 5 1
3 2 9 4 5 1
3 9 2 4 5 1
Sample Input 2
Copy
2
2 1 2
1 3
Sample Output 2
Copy
3 1 2
1 3 2
Scoring

If the output file contains impossible orders or no orders at all, your score is 
0
 for that test case. Otherwise the score for a test case is computed as follows. If the output file contains all possible orders exactly once, your score is 
4
. If the output file contains at least half of the possible orders and each of them exactly once, your score is 
2
. If the output file contains less than half of the possible orders or some of them appear more than once, your score is 
1
.

Comments

There are no comments at the moment.
```


## 49. Empodia

- Day/Contest: Day 17 / IOI 2004
- Problem URL: https://dmoj.ca/problem/ioi04p6
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dmoj_ioi04p6.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2004solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\9409ed56_ioi2004solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\9409ed56_ioi2004solutions`

**Problem statement:**

```
https://dmoj.ca/problem/ioi04p6

Submit solution
All submissions
Best submissions
Read editorial
Points:30 (partial)
Time limit:1.0s
Memory limit:128M
Problem type
IOI '04 - Athens, Greece

The ancient mathematician and philosopher Pythagoras believed that reality is mathematical in nature. Present-day biologists study properties of biosequences. A biosequence is a sequence of 
𝑀
 integers, which

contains each of the numbers 
0
,
1
,
…
,
𝑀
−
1
,
starts with 
0
 and ends with 
𝑀
−
1
, and
has no two elements 
𝐸
, 
𝐸
+
1
 in adjacent positions in this order.

A subsequence consisting of adjacent elements of a biosequence is called a segment.

A segment of a biosequence is called a framed interval if it includes all integers whose values are between the value of the first element, which must be the smallest element in the segment, and the last element, which must be the largest and different from the first. A framed interval is called an empodio if it does not contain any shorter framed intervals.

As an example, consider the biosequence 
(
0
,
3
,
5
,
4
,
6
,
2
,
1
,
7
)
. The whole biosequence is a framed interval. However, it contains another framed interval 
(
3
,
5
,
4
,
6
)
 and therefore it is not an empodio. The framed interval 
(
3
,
5
,
4
,
6
)
 does not contain a shorter framed interval, so it is an empodio. Furthermore, it is the only empodio in that biosequence.

You are to write a program that, given a biosequence, finds all empodia (plural for empodio) in that biosequence.

Input Specification

The first line contains a single integer 
𝑀
: the number of integers in the input biosequence. The following 
𝑀
 lines contain the integers of the biosequence in the order of the sequence. Each of these 
𝑀
 lines contains a single integer.

Output Specification

The first line of output is to contain one integer 
𝐻
: the number of empodia in the input biosequence. The following 
𝐻
 lines describe all empodia of the input biosequence in the order of appearance of the starting point in the biosequence. Each of these lines is to contain two integers 
𝐴
 and 
𝐵
 (in that order) separated by a space, where the 
𝐴
-th element of the input biosequence is the first element of the empodio and the 
𝐵
-th element of the input biosequence is the last element of the empodio.

Sample Input
Copy
8
0
3
5
4
6
2
1
7
Sample Output
Copy
1
2 5
Constraints

In one input, 
1
000
000
≤
𝑀
≤
1
100
000
. In all other inputs, 
1
≤
𝑀
≤
60
000
. Additionally, in 
50
%
 of the inputs, 
𝑀
≤
2
600
.

Comments


1
Behesht 
commented on Nov. 9, 2025, 1:21 p.m.

if you're wondering why n goes up to 1.1e6, it's basically there to stop people like me from trying a segment tree solution:_) I got destroyed by memory/time and still ended up with 95/100. So yeah... don't be me :D
```


## 50. Sails

- Day/Contest: Day 17 / IOI 2007
- Problem URL: https://oj.uz/problem/view/IOI07_sails
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\99b41ba7_IOI07_sails.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2007solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\faa4e942_ioi2007solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI07_sails

View problem - Sails (IOI07_sails) :: oj.uzView problem - Sails (IOI07_sails)

Sails Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o sails sails.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o sails sails.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o sails sails.cpp
Java/usr/bin/javac -encoding UTF-8 sails.java
/bin/sh -c echo "Main-Class: sails" > __manifest__.txt
/bin/sh -c jar cfm sails.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b sails.py
/bin/mv sails.pyc __main__.pyc
/usr/bin/zip sails.pyz.zip __main__.pyc
/bin/mv sails.pyz.zip sails.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms64 MiB155244236482.35%

Problem Source
IOI 2007 Day 1 Problem 3
```


## 51. Salesman

- Day/Contest: Day 17 / IOI 2009
- Problem URL: https://oj.uz/problem/view/IOI09_salesman
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\54d26e7e_IOI09_salesman.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2009solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\4b9b1442_ioi2009solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI09_salesman

View problem - Salesman (IOI09_salesman) :: oj.uzView problem - Salesman (IOI09_salesman)

Salesman Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o salesman salesman.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o salesman salesman.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o salesman salesman.cpp
Java/usr/bin/javac -encoding UTF-8 salesman.java
/bin/sh -c echo "Main-Class: salesman" > __manifest__.txt
/bin/sh -c jar cfm salesman.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b salesman.py
/bin/mv salesman.pyc __main__.pyc
/usr/bin/zip salesman.pyz.zip __main__.pyc
/bin/mv salesman.pyz.zip salesman.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms64 MiB105518714577.54%

Problem Source
IOI 2009 Day 2 Problem 4
```


## 52. Rectangles

- Day/Contest: Day 18 / IOI 2019
- Problem URL: https://oj.uz/problem/view/IOI19_rect
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\115f4d95_IOI19_rect.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2019solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI19_rect

View problem - Rectangles (IOI19_rect) :: oj.uzView problem - Rectangles (IOI19_rect)

Rectangles Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o rect rect.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o rect rect.cpp
Java/usr/bin/javac -encoding UTF-8 rect.java
/bin/sh -c echo "Main-Class: rect" > __manifest__.txt
/bin/sh -c jar cfm rect.jar __manifest__.txt *.class

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5000 ms1024 MiB602162329947.99%

Problem Source
IOI 2019 Day 1 Problem 3

 Attachments
File nameSize
rect.zip3.60 KiB
```


## 53. Wiring

- Day/Contest: Day 18 / IOI 2017
- Problem URL: https://oj.uz/problem/view/IOI17_wiring
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\cbde1021_IOI17_wiring.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2017solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI17_wiring

View problem - Wiring (IOI17_wiring) :: oj.uzView problem - Wiring (IOI17_wiring)

Wiring Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o wiring wiring.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o wiring wiring.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms256 MiB465574146763.02%

Problem Source
International Olympiad in Informatics 2017 Day 1 Problem 2

 Attachments
File nameSize
public.zip4.77 KiB
```


## 54. Werewolf

- Day/Contest: Day 18 / IOI 2018
- Problem URL: https://oj.uz/problem/view/IOI18_werewolf
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\f717b122_IOI18_werewolf.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2018solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI18_werewolf

View problem - Werewolf (IOI18_werewolf) :: oj.uzView problem - Werewolf (IOI18_werewolf)

Werewolf Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o werewolf werewolf.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o werewolf werewolf.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms512 MiB456179752666.00%

Problem Source
IOI 2018 Day 1 Problem 3

 Attachments
File nameSize
dist.zip4.74 KiB
```


## 55. Teams

- Day/Contest: Day 19 / IOI 2015
- Problem URL: https://oj.uz/problem/view/IOI15_teams
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\63be65b6_IOI15_teams.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2015solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\b78ab5b7_ioi2015solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\b78ab5b7_ioi2015solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI15_teams

View problem - Teams (IOI15_teams) :: oj.uzView problem - Teams (IOI15_teams)

Teams Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o teams teams.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o teams teams.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o teams teams.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms512 MiB428651822643.63%

Problem Source
IOI 2015 Day 1 Problem 3

 Attachments
File nameSize
graders.zip6.24 KiB
```


## 56. Dungeons Game

- Day/Contest: Day 19 / IOI 2021
- Problem URL: https://oj.uz/problem/view/IOI21_dungeons
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\79c8c9cb_IOI21_dungeons.txt`
- Editorial URL: https://codeforces.com/blog/entry/92194#comment-808628
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\01219589_92194.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI21_dungeons

View problem - Dungeons Game (IOI21_dungeons) :: oj.uzView problem - Dungeons Game (IOI21_dungeons)

Dungeons Game Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o dungeons dungeons.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o dungeons dungeons.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
7000 ms2048 MiB520641518243.86%

Problem Source
IOI 2021 Day 2 Problem 2

 Attachments
File nameSize
dungeons.zip1.86 KiB
```


## 57. Festival

- Day/Contest: Day 19 / IOI 2025
- Problem URL: https://oj.uz/problem/view/IOI25_festival
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\076f6f91_IOI25_festival.txt`
- Editorial URL: https://codeforces.com/blog/entry/145172#comment-1299575
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\1ad38b86_145172.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI25_festival

View problem - Festival (IOI25_festival) :: oj.uzView problem - Festival (IOI25_festival)

Festival Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o festival festival.cpp festival.h grader.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o festival festival.cpp festival.h grader.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB231527612043.48%

Problem Source
IOI 2025 Day 2 Problem 1

 Attachments
File nameSize
festival.zip2.62 KiB
```


## 58. World Map

- Day/Contest: Day 20 / IOI 2025
- Problem URL: https://oj.uz/problem/view/IOI25_worldmap
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\b37d8a0e_IOI25_worldmap.txt`
- Editorial URL: https://codeforces.com/blog/entry/145172#comment-1298794
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\c3c624ff_145172.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI25_worldmap

View problem - World Map (IOI25_worldmap) :: oj.uzView problem - World Map (IOI25_worldmap)

World Map Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o worldmap worldmap.cpp worldmap.h grader.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o worldmap worldmap.cpp worldmap.h grader.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB223230111638.54%

Problem Source
IOI 2025 Day 1 Problem 3

 Attachments
File nameSize
worldmap.zip2.28 KiB
```


## 59. Closing Time

- Day/Contest: Day 20 / IOI 2023
- Problem URL: https://oj.uz/problem/view/IOI23_closing
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\3f7827b9_IOI23_closing.txt`
- Editorial URL: https://codeforces.com/blog/entry/153165
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\86cdf172_153165.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI23_closing

View problem - Closing Time (IOI23_closing) :: oj.uzView problem - Closing Time (IOI23_closing)

Closing Time Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o closing closing.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o closing closing.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB367338711429.46%

Problem Source
IOI 2023 Day 1 Problem 1

 Attachments
File nameSize
closing.zip1.89 KiB
```


## 60. Fountain Parks

- Day/Contest: Day 20 / IOI 2021
- Problem URL: https://oj.uz/problem/view/IOI21_parks
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\f44c0b9e_IOI21_parks.txt`
- Editorial URL: https://codeforces.com/blog/entry/92083#comment-807698
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\604aecf0_92083.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI21_parks

View problem - Fountain Parks (IOI21_parks) :: oj.uzView problem - Fountain Parks (IOI21_parks)

Fountain Parks Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o parks parks.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o parks parks.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3500 ms2048 MiB278634311934.69%

Problem Source
IOI 2021 Day 1 Problem 3

 Attachments
File nameSize
parks.zip2.47 KiB
```


## 61. Rail

- Day/Contest: Day 21 / IOI 2014
- Problem URL: https://oj.uz/problem/view/IOI14_rail
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\7a6085db_IOI14_rail.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2014solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\53f6a20f_ioi2014solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\53f6a20f_ioi2014solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI14_rail

View problem - Rail (IOI14_rail) :: oj.uzView problem - Rail (IOI14_rail)

Rail Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o rail rail.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o rail rail.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o rail rail.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms256 MiB311448126454.89%

Problem Source
IOI 2014 Day 1 Problem 1

 Attachments
File nameSize
rail-templates.tar26.50 KiB
```


## 62. Holiday

- Day/Contest: Day 21 / IOI 2014
- Problem URL: https://oj.uz/problem/view/IOI14_holiday
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\0e006f29_IOI14_holiday.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2014solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\53f6a20f_ioi2014solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\53f6a20f_ioi2014solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI14_holiday

View problem - Holiday (IOI14_holiday) :: oj.uzView problem - Holiday (IOI14_holiday)

Holiday Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o holiday holiday.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o holiday holiday.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o holiday holiday.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5000 ms64 MiB392856535562.83%

Problem Source
IOI 2014 Day 2 Problem 3

 Attachments
File nameSize
holiday-templates.tar896.50 KiB
```


## 63. Last Supper

- Day/Contest: Day 21 / IOI 2012
- Problem URL: https://oj.uz/problem/view/IOI12_supper
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\b0266649_IOI12_supper.txt`
- Editorial URL: https://blog.brucemerry.org.za/2012/09/ioi-2012-day-2-analysis.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\1a5332f7_ioi-2012-day-2-analysis.html.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI12_supper

View problem - Last supper (IOI12_supper) :: oj.uzView problem - Last supper (IOI12_supper)

Last supper Two steps Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o advisor advisor.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o advisor advisor.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o advisor advisor.cpp

Step #2
LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o assistant assistant.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o assistant assistant.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o assistant assistant.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2500 ms256 MiB179529019968.62%

Problem Source
IOI 2012 Day 2 Problem 2

 Attachments
File nameSize
grader.zip4.00 KiB
```


## 64. Longest Trip

- Day/Contest: Day 22 / IOI 2023
- Problem URL: https://oj.uz/problem/view/IOI23_longesttrip
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\58728794_IOI23_longesttrip.txt`
- Editorial URL: https://blog.brucemerry.org.za/2023/11/ioi-2023-day-1.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\d6fb9ad4_ioi-2023-day-1.html.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI23_longesttrip

View problem - Longest Trip (IOI23_longesttrip) :: oj.uzView problem - Longest Trip (IOI23_longesttrip)

Longest Trip Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o longesttrip longesttrip.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o longesttrip longesttrip.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB451643116838.98%

Problem Source
IOI 2023 Day 1 Problem 2

 Attachments
File nameSize
longesttrip.zip7.69 KiB
```


## 65. Comparing Plants

- Day/Contest: Day 22 / IOI 2020
- Problem URL: https://oj.uz/problem/view/IOI20_plants
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\b7ced849_IOI20_plants.txt`
- Editorial URL: https://ioi2020.sg/wp-content/uploads/sites/4/2020/09/plants-solutions-ISC.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\51067f18_plants-solutions-ISC.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI20_plants

View problem - Comparing Plants (IOI20_plants) :: oj.uzView problem - Comparing Plants (IOI20_plants)

Comparing Plants Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o plants plants.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o plants plants.cpp
Java/usr/bin/javac -encoding UTF-8 plants.java
/bin/sh -c echo "Main-Class: plants" > __manifest__.txt
/bin/sh -c jar cfm plants.jar __manifest__.txt *.class

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms2048 MiB425644615434.53%

Problem Source
IOI 2020 Day 1 Problem 1

 Attachments
File nameSize
public.zip4.72 KiB
```


## 66. Rarest Insects

- Day/Contest: Day 22 / IOI 2022
- Problem URL: https://oj.uz/problem/view/IOI22_insects
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\922e9ba9_IOI22_insects.txt`
- Editorial URL: https://ioi2022.id/data/editorial.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\476212db_editorial.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI22_insects

View problem - Rarest Insects (IOI22_insects) :: oj.uzView problem - Rarest Insects (IOI22_insects)

Rarest Insects Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o insects insects.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o insects insects.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms2048 MiB704053321840.90%

Problem Source
IOI 2022 Day 2 Problem 2

 Attachments
File nameSize
insects.zip2.19 KiB
```


## 67. Sphinx's Riddle

- Day/Contest: Day 23 / IOI 2024
- Problem URL: https://oj.uz/problem/view/IOI24_sphinx
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\a15fff0c_IOI24_sphinx.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2024solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions`

(Statement too long to inline; see file above.)


## 68. Prisoner Challenge

- Day/Contest: Day 23 / IOI 2022
- Problem URL: https://oj.uz/problem/view/IOI22_prison
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\825bb31a_IOI22_prison.txt`
- Editorial URL: https://ioi2022.id/data/editorial.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\476212db_editorial.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI22_prison

View problem - Prisoner Challenge (IOI22_prison) :: oj.uzView problem - Prisoner Challenge (IOI22_prison)

Prisoner Challenge Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o prison prison.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o prison prison.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB328551116732.68%

Problem Source
IOI 2022 Day 1 Problem 2

 Attachments
File nameSize
prison.zip2.14 KiB
```


## 69. Radio Towers

- Day/Contest: Day 23 / IOI 2022
- Problem URL: https://oj.uz/problem/view/IOI22_towers
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\26dc8cae_IOI22_towers.txt`
- Editorial URL: https://ioi2022.id/data/editorial.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\476212db_editorial.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI22_towers

View problem - Radio Towers (IOI22_towers) :: oj.uzView problem - Radio Towers (IOI22_towers)

Radio Towers Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o towers towers.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o towers towers.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms2048 MiB288136712132.97%

Problem Source
IOI 2022 Day 1 Problem 3

 Attachments
File nameSize
towers.zip1.76 KiB
```


## 70. Towns

- Day/Contest: Day 24 / IOI 2015
- Problem URL: https://oj.uz/problem/view/IOI15_towns
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8ea25502_IOI15_towns.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2015solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\b78ab5b7_ioi2015solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\b78ab5b7_ioi2015solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI15_towns

View problem - Towns (IOI15_towns) :: oj.uzView problem - Towns (IOI15_towns)

Towns Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o towns towns.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o towns towns.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o towns towns.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms512 MiB394732715146.18%

Problem Source
IOI 2015 Day 2 Problem 3

 Attachments
File nameSize
graders.zip6.58 KiB
```


## 71. Parrots

- Day/Contest: Day 24 / IOI 2011
- Problem URL: https://oj.uz/problem/view/IOI11_parrots
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ab6c9084_IOI11_parrots.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2011solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\57ea0997_ioi2011solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\57ea0997_ioi2011solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI11_parrots

View problem - Parrots (IOI11_parrots) :: oj.uzView problem - Parrots (IOI11_parrots)

Parrots Two steps Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o encoder encoder.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o encoder encoder.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o encoder encoder.cpp

Step #2
LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o decoder decoder.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o decoder decoder.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o decoder decoder.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms256 MiB337051212223.83%

Problem Source
IOI 2011 Day 2 Problem 3

 Attachments
File nameSize
parrots.zip6.54 KiB
```


## 72. Saveit

- Day/Contest: Day 24 / IOI 2010
- Problem URL: https://oj.uz/problem/view/IOI10_saveit
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\b3af8f80_IOI10_saveit.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2010solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6bc731ad_ioi2010solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI10_saveit

View problem - Saveit (IOI10_saveit) :: oj.uzView problem - Saveit (IOI10_saveit)

Saveit Two steps Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o encoder encoder.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o encoder encoder.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o encoder encoder.cpp

Step #2
LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o decoder decoder.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o decoder decoder.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o decoder decoder.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
10000 ms256 MiB89316310966.87%

Problem Source
IOI 2010 Day 2 Problem 4

 Attachments
File nameSize
saveit.zip97.52 KiB
```


## 73. Game

- Day/Contest: Day 25 / IOI 2013
- Problem URL: https://oj.uz/problem/view/IOI13_game
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\7cf2066f_IOI13_game.txt`
- Editorial URL: https://blog.brucemerry.org.za/2013/07/ioi-2013-day-2-analysis.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\4e44a435_ioi-2013-day-2-analysis.html.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI13_game

View problem - Game (IOI13_game) :: oj.uzView problem - Game (IOI13_game)

Game Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o game game.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o game game.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o game game.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
13000 ms250 MiB487547524351.16%

Problem Source
IOI 2013 Day 2 Problem 3

 Attachments
File nameSize
game.zip2.89 KiB
```


## 74. Dancing Elephants

- Day/Contest: Day 25 / IOI 2011
- Problem URL: https://oj.uz/problem/view/IOI11_elephants
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\5a2a7b1a_IOI11_elephants.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2011solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\57ea0997_ioi2011solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\57ea0997_ioi2011solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI11_elephants

View problem - Dancing Elephants (IOI11_elephants) :: oj.uzView problem - Dancing Elephants (IOI11_elephants)

Dancing Elephants Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o elephants elephants.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o elephants elephants.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o elephants elephants.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
9000 ms256 MiB335936520756.71%

Problem Source
IOI 2011 Day 2 Problem 2

 Attachments
File nameSize
elephants.zip3.01 KiB
```


## 75. Ideal City

- Day/Contest: Day 25 / IOI 2012
- Problem URL: https://oj.uz/problem/view/IOI12_city
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\f4e2e957_IOI12_city.txt`
- Editorial URL: https://blog.brucemerry.org.za/2012/09/ioi-2012-day-2-analysis.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\1a5332f7_ioi-2012-day-2-analysis.html.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI12_city

View problem - Ideal city (IOI12_city) :: oj.uzView problem - Ideal city (IOI12_city)

Ideal city Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o city city.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o city city.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o city city.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms256 MiB157535826975.14%

Problem Source
IOI 2012 Day 2 Problem 1

 Attachments
File nameSize
env.zip1.92 KiB
```


## 76. Bit Shift Registers

- Day/Contest: Day 26 / IOI 2021
- Problem URL: https://oj.uz/problem/view/IOI21_registers
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\2337790a_IOI21_registers.txt`
- Editorial URL: https://codeforces.com/blog/entry/92194#comment-808609
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\b46781ad_92194.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI21_registers

View problem - Bit Shift Registers (IOI21_registers) :: oj.uzView problem - Bit Shift Registers (IOI21_registers)

Bit Shift Registers Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o registers registers.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o registers registers.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB12282247232.14%

Problem Source
IOI 2021 Day 2 Problem 3

 Attachments
File nameSize
registers.zip3.70 KiB
```


## 77. Split the Attractions

- Day/Contest: Day 26 / IOI 2019
- Problem URL: https://oj.uz/problem/view/IOI19_split
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\75b7e0dc_IOI19_split.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2019solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI19_split

View problem - Split the Attractions (IOI19_split) :: oj.uzView problem - Split the Attractions (IOI19_split)

Split the Attractions Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o split split.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o split split.cpp
Java/usr/bin/javac -encoding UTF-8 split.java
/bin/sh -c echo "Main-Class: split" > __manifest__.txt
/bin/sh -c jar cfm split.jar __manifest__.txt *.class

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB618165328844.10%

Problem Source
IOI 2019 Day 1 Problem 2

 Attachments
File nameSize
split.zip3.67 KiB
```


## 78. Thousand Islands

- Day/Contest: Day 26 / IOI 2022
- Problem URL: https://oj.uz/problem/view/IOI22_islands
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\f6a7de56_IOI22_islands.txt`
- Editorial URL: https://ioi2022.id/data/editorial.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\476212db_editorial.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI22_islands

View problem - Thousands Islands (IOI22_islands) :: oj.uzView problem - Thousands Islands (IOI22_islands)

Thousands Islands Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o islands islands.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o islands islands.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB40133027023.18%

Problem Source
IOI 2022 Day 2 Problem 3

 Attachments
File nameSize
islands.zip2.30 KiB
```


## 79. Message

- Day/Contest: Day 27 / IOI 2024
- Problem URL: https://oj.uz/problem/view/IOI24_message
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\e590fbbf_IOI24_message.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2024solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions`

(Statement too long to inline; see file above.)


## 80. Tree

- Day/Contest: Day 27 / IOI 2024
- Problem URL: https://oj.uz/problem/view/IOI24_tree
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\7e5f78db_IOI24_tree.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2024solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI24_tree

View problem - Tree (IOI24_tree) :: oj.uzView problem - Tree (IOI24_tree)

Tree Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o tree tree.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o tree tree.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms2048 MiB10361674225.15%

Consider a tree consisting of $N$ vertices,
 numbered from $0$ to $N-1$.
Vertex $0$ is called the root.
Every vertex, except for the root, has a single parent.
For every $i$, such that $1 \leq i < N$,
 the parent of vertex $i$ is vertex $P[i]$, where $P[i] < i$.
We also assume $P[0] = -1$.

For any vertex $i$ ($0 \leq i < N$),
 the subtree of $i$ is the set of the following vertices:

$i$, and

any vertex whose parent is $i$, and

any vertex whose parent's parent is $i$, and

any vertex whose parent's parent's parent is $i$, and

etc.

The picture below shows an example tree consisting of $N = 6$ vertices.
Each arrow connects a vertex to its parent,
 except for the root, which has no parent.
The subtree of vertex $2$ contains vertices $2, 3, 4$ and $5$.
The subtree of vertex $0$ contains all $6$ vertices of the tree
 and the subtree of vertex $4$ contains only vertex $4$.

Each vertex is assigned a nonnegative integer weight.
We denote the weight of vertex $i$ ($0 \leq i < N$) by $W[i]$.

Your task is to write a program that will answer $Q$ queries,
 each specified by a pair of positive integers $(L, R)$.
The answer to the query should be computed as follows.

Consider assigning an integer,
 called a coefficient, to each vertex of the tree.
Such an assignment is described by a sequence $C[0], \ldots, C[N-1]$,
 where $C[i]$ ($0 \leq i < N$) is the coefficient assigned to vertex $i$.
Let us call this sequence a coefficient sequence.
Note that the elements of the coefficient sequence can be negative, $0$, or positive.

For a query $(L, R)$,
 a coefficient sequence is called valid
 if, for every vertex $i$ ($0 \leq i < N$),
 the following condition holds:
 the sum of the coefficients of the vertices in the subtree of vertex $i$
 is not less than $L$ and not greater than $R$.

For a given coefficient sequence $C[0], \ldots, C[N-1]$,
 the cost of a vertex $i$ is $|C[i]| \cdot W[i]$,
 where $|C[i]|$ denotes the absolute value of $C[i]$.
Finally, the total cost is the sum of the costs of all vertices.
Your task is to compute, for each query,
 the minimum total cost that can be attained by some valid coefficient sequence.

It can be shown that for any query, at least one valid coefficient sequence exists.

Implementation Details

You should implement the following two procedures:

void init(std::vector<int> P, std::vector<int> W)

$P$, $W$: arrays of integers of length $N$
 specifying the parents and the weights.

This procedure is called exactly once
 in the beginning of the interaction between the grader and your program in each test case.

long long query(int L, int R)

$L$, $R$: integers describing a query.

This procedure is called $Q$ times after the invocation of init in each test case.

This procedure should return the answer to the given query.

Constraints

$1 \leq N \leq 200,000$

$1 \leq Q \leq 100,000$

$P[0] = -1$

$0 \leq P[i] < i$ for each $i$ such that $1 \leq i < N$

$0 \leq W[i] \leq 1,000,000$ for each $i$ such that $0 \leq i < N$

$1 \leq L \leq R \leq 1,000,000$ in each query

Subtasks

Subtask
Score
Additional Constraints

1
$10$
$Q \leq 10$; $W[P[i]] \leq W[i]$ for each $i$ such that $1 \leq i < N$

2
$13$
$Q \leq 10$; $N \leq 2,000$

3
$18$
$Q \leq 10$; $N \leq 60,000$

4
$7$
$W[i] = 1$ for each $i$ such that $0 \leq i < N$

5
$11$
$W[i] \leq 1$ for each $i$ such that $0 \leq i < N$

6
$22$
$L = 1$

7
$19$
No additional constraints.

Examples

Consider the following calls:

init([-1, 0, 0], [1, 1, 1])

The tree consists of $3$ vertices, the root and its $2$ children.
All vertices have weight $1$.

query(1, 1)

In this query $L = R = 1$,
 which means the sum of coefficients in every subtree must be equal to $1$.
Consider the coefficient sequence $[-1, 1, 1]$.
The tree and the corresponding coefficients (in shaded rectangles) are illustrated below.

For every vertex $i$ ($0 \leq i < 3$), the sum of the coefficients of all vertices
 in the subtree of $i$ is equal to $1$. 
Hence, this coefficient sequence is valid.
The total cost is computed as follows:

Vertex
Weight
Coefficient
Cost

0
1
-1
$\mid -1 \mid \cdot 1 = 1$

1
1
1
$\mid 1 \mid \cdot 1 = 1$

2
1
1
$\mid 1 \mid \cdot 1 = 1$

Therefore the total cost is $3$.
This is the only valid coefficient sequence,
 therefore this call should return $3$.

query(1, 2)

The minimum total cost for this query is $2$,
 and is attained when the coefficient sequence is $[0, 1, 1]$.

Sample Grader

Input format:

N
P[1]  P[2] ...  P[N-1]
W[0]  W[1] ...  W[N-2] W[N-1]
Q
L[0]  R[0]
L[1]  R[1]
...
L[Q-1]  R[Q-1]

where $L[j]$ and $R[j]$
 (for $0 \leq j < Q$)
 are the input arguments in the $j$-th call to query.
Note that the second line of the input contains only $N-1$ integers,
 as the sample grader does not read the value of $P[0]$.

Output format:

A[0]
A[1]
...
A[Q-1]

where $A[j]$
 (for $0 \leq j < Q$)
 is the value returned by the $j$-th call to query.

Problem Source
IOI 2024 Day 1 Problem 3

 Attachments
File nameSize
tree.zip2.39 KiB
```


## 81. Roller Coaster Railroad

- Day/Contest: Day 27 / IOI 2016
- Problem URL: https://oj.uz/problem/view/IOI16_railroad
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\de769407_IOI16_railroad.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2016solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\7682fb6c_ioi2016solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI16_railroad

View problem - Roller Coaster Railroad (IOI16_railroad) :: oj.uzView problem - Roller Coaster Railroad (IOI16_railroad)

Roller Coaster Railroad Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o railroad railroad.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o railroad railroad.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o railroad railroad.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB273454524745.32%

Problem Source
IOI 2016 Day 1 Problem 2

 Attachments
File nameSize
grader.zip3.17 KiB
```


## 82. Ancient Books

- Day/Contest: Day 28 / IOI 2017
- Problem URL: https://oj.uz/problem/view/IOI17_books
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\26f35e4e_IOI17_books.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2017solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI17_books

View problem - Ancient Books (IOI17_books) :: oj.uzView problem - Ancient Books (IOI17_books)

Ancient Books Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o books books.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o books books.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB456153520538.32%

Problem Source
International Olympiad in Informatics 2017 Day 2 Problem 3

 Attachments
File nameSize
public.zip4.72 KiB
```


## 83. Toy Train

- Day/Contest: Day 28 / IOI 2017
- Problem URL: https://oj.uz/problem/view/IOI17_train
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ce369864_IOI17_train.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2017solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI17_train

View problem - Toy Train (IOI17_train) :: oj.uzView problem - Toy Train (IOI17_train)

Toy Train Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o train train.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o train train.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms256 MiB368141820749.52%

Problem Source
International Olympiad in Informatics 2017 Day 1 Problem 3

 Attachments
File nameSize
public.zip5.02 KiB
```


## 84. Simurgh

- Day/Contest: Day 28 / IOI 2017
- Problem URL: https://oj.uz/problem/view/IOI17_simurgh
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\bdc388fd_IOI17_simurgh.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2017solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a4eccd2_ioi2017solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI17_simurgh

View problem - Simurgh (IOI17_simurgh) :: oj.uzView problem - Simurgh (IOI17_simurgh)

Simurgh Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o simurgh simurgh.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o simurgh simurgh.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB315642215436.49%

Problem Source
International Olympiad in Informatics 2017 Day 2 Problem 2

 Attachments
File nameSize
public.zip6.00 KiB
```


## 85. Training

- Day/Contest: Day 29 / IOI 2007
- Problem URL: https://oj.uz/problem/view/IOI07_training
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\d7046bef_IOI07_training.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2007solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\faa4e942_ioi2007solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI07_training

View problem - Training (IOI07_training) :: oj.uzView problem - Training (IOI07_training)

Training Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o training training.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o training training.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o training training.cpp
Java/usr/bin/javac -encoding UTF-8 training.java
/bin/sh -c echo "Main-Class: training" > __manifest__.txt
/bin/sh -c jar cfm training.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b training.py
/bin/mv training.pyc __main__.pyc
/usr/bin/zip training.pyz.zip __main__.pyc
/bin/mv training.pyz.zip training.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
300 ms512 MiB65918016088.89%

Problem Source
IOI 2007 Day 2 Problem 3
```


## 86. Wombats

- Day/Contest: Day 29 / IOI 2013
- Problem URL: https://oj.uz/problem/view/IOI13_wombats
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\79047a0a_IOI13_wombats.txt`
- Editorial URL: https://blog.brucemerry.org.za/2013/07/ioi-2013-day-1-analysis.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\80cad17b_ioi-2013-day-1-analysis.html.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI13_wombats

View problem - Wombats (IOI13_wombats) :: oj.uzView problem - Wombats (IOI13_wombats)

Wombats Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o wombats wombats.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o wombats wombats.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o wombats wombats.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
20000 ms256 MiB250929915852.84%

Problem Source
IOI 2013 Day 1 Problem 3

 Attachments
File nameSize
wombats.zip2.97 KiB
```


## 87. Soccer Stadium

- Day/Contest: Day 29 / IOI 2023
- Problem URL: https://oj.uz/problem/view/IOI23_soccer
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\a127d879_IOI23_soccer.txt`
- Editorial URL: https://blog.brucemerry.org.za/2023/11/ioi-2023-day-1.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\d6fb9ad4_ioi-2023-day-1.html.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI23_soccer

View problem - Soccer Stadium (IOI23_soccer) :: oj.uzView problem - Soccer Stadium (IOI23_soccer)

Soccer Stadium Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o soccer soccer.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o soccer soccer.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4500 ms2048 MiB26523246419.75%

Problem Source
IOI 2023 Day 1 Problem 3

 Attachments
File nameSize
soccer.zip1.70 KiB
```


## 88. Reverse

- Day/Contest: Day 30 / IOI 2003
- Problem URL: https://oj.uz/problem/view/IOI03_reverse
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\2f7b4901_IOI03_reverse.txt`
- Editorial URL: https://github.com/mostafa-saad/MyCompetitiveProgramming/blob/master/Olympiad/IOI/official/2003/reverse.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\4f3ba302_reverse.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI03_reverse

View problem - Reverse (IOI03_reverse) :: oj.uzView problem - Reverse (IOI03_reverse)

Reverse Output Only Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
Text/usr/bin/cp reverse-out-01.txt reverse-out-01.o.txt

Step #2
LanguageCompilation command
Text/usr/bin/cp reverse-out-02.txt reverse-out-02.o.txt

Step #3
LanguageCompilation command
Text/usr/bin/cp reverse-out-03.txt reverse-out-03.o.txt

Step #4
LanguageCompilation command
Text/usr/bin/cp reverse-out-04.txt reverse-out-04.o.txt

Step #5
LanguageCompilation command
Text/usr/bin/cp reverse-out-05.txt reverse-out-05.o.txt

Step #6
LanguageCompilation command
Text/usr/bin/cp reverse-out-06.txt reverse-out-06.o.txt

Step #7
LanguageCompilation command
Text/usr/bin/cp reverse-out-07.txt reverse-out-07.o.txt

Step #8
LanguageCompilation command
Text/usr/bin/cp reverse-out-08.txt reverse-out-08.o.txt

Step #9
LanguageCompilation command
Text/usr/bin/cp reverse-out-09.txt reverse-out-09.o.txt

Step #10
LanguageCompilation command
Text/usr/bin/cp reverse-out-10.txt reverse-out-10.o.txt

Step #11
LanguageCompilation command
Text/usr/bin/cp reverse-out-11.txt reverse-out-11.o.txt

Step #12
LanguageCompilation command
Text/usr/bin/cp reverse-out-12.txt reverse-out-12.o.txt

Step #13
LanguageCompilation command
Text/usr/bin/cp reverse-out-13.txt reverse-out-13.o.txt

Step #14
LanguageCompilation command
Text/usr/bin/cp reverse-out-14.txt reverse-out-14.o.txt

Step #15
LanguageCompilation command
Text/usr/bin/cp reverse-out-15.txt reverse-out-15.o.txt

Step #16
LanguageCompilation command
Text/usr/bin/cp reverse-out-16.txt reverse-out-16.o.txt

Statement
Submit
Statistics
All submissions
# of submissions# of submitted usersSolved #Accepted user ratio
40540717.50%

File names should be reverse-out-%02d.txt for each K = 1 to 16.

{{viewpdf:statement_en}}

Problem Source
IOI 2003 Day 1 Problem 3

 Attachments
File nameSize
tests.zip2.45 KiB
```


## 89. Broken Line

- Day/Contest: Day 30 / IOI 2019
- Problem URL: https://oj.uz/problem/view/IOI19_line
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\eba8bbb5_IOI19_line.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2019solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI19_line

View problem - Broken Line (IOI19_line) :: oj.uzView problem - Broken Line (IOI19_line)

Broken Line Output Only Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
Text/usr/bin/cp 01.out.txt 01.out.o.txt

Step #2
LanguageCompilation command
Text/usr/bin/cp 02.out.txt 02.out.o.txt

Step #3
LanguageCompilation command
Text/usr/bin/cp 03.out.txt 03.out.o.txt

Step #4
LanguageCompilation command
Text/usr/bin/cp 04.out.txt 04.out.o.txt

Step #5
LanguageCompilation command
Text/usr/bin/cp 05.out.txt 05.out.o.txt

Step #6
LanguageCompilation command
Text/usr/bin/cp 06.out.txt 06.out.o.txt

Step #7
LanguageCompilation command
Text/usr/bin/cp 07.out.txt 07.out.o.txt

Step #8
LanguageCompilation command
Text/usr/bin/cp 08.out.txt 08.out.o.txt

Step #9
LanguageCompilation command
Text/usr/bin/cp 09.out.txt 09.out.o.txt

Step #10
LanguageCompilation command
Text/usr/bin/cp 10.out.txt 10.out.o.txt

Statement
Submit
Statistics
All submissions
# of submissions# of submitted usersSolved #Accepted user ratio
40615076212.23%

Problem Source
IOI 2019 Day 2 Problem 1

 Attachments
File nameSize
line.zip5.37 MiB
```


## 90. Aliens

- Day/Contest: Day 30 / IOI 2016
- Problem URL: https://oj.uz/problem/view/IOI16_aliens
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8accae07_IOI16_aliens.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2016solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\7682fb6c_ioi2016solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI16_aliens

View problem - Aliens (IOI16_aliens) :: oj.uzView problem - Aliens (IOI16_aliens)

Aliens Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o aliens aliens.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o aliens aliens.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o aliens aliens.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB867367238957.89%

Problem Source
IOI 2016 Day 2 Problem 3

 Attachments
File nameSize
grader.zip5.33 KiB
```


## 91. Highway Tolls

- Day/Contest: Day 31 / IOI 2018
- Problem URL: https://oj.uz/problem/view/IOI18_highway
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\48a015e1_IOI18_highway.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2018solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI18_highway

View problem - Highway Tolls (IOI18_highway) :: oj.uzView problem - Highway Tolls (IOI18_highway)

Highway Tolls Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o highway highway.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o highway highway.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1500 ms256 MiB464557024142.28%

Problem Source
IOI 2018 Day 2 Problem 2

 Attachments
File nameSize
dist.zip7.30 KiB
```


## 92. Seats

- Day/Contest: Day 31 / IOI 2018
- Problem URL: https://oj.uz/problem/view/IOI18_seats
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ef3d2c3c_IOI18_seats.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2018solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI18_seats

View problem - Seats (IOI18_seats) :: oj.uzView problem - Seats (IOI18_seats)

Seats Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o seats seats.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o seats seats.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms256 MiB357253825547.40%

Problem Source
IOI 2018 Day 1 Problem 2

 Attachments
File nameSize
dist.zip4.57 KiB
```


## 93. Counting Mushrooms

- Day/Contest: Day 31 / IOI 2020
- Problem URL: https://oj.uz/problem/view/IOI20_mushrooms
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\e7006c23_IOI20_mushrooms.txt`
- Editorial URL: https://ioi2020.sg/wp-content/uploads/sites/4/2020/09/mushrooms-solutions-ISC.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\67cc3f50_mushrooms-solutions-ISC.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI20_mushrooms

View problem - Counting Mushrooms (IOI20_mushrooms) :: oj.uzView problem - Counting Mushrooms (IOI20_mushrooms)

Counting Mushrooms Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o mushrooms mushrooms.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o mushrooms mushrooms.cpp
Java/usr/bin/javac -encoding UTF-8 mushrooms.java
/bin/sh -c echo "Main-Class: mushrooms" > __manifest__.txt
/bin/sh -c jar cfm mushrooms.jar __manifest__.txt *.class

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms2048 MiB83706189114.72%

Problem Source
IOI 2020 Day 2 Problem 2

 Attachments
File nameSize
public.zip9.18 KiB
```


## 94. Beech Tree

- Day/Contest: Day 32 / IOI 2023
- Problem URL: https://oj.uz/problem/view/IOI23_beechtree
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\9228cf7f_IOI23_beechtree.txt`
- Editorial URL: https://blog.brucemerry.org.za/2023/11/ioi-2023-beech-tree.html
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\d4c59591_ioi-2023-beech-tree.html.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI23_beechtree

View problem - Beech Tree (IOI23_beechtree) :: oj.uzView problem - Beech Tree (IOI23_beechtree)

Beech Tree Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o beechtree beechtree.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o beechtree beechtree.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms2048 MiB15281944422.68%

Problem Source
IOI 2023 Day 2 Problem 1

 Attachments
File nameSize
beechtree.zip2.44 KiB
```


## 95. Robot Contest

- Day/Contest: Day 32 / IOI 2023
- Problem URL: https://oj.uz/problem/view/IOI23_robot
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\c79fbfa9_IOI23_robot.txt`
- Editorial URL: https://codeforces.com/blog/entry/120252
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\de355aef_120252.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI23_robot

View problem - Robot Contest (IOI23_robot) :: oj.uzView problem - Robot Contest (IOI23_robot)

Robot Contest Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o robot robot.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o robot robot.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB15162193415.53%

Problem Source
IOI 2023 Day 2 Problem 3

 Attachments
File nameSize
robot.zip6.61 KiB
```


## 96. Monuments

- Day/Contest: Day 32 / IOI 2026
- Problem URL: https://oj.uz/problem/view/IOI26_monuments
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ab61ae9a_IOI26_monuments.txt`
- Editorial URL: https://codeforces.com/blog/entry/155911#comment-1387237
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\11a7a34f_155911.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI26_monuments

View problem - Monuments (IOI26_monuments) :: oj.uzView problem - Monuments (IOI26_monuments)

Monuments Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o monuments monuments.cpp grader.cpp monuments.h
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o monuments monuments.cpp grader.cpp monuments.h

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB677792430.38%

Problem Source
IOI 2026 Day 1 Problem 2

 Attachments
File nameSize
monuments.zip2.59 KiB
```


## 97. Fish

- Day/Contest: Day 33 / IOI 2008
- Problem URL: https://oj.uz/problem/view/IOI08_fish
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\b4e2dc02_IOI08_fish.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2008solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\596e7036_ioi2008solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI08_fish

View problem - Fish (IOI08_fish) :: oj.uzView problem - Fish (IOI08_fish)

Fish Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o fish fish.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o fish fish.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o fish fish.cpp
Java/usr/bin/javac -encoding UTF-8 fish.java
/bin/sh -c echo "Main-Class: fish" > __manifest__.txt
/bin/sh -c jar cfm fish.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b fish.py
/bin/mv fish.pyc __main__.pyc
/usr/bin/zip fish.pyz.zip __main__.pyc
/bin/mv fish.pyz.zip fish.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms64 MiB8441147767.54%

Problem Source
IOI 2008 Day 1 Problem 3
```


## 98. Shortcut

- Day/Contest: Day 33 / IOI 2016
- Problem URL: https://oj.uz/problem/view/IOI16_shortcut
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\7740e5b9_IOI16_shortcut.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2016solutions.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\7682fb6c_ioi2016solutions.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/IOI16_shortcut

View problem - Shortcut (IOI16_shortcut) :: oj.uzView problem - Shortcut (IOI16_shortcut)

Shortcut Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o shortcut shortcut.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o shortcut shortcut.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o shortcut shortcut.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB39363777118.83%

Problem Source
IOI 2016 Day 1 Problem 3

 Attachments
File nameSize
grader.zip6.00 KiB
```


## 99. Migrations

- Day/Contest: Day 33 / IOI 2025
- Problem URL: https://oj.uz/problem/view/IOI25_migrations
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\c37ef195_IOI25_migrations.txt`
- Editorial URL: https://codeforces.com/blog/entry/145228
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\2aa71610_145228.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI25_migrations

View problem - Migrations (IOI25_migrations) :: oj.uzView problem - Migrations (IOI25_migrations)

Migrations Interactive Two steps Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o migrations migrations.cpp stub.cpp migrations.h
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o migrations migrations.cpp stub.cpp migrations.h

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms2048 MiB15021851910.27%

Problem Source
IOI 2025 Day 2 Problem 2

 Attachments
File nameSize
migrations.zip2.14 KiB
```


## 100. Meetings

- Day/Contest: Day 34 / IOI 2018
- Problem URL: https://oj.uz/problem/view/IOI18_meetings
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\00bd2632_IOI18_meetings.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2018solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\f540181d_ioi2018solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI18_meetings

View problem - Meetings (IOI18_meetings) :: oj.uzView problem - Meetings (IOI18_meetings)

Meetings Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o meetings meetings.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o meetings meetings.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5500 ms768 MiB30834559721.32%

Problem Source
IOI 2018 Day 2 Problem 3

 Attachments
File nameSize
dist.zip4.67 KiB
```


## 101. Sky Walking

- Day/Contest: Day 34 / IOI 2019
- Problem URL: https://oj.uz/problem/view/IOI19_walk
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\6056cf85_IOI19_walk.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2019solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\6a1ee8b9_ioi2019solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI19_walk

View problem - Sky Walking (IOI19_walk) :: oj.uzView problem - Sky Walking (IOI19_walk)

Sky Walking Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o walk walk.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o walk walk.cpp
Java/usr/bin/javac -encoding UTF-8 walk.java
/bin/sh -c echo "Main-Class: walk" > __manifest__.txt
/bin/sh -c jar cfm walk.jar __manifest__.txt *.class

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms1024 MiB23223217824.30%

Problem Source
IOI 2019 Day 2 Problem 3

 Attachments
File nameSize
walk.zip3.59 KiB
```


## 102. Hieroglyphs

- Day/Contest: Day 34 / IOI 2024
- Problem URL: https://oj.uz/problem/view/IOI24_hieroglyphs
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8d2f586c_IOI24_hieroglyphs.txt`
- Editorial URL: https://ioinformatics.org/files/ioi2024solutions.zip
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions.zip`
- Extracted editorial folder: `C:\Users\raman\Desktop\om\downloads\editorials\3a08aae6_ioi2024solutions`

**Problem statement:**

```
https://oj.uz/problem/view/IOI24_hieroglyphs

View problem - Hieroglyphs (IOI24_hieroglyphs) :: oj.uzView problem - Hieroglyphs (IOI24_hieroglyphs)

Hieroglyphs Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o hieroglyphs hieroglyphs.cpp hieroglyphs.h grader.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o hieroglyphs hieroglyphs.cpp hieroglyphs.h grader.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms2048 MiB6591181512.71%

A team of researchers is studying the similarities between sequences of hieroglyphs.
They represent each hieroglyph with a non-negative integer.
To perform their study,
 they use the following concepts about sequences.

For a fixed sequence $A$,
 a sequence $S$ is called a subsequence of $A$
 if and only if $S$ can be obtained
 by removing some elements (possibly none) from $A$.

The table below shows some examples of subsequences of a sequence $A = [3, 2, 1, 2]$.

Subsequence
How it can be obtained from $A$

[3, 2, 1, 2]
No elements are removed.

[2, 1, 2]
[3, 2, 1, 2]

[3, 2, 2]
[3, 2, 1, 2]

[3, 2]
[3, 2, 1, 2] or [3, 2, 1, 2]

[3]
[3, 2, 1, 2]

[ ]
[3, 2, 1, 2]

On the other hand, $[3, 3]$ or $[1, 3]$ are not subsequences of $A$.

Consider two sequences of hieroglyphs, $A$ and $B$.
A sequence $S$ is called a common subsequence of $A$ and $B$
 if and only if $S$ is a subsequence of both $A$ and $B$.
Moreover, we say that a sequence $U$ is a universal common subsequence of $A$ and $B$
 if and only if the following two conditions are met:

$U$ is a common subsequence of $A$ and $B$.

Every common subsequence of $A$ and $B$ is also a subsequence of $U$.

It can be shown that any two sequences $A$ and $B$
 have at most one universal common subsequence.

The researchers have found two sequences of hieroglyphs $A$ and $B$.
Sequence $A$ consists of $N$ hieroglyphs
 and sequence $B$ consists of $M$ hieroglyphs.
Help the researchers compute
 a universal common subsequence of sequences $A$ and $B$,
 or determine that such a sequence does not exist.

Implementation details

You should implement the following procedure.

std::vector<int> ucs(std::vector<int> A, std::vector<int> B)

$A$: array of length $N$ describing the first sequence.

$B$: array of length $M$ describing the second sequence.

If there exists a universal common subsequence of $A$ and $B$,
 the procedure should return an array containing this sequence.
Otherwise, the procedure should return $[-1]$
 (an array of length $1$, whose only element is $-1$).

This procedure is called exactly once for each test case.

Constraints

$1 \leq N \leq 100,000$

$1 \leq M \leq 100,000$

$0 \leq A[i] \leq 200,000$ for each $i$ such that $0 \leq i < N$

$0 \leq B[j] \leq 200,000$ for each $j$ such that $0 \leq j < M$

Subtasks

Subtask
Score
Additional Constraints

1
$3$
$N = M$; each of $A$ and $B$ consists of $N$ distinct integers between $0$ and $N-1$ (inclusive)

2
$15$
For any integer $k$, (the number of elements of $A$ equal to $k$) plus (the number of elements of $B$ equal to $k$) is at most $3$.

3
$10$
$A[i] \leq 1$ for each $i$ such that $0 \leq i < N$; $B[j] \leq 1$ for each $j$ such that $0 \leq j < M$

4
$16$
There exists a universal common subsequence of $A$ and $B$.

5
$14$
$N \leq 3000$; $M \leq 3000$

6
$42$
No additional constraints.

Examples

Example 1

Consider the following call.

ucs([0, 0, 1, 0, 1, 2], [2, 0, 1, 0, 2])

Here, the common subsequences of $A$ and $B$ are the following:
 $[\ ]$, $[0]$, $[1]$, $[2]$, $[0, 0]$, $[0, 1]$, $[0, 2]$, $[1, 0]$, $[1, 2]$, $[0, 0, 2]$, $[0, 1, 0]$, $[0, 1, 2]$, $[1, 0, 2]$ and $[0, 1, 0, 2]$.

Since $[0, 1, 0, 2]$ is a common subsequence of $A$ and $B$, and
 all common subsequences of $A$ and $B$ are subsequences of $[0, 1, 0, 2]$,
 the procedure should return $[0, 1, 0, 2]$.

Example 2

Consider the following call.

ucs([0, 0, 2], [1, 1])

Here, the only common subsequence of $A$ and $B$ is the empty sequence $[\ ]$.
It follows that the procedure should return an empty array $[\ ]$.

Example 3

Consider the following call.

ucs([0, 1, 0], [1, 0, 1])

Here, the common subsequences of $A$ and $B$ are
 $[\ ], [0], [1], [0, 1]$ and $[1, 0]$.
It can be shown that a universal common subsequence does not exist.
Therefore, the procedure should return $[-1]$.

Sample Grader

Input format:

N  M
A[0]  A[1]  ...  A[N-1]
B[0]  B[1]  ...  B[M-1]

Output format:

T
R[0]  R[1]  ...  R[T-1]

Here, $R$ is the array returned by ucs and $T$ is its length.

Problem Source
IOI 2024 Day 2 Problem 1

 Attachments
File nameSize
hieroglyphs.zip3.01 KiB
```


## 103. Triple Peaks

- Day/Contest: Day 35 / IOI 2025
- Problem URL: https://oj.uz/problem/view/IOI25_triples
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\0140555f_IOI25_triples.txt`
- Editorial URL: https://codeforces.com/blog/entry/145172#comment-1298794
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\c3c624ff_145172.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI25_triples

View problem - Triple Peaks (IOI25_triples) :: oj.uzView problem - Triple Peaks (IOI25_triples)

Triple Peaks Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o triples triples.cpp triples.h grader.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o triples triples.cpp triples.h grader.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms2048 MiB28572954214.24%

Although the problem statement says output file submission is possible, due to technical difficulties (note that this task type was introduced this year), you can only submit with code for now, sorry for the inconvenience.

Problem Source
IOI 2025 Day 1 Problem 2

 Attachments
File nameSize
triples.zip3.12 KiB
```


## 104. Ball Machine

- Day/Contest: Day 35 / IOI 2026
- Problem URL: https://oj.uz/problem/view/IOI26_ballmachine
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\05977ca7_IOI26_ballmachine.txt`
- Editorial URL: https://codeforces.com/blog/entry/155911#comment-1385026
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\caca6157_155911.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI26_ballmachine

View problem - Ball Machine (IOI26_ballmachine) :: oj.uzView problem - Ball Machine (IOI26_ballmachine)

Ball Machine Interactive Communication Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o ballmachine ballmachine.cpp ballmachine.h grader.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o ballmachine ballmachine.cpp ballmachine.h grader.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3500 ms2048 MiB377842327.38%

Problem Source
IOI 2026 Day 1 Problem 1

 Attachments
File nameSize
ballmachine.zip2.56 KiB
```


## 105. Classroom Game

- Day/Contest: Day 35 / IOI 2026
- Problem URL: https://oj.uz/problem/view/IOI26_classroom
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\abf596a7_IOI26_classroom.txt`
- Editorial URL: https://codeforces.com/blog/entry/155911#comment-1389898
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\8a485ecc_155911.txt`

**Problem statement:**

```
https://oj.uz/problem/view/IOI26_classroom

View problem - Classroom Game (IOI26_classroom) :: oj.uzView problem - Classroom Game (IOI26_classroom)

Classroom Game Two steps Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o classroom classroom.cpp classroom.h stub.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o classroom classroom.cpp classroom.h stub.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
500 ms2048 MiB476561425.00%

Problem Source
IOI 2026 Day 2 Problem 1

 Attachments
File nameSize
classroom.zip2.34 KiB
```


## 106. Robot

- Day/Contest: Day 36 / JOI Final 2021
- Problem URL: https://oj.uz/problem/view/JOI21_ho_t4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\28a40d51_JOI21_ho_t4.txt`
- Editorial URL: https://usaco.guide/problems/joi-2021robot/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\7de0dae1_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI21_ho_t4

View problem - Robot (JOI21_ho_t4) :: oj.uzView problem - Robot (JOI21_ho_t4)

Robot Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms2048 MiB328262648176.84%

Problem Source
The 20th Japanese Olympiad in Informatics Final Round Problem 4

 Attachments
File nameSize
samples.zip1.38 KiB
```


## 107. Snake Escaping

- Day/Contest: Day 36 / JOI Final 2018
- Problem URL: https://oj.uz/problem/view/JOI18_snake_escaping
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\52dd0a1d_JOI18_snake_escaping.txt`
- Editorial URL: https://usaco.guide/problems/joi-2018snake-escaping/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\be4e7c32_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI18_snake_escaping

View problem - Snake Escaping (JOI18_snake_escaping) :: oj.uzView problem - Snake Escaping (JOI18_snake_escaping)

Snake Escaping Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o snake_escaping snake_escaping.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o snake_escaping snake_escaping.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o snake_escaping snake_escaping.cpp
Java/usr/bin/javac -encoding UTF-8 snake_escaping.java
/bin/sh -c echo "Main-Class: snake_escaping" > __manifest__.txt
/bin/sh -c jar cfm snake_escaping.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b snake_escaping.py
/bin/mv snake_escaping.pyc __main__.pyc
/usr/bin/zip snake_escaping.pyz.zip __main__.pyc
/bin/mv snake_escaping.pyz.zip snake_escaping.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms64 MiB244448341084.89%

Problem Source
The 17th Japanese Olympiad in Informatics Final Round Problem 5

 Attachments
File nameSize
snake_escaping.zip726 bytes
```


## 108. Coin Collecting

- Day/Contest: Day 37 / JOI Final 2019
- Problem URL: https://oj.uz/problem/view/JOI19_ho_t4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\dc1b13d9_JOI19_ho_t4.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2018/2019-ho/2019-ho-t4-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\120a0caa_2019-ho-t4-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI19_ho_t4

View problem - Coin Collecting (JOI19_ho_t4) :: oj.uzView problem - Coin Collecting (JOI19_ho_t4)

Coin Collecting Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o joi2019_ho_t4 joi2019_ho_t4.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o joi2019_ho_t4 joi2019_ho_t4.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o joi2019_ho_t4 joi2019_ho_t4.cpp
Java/usr/bin/javac -encoding UTF-8 joi2019_ho_t4.java
/bin/sh -c echo "Main-Class: joi2019_ho_t4" > __manifest__.txt
/bin/sh -c jar cfm joi2019_ho_t4.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b joi2019_ho_t4.py
/bin/mv joi2019_ho_t4.pyc __main__.pyc
/usr/bin/zip joi2019_ho_t4.pyz.zip __main__.pyc
/bin/mv joi2019_ho_t4.pyz.zip joi2019_ho_t4.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms268 MiB156145235778.98%

Problem Source
The 18th Japanese Olympiad in Informatics Final Round Problem 4

 Attachments
File nameSize
2019-ho-t4.zip1007 bytes
```


## 109. Cat Exercise

- Day/Contest: Day 37 / JOI Final 2023
- Problem URL: https://oj.uz/problem/view/JOI23_ho_t4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\4a71cba1_JOI23_ho_t4.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2022/2023-ho/2023-ho-t4-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\83e7bbf6_2023-ho-t4-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI23_ho_t4

View problem - Cat Exercise (JOI23_ho_t4) :: oj.uzView problem - Cat Exercise (JOI23_ho_t4)

Cat Exercise Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB97431328490.73%

Problem Source
The 22st Japanese Olympiad in Informatics Final Round Problem 4
```


## 110. Olympic Bus

- Day/Contest: Day 38 / JOI Final 2020
- Problem URL: https://oj.uz/problem/view/JOI20_ho_t4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\4ea9faea_JOI20_ho_t4.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2019/2020-ho/2020-ho-t4-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\3a674768_2020-ho-t4-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI20_ho_t4

View problem - Olympic Bus (JOI20_ho_t4) :: oj.uzView problem - Olympic Bus (JOI20_ho_t4)

Olympic Bus Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o ho_t4 ho_t4.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o ho_t4 ho_t4.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o ho_t4 ho_t4.cpp
Java/usr/bin/javac -encoding UTF-8 ho_t4.java
/bin/sh -c echo "Main-Class: ho_t4" > __manifest__.txt
/bin/sh -c jar cfm ho_t4.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b ho_t4.py
/bin/mv ho_t4.pyc __main__.pyc
/usr/bin/zip ho_t4.pyz.zip __main__.pyc
/bin/mv ho_t4.pyz.zip ho_t4.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms256 MiB275635627476.97%

Problem Source
The 19th Japanese Olympiad in Informatics Final Round Problem 4

 Attachments
File nameSize
sample.zip1.56 KiB
```


## 111. Railway Trip 2

- Day/Contest: Day 38 / JOI Final 2022
- Problem URL: https://oj.uz/problem/view/JOI22_ho_t4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\3cf37df9_JOI22_ho_t4.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2021/2022-ho/2022-ho-t4-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\746c4e02_2022-ho-t4-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI22_ho_t4

View problem - Railway Trip 2 (JOI22_ho_t4) :: oj.uzView problem - Railway Trip 2 (JOI22_ho_t4)

Railway Trip 2 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB100526823587.69%

Problem Source
The 21st Japanese Olympiad in Informatics Final Round Problem 4
```


## 112. Soccer

- Day/Contest: Day 39 / JOI Final 2017
- Problem URL: https://oj.uz/problem/view/JOI17_soccer
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\9927150f_JOI17_soccer.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2016/2017-ho/2017-ho-t4-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\67a1dec9_2017-ho-t4-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI17_soccer

View problem - Soccer (JOI17_soccer) :: oj.uzView problem - Soccer (JOI17_soccer)

Soccer Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o soccer soccer.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o soccer soccer.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o soccer soccer.cpp
Java/usr/bin/javac -encoding UTF-8 soccer.java
/bin/sh -c echo "Main-Class: soccer" > __manifest__.txt
/bin/sh -c jar cfm soccer.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b soccer.py
/bin/mv soccer.pyc __main__.pyc
/usr/bin/zip soccer.pyz.zip __main__.pyc
/bin/mv soccer.pyz.zip soccer.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms256 MiB64823419583.33%

Problem Source
The 16th Japanese Olympiad in Informatics Final Round Problem 4
```


## 113. Fire

- Day/Contest: Day 39 / JOI Final 2020
- Problem URL: https://oj.uz/problem/view/JOI20_ho_t5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\e90b7933_JOI20_ho_t5.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2019/2020-ho/2020-ho-t5-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\67d8d3ef_2020-ho-t5-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI20_ho_t5

View problem - Fire (JOI20_ho_t5) :: oj.uzView problem - Fire (JOI20_ho_t5)

Fire Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o ho_t5 ho_t5.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o ho_t5 ho_t5.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o ho_t5 ho_t5.cpp
Java/usr/bin/javac -encoding UTF-8 ho_t5.java
/bin/sh -c echo "Main-Class: ho_t5" > __manifest__.txt
/bin/sh -c jar cfm ho_t5.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b ho_t5.py
/bin/mv ho_t5.pyc __main__.pyc
/usr/bin/zip ho_t5.pyz.zip __main__.pyc
/bin/mv ho_t5.pyz.zip ho_t5.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms256 MiB81418413774.46%

Problem Source
The 19th Japanese Olympiad in Informatics Final Round Problem 5

 Attachments
File nameSize
sample.zip1.94 KiB
```


## 114. Maze

- Day/Contest: Day 40 / JOI Final 2023
- Problem URL: https://oj.uz/problem/view/JOI23_ho_t3
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\79dff9e8_JOI23_ho_t3.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2022/2023-ho/2023-ho-t3-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\48595d13_2023-ho-t3-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI23_ho_t3

View problem - Maze (JOI23_ho_t3) :: oj.uzView problem - Maze (JOI23_ho_t3)

Maze Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms2048 MiB139118512265.95%

Problem Source
The 22st Japanese Olympiad in Informatics Final Round Problem 3
```


## 115. Unique Cities

- Day/Contest: Day 40 / JOI Final 2019
- Problem URL: https://oj.uz/problem/view/JOI19_ho_t5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\c73f3f25_JOI19_ho_t5.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2018/2019-ho/2019-ho-t5-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\4c58511f_2019-ho-t5-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI19_ho_t5

View problem - Unique Cities (JOI19_ho_t5) :: oj.uzView problem - Unique Cities (JOI19_ho_t5)

Unique Cities Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o joi2019_ho_t5 joi2019_ho_t5.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o joi2019_ho_t5 joi2019_ho_t5.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o joi2019_ho_t5 joi2019_ho_t5.cpp
Java/usr/bin/javac -encoding UTF-8 joi2019_ho_t5.java
/bin/sh -c echo "Main-Class: joi2019_ho_t5" > __manifest__.txt
/bin/sh -c jar cfm joi2019_ho_t5.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b joi2019_ho_t5.py
/bin/mv joi2019_ho_t5.pyc __main__.pyc
/usr/bin/zip joi2019_ho_t5.pyz.zip __main__.pyc
/bin/mv joi2019_ho_t5.pyz.zip joi2019_ho_t5.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms268 MiB55715511372.90%

Problem Source
The 18th Japanese Olympiad in Informatics Final Round Problem 5

 Attachments
File nameSize
2019-ho-t5.zip1.42 KiB
```


## 116. Rope

- Day/Contest: Day 41 / JOI Final 2017
- Problem URL: https://oj.uz/problem/view/JOI17_rope
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\4f0119f8_JOI17_rope.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2016/2017-ho/2017-ho-t5-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\401b1d29_2017-ho-t5-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI17_rope

View problem - Rope (JOI17_rope) :: oj.uzView problem - Rope (JOI17_rope)

Rope Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o rope rope.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o rope rope.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o rope rope.cpp
Java/usr/bin/javac -encoding UTF-8 rope.java
/bin/sh -c echo "Main-Class: rope" > __manifest__.txt
/bin/sh -c jar cfm rope.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b rope.py
/bin/mv rope.pyc __main__.pyc
/usr/bin/zip rope.pyz.zip __main__.pyc
/bin/mv rope.pyz.zip rope.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2500 ms256 MiB5811159986.09%

Problem Source
The 16th Japanese Olympiad in Informatics Final Round Problem 5
```


## 117. Gift Exchange

- Day/Contest: Day 41 / JOI Final 2024
- Problem URL: https://oj.uz/problem/view/JOI24_ho_t4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\4642b760_JOI24_ho_t4.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2023/2024-ho/2024-ho-t4-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\d6dce70a_2024-ho-t4-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI24_ho_t4

View problem - Gift Exchange (JOI24_ho_t4) :: oj.uzView problem - Gift Exchange (JOI24_ho_t4)

Gift Exchange Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2500 ms1024 MiB4671167060.34%

Problem Source
The 23rd Japanese Olympiad in Informatics Final Round Problem 4
```


## 118. Marathon Race 2

- Day/Contest: Day 42 / JOI Final 2024
- Problem URL: https://oj.uz/problem/view/JOI24_ho_t3
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\1438da2c_JOI24_ho_t3.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2023/2024-ho/2024-ho-t3-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\b6fedd4d_2024-ho-t3-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI24_ho_t3

View problem - Marathon Race 2 (JOI24_ho_t3) :: oj.uzView problem - Marathon Race 2 (JOI24_ho_t3)

Marathon Race 2 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1500 ms1024 MiB317724258.33%

Problem Source
The 23rd Japanese Olympiad in Informatics Final Round Problem 3
```


## 119. Dungeon 3

- Day/Contest: Day 42 / JOI Final 2021
- Problem URL: https://oj.uz/problem/view/JOI21_ho_t5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\36236f3a_JOI21_ho_t5.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2020/2021-ho/2021-ho-t5-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\b86c823c_2021-ho-t5-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI21_ho_t5

View problem - Dungeon 3 (JOI21_ho_t5) :: oj.uzView problem - Dungeon 3 (JOI21_ho_t5)

Dungeon 3 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms2048 MiB228624064.52%

Problem Source
The 20th Japanese Olympiad in Informatics Final Round Problem 5

 Attachments
File nameSize
samples.zip1.34 KiB
```


## 120. Sandcastle 2

- Day/Contest: Day 43 / JOI Final 2022
- Problem URL: https://oj.uz/problem/view/JOI22_ho_t5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\85bcb998_JOI22_ho_t5.txt`
- Editorial URL: https://codeforces.com/blog/entry/99837#comment-886584
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\fe671337_99837.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI22_ho_t5

View problem - Sandcastle 2 (JOI22_ho_t5) :: oj.uzView problem - Sandcastle 2 (JOI22_ho_t5)

Sandcastle 2 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5000 ms1024 MiB347813846.91%

Problem Source
The 21st Japanese Olympiad in Informatics Final Round Problem 5
```


## 121. Mi Teleférico

- Day/Contest: Day 43 / JOI Final 2025
- Problem URL: https://oj.uz/problem/view/JOI25_ho_t3
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8ba97a23_JOI25_ho_t3.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2024/2025-ho/2025-ho-t3-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\49f50bc5_2025-ho-t3-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI25_ho_t3

View problem - Mi Teleférico (JOI25_ho_t3) :: oj.uzView problem - Mi Teleférico (JOI25_ho_t3)

Mi Teleférico Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB118302273.33%

Problem Source
The 24th Japanese Olympiad in Informatics Final Round Problem 3
```


## 122. Just Long Neckties 2

- Day/Contest: Day 44 / JOI Final 2025
- Problem URL: https://oj.uz/problem/view/JOI25_ho_t4
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\020404cd_JOI25_ho_t4.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2024/2025-ho/2025-ho-t4-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\fbd9c385_2025-ho-t4-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI25_ho_t4

View problem - Just Long Neckties 2 (JOI25_ho_t4) :: oj.uzView problem - Just Long Neckties 2 (JOI25_ho_t4)

Just Long Neckties 2 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms2048 MiB73181161.11%

Problem Source
The 24th Japanese Olympiad in Informatics Final Round Problem 4
```


## 123. Modern Machine

- Day/Contest: Day 44 / JOI Final 2023
- Problem URL: https://oj.uz/problem/view/JOI23_ho_t5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\5b51621a_JOI23_ho_t5.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2022/2023-ho/2023-ho-t5-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\80b4198e_2023-ho-t5-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI23_ho_t5

View problem - Modern Machine (JOI23_ho_t5) :: oj.uzView problem - Modern Machine (JOI23_ho_t5)

Modern Machine Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB25338923.68%

Problem Source
The 22st Japanese Olympiad in Informatics Final Round Problem 5
```


## 124. Road Service 2

- Day/Contest: Day 45 / JOI Final 2024
- Problem URL: https://oj.uz/problem/view/JOI24_ho_t5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\78327dc4_JOI24_ho_t5.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2023/2024-ho/2024-ho-t5-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\32e7f27e_2024-ho-t5-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI24_ho_t5

View problem - Road Service 2 (JOI24_ho_t5) :: oj.uzView problem - Road Service 2 (JOI24_ho_t5)

Road Service 2 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB13217741.18%

Problem Source
The 23rd Japanese Olympiad in Informatics Final Round Problem 5
```


## 125. Post Office

- Day/Contest: Day 45 / JOI Final 2025
- Problem URL: https://oj.uz/problem/view/JOI25_ho_t5
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8b526520_JOI25_ho_t5.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2024/2025-ho/2025-ho-t5-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\cf6055b9_2025-ho-t5-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI25_ho_t5

View problem - Post Office (JOI25_ho_t5) :: oj.uzView problem - Post Office (JOI25_ho_t5)

Post Office Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o Main Main.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Main Main.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Main Main.cpp
Java/usr/bin/javac -encoding UTF-8 Main.java
/bin/sh -c echo "Main-Class: Main" > __manifest__.txt
/bin/sh -c jar cfm Main.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b Main.py
/bin/mv Main.pyc __main__.pyc
/usr/bin/zip Main.pyz.zip __main__.pyc
/bin/mv Main.pyz.zip Main.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB135120.00%

Problem Source
The 24th Japanese Olympiad in Informatics Final Round Problem 5
```


## 126. Amusement Park

- Day/Contest: Day 46 / JOI Open 2017
- Problem URL: https://oj.uz/problem/view/JOI17_amusement_park
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8a60379f_JOI17_amusement_park.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2017/2017-open-amusement_park-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\c476c5a5_2017-open-amusement_park-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI17_amusement_park

View problem - Amusement Park (JOI17_amusement_park) :: oj.uzView problem - Amusement Park (JOI17_amusement_park)

Amusement Park Two steps Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Joi Joi.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Joi Joi.cpp

Step #2
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Ioi Ioi.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Ioi Ioi.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms256 MiB231024114258.92%

Because of the competition rules, we ONLY ALLOW C++14 for this problem.

Problem Source
JOI Open Contest 2017 Problem 1

 Attachments
File nameSize
amusement_park.zip3.00 KiB
```


## 127. Bulldozer

- Day/Contest: Day 46 / JOI Open 2017
- Problem URL: https://oj.uz/problem/view/JOI17_bulldozer
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\88ae5589_JOI17_bulldozer.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2017/2017-open-bulldozer-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\81545881_2017-open-bulldozer-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI17_bulldozer

View problem - Bulldozer (JOI17_bulldozer) :: oj.uzView problem - Bulldozer (JOI17_bulldozer)

Bulldozer Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o bulldozer bulldozer.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o bulldozer bulldozer.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o bulldozer bulldozer.cpp
Java/usr/bin/javac -encoding UTF-8 bulldozer.java
/bin/sh -c echo "Main-Class: bulldozer" > __manifest__.txt
/bin/sh -c jar cfm bulldozer.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b bulldozer.py
/bin/mv bulldozer.pyc __main__.pyc
/usr/bin/zip bulldozer.pyz.zip __main__.pyc
/bin/mv bulldozer.pyz.zip bulldozer.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB169121213965.57%

Problem Source
JOI Open Contest 2017 Problem 2

 Attachments
File nameSize
bulldozer.zip1.55 KiB
```


## 128. Monochrome Points

- Day/Contest: Day 47 / JOI Open 2020
- Problem URL: https://oj.uz/problem/view/JOI20_monochrome
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8f537200_JOI20_monochrome.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2020/monochrome/2020-open-monochrome-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\c6d257ce_2020-open-monochrome-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI20_monochrome

View problem - Monochrome Points (JOI20_monochrome) :: oj.uzView problem - Monochrome Points (JOI20_monochrome)

Monochrome Points Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o monochrome monochrome.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o monochrome monochrome.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o monochrome monochrome.cpp
Java/usr/bin/javac -encoding UTF-8 monochrome.java
/bin/sh -c echo "Main-Class: monochrome" > __manifest__.txt
/bin/sh -c jar cfm monochrome.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b monochrome.py
/bin/mv monochrome.pyc __main__.pyc
/usr/bin/zip monochrome.pyz.zip __main__.pyc
/bin/mv monochrome.pyz.zip monochrome.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms512 MiB79516610462.65%

Problem Source
JOI Open Contest 2020 Problem 2

 Attachments
File nameSize
monochrome.zip1.14 KiB
```


## 129. Virus Experiment

- Day/Contest: Day 47 / JOI Open 2019
- Problem URL: https://oj.uz/problem/view/JOI19_virus
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\19c5e5d3_JOI19_virus.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2019/virus/2019-open-virus-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\a31a8f32_2019-open-virus-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI19_virus

View problem - Virus Experiment (JOI19_virus) :: oj.uzView problem - Virus Experiment (JOI19_virus)

Virus Experiment Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o virus virus.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o virus virus.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o virus virus.cpp
Java/usr/bin/javac -encoding UTF-8 virus.java
/bin/sh -c echo "Main-Class: virus" > __manifest__.txt
/bin/sh -c jar cfm virus.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b virus.py
/bin/mv virus.pyc __main__.pyc
/usr/bin/zip virus.pyz.zip __main__.pyc
/bin/mv virus.pyz.zip virus.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms256 MiB6371247157.26%

Problem Source
JOI Open Contest 2019 Problem 3

 Attachments
File nameSize
virus.zip618 bytes
```


## 130. Monster Game

- Day/Contest: Day 48 / JOI Open 2021
- Problem URL: https://oj.uz/problem/view/JOI21_monster
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\6b065e07_JOI21_monster.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2021/monster/2021-open-monster-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f0535806_2021-open-monster-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI21_monster

View problem - Monster Game (JOI21_monster) :: oj.uzView problem - Monster Game (JOI21_monster)

Monster Game Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o monster monster.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o monster monster.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB7771457048.28%

Problem Source
JOI Open Contest 2021 Problem 3

 Attachments
File nameSize
monster.zip1.82 KiB
```


## 131. Collapse

- Day/Contest: Day 48 / JOI Open 2018
- Problem URL: https://oj.uz/problem/view/JOI18_collapse
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\de2ffe1c_JOI18_collapse.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2018/2018-open-collapse-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\c701e385_2018-open-collapse-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI18_collapse

View problem - Collapse (JOI18_collapse) :: oj.uzView problem - Collapse (JOI18_collapse)

Collapse Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o collapse collapse.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o collapse collapse.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
15000 ms512 MiB850946771.28%

Problem Source
JOI Open Contest 2018 Problem 3

 Attachments
File nameSize
dist.zip5.27 KiB
```


## 132. Golf

- Day/Contest: Day 49 / JOI Open 2017
- Problem URL: https://oj.uz/problem/view/JOI17_golf
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\79df5f95_JOI17_golf.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2017/2017-open-golf-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\25a3d90a_2017-open-golf-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI17_golf

View problem - Golf (JOI17_golf) :: oj.uzView problem - Golf (JOI17_golf)

Golf Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o golf golf.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o golf golf.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o golf golf.cpp
Java/usr/bin/javac -encoding UTF-8 golf.java
/bin/sh -c echo "Main-Class: golf" > __manifest__.txt
/bin/sh -c jar cfm golf.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b golf.py
/bin/mv golf.pyc __main__.pyc
/usr/bin/zip golf.pyz.zip __main__.pyc
/bin/mv golf.pyz.zip golf.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
10000 ms1024 MiB292633961.90%

Problem Source
JOI Open Contest 2017 Problem 3

 Attachments
File nameSize
golf.zip870 bytes
```


## 133. Ancient Machine 2

- Day/Contest: Day 49 / JOI Open 2023
- Problem URL: https://oj.uz/problem/view/JOI23_ancient2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\cc70ccb1_JOI23_ancient2.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2023/ancient2/2023-open-ancient2-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\03a2ee79_2023-open-ancient2-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI23_ancient2

View problem - Ancient Machine 2 (JOI23_ancient2) :: oj.uzView problem - Ancient Machine 2 (JOI23_ancient2)

Ancient Machine 2 Interactive Communication Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o ancient2 ancient2.cpp ancient2.h stub.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o ancient2 ancient2.cpp ancient2.h stub.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB350731824.66%

Problem Source
JOI Open Contest 2023 Problem 1

 Attachments
File nameSize
ancient2.zip3.64 KiB
```


## 134. Giraffes

- Day/Contest: Day 50 / JOI Open 2022
- Problem URL: https://oj.uz/problem/view/JOI22_giraffes
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\36765033_JOI22_giraffes.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2022/giraffes/2022-open-giraffes-sol-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\9d1a9413_2022-open-giraffes-sol-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI22_giraffes

View problem - Giraffes (JOI22_giraffes) :: oj.uzView problem - Giraffes (JOI22_giraffes)

Giraffes Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o giraffes giraffes.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o giraffes giraffes.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o giraffes giraffes.cpp
Java/usr/bin/javac -encoding UTF-8 giraffes.java
/bin/sh -c echo "Main-Class: giraffes" > __manifest__.txt
/bin/sh -c jar cfm giraffes.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b giraffes.py
/bin/mv giraffes.pyc __main__.pyc
/usr/bin/zip giraffes.pyz.zip __main__.pyc
/bin/mv giraffes.pyz.zip giraffes.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
7000 ms1024 MiB12235925.71%

Problem Source
JOI Open Contest 2022 Problem 2

 Attachments
File nameSize
giraffes.zip1.09 KiB
```


## 135. Telepathy

- Day/Contest: Day 50 / JOI Open 2025
- Problem URL: https://oj.uz/problem/view/JOI25_telepathy
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\f37409bb_JOI25_telepathy.txt`
- Editorial URL: https://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2025/telepathy/review-en.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\90f4fafc_review-en.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI25_telepathy

View problem - Telepathy (JOI25_telepathy) :: oj.uzView problem - Telepathy (JOI25_telepathy)

Telepathy Interactive Communication Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o telepathy telepathy.cpp stub.cpp telepathy.h
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o telepathy telepathy.cpp stub.cpp telepathy.h

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms1024 MiB15015320.00%

Problem Source
JOI Open Contest 2025 Problem 3

 Attachments
File nameSize
2025-open-telepathy-dist.zip3.16 KiB
```


## 136. Mergers

- Day/Contest: Day 51 / JOISC 2019
- Problem URL: https://oj.uz/problem/view/JOI19_mergers
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\62e9297e_JOI19_mergers.txt`
- Editorial URL: https://usaco.guide/problems/joi-mergers/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\e826a249_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI19_mergers

View problem - Mergers (JOI19_mergers) :: oj.uzView problem - Mergers (JOI19_mergers)

Mergers Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o mergers mergers.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o mergers mergers.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o mergers mergers.cpp
Java/usr/bin/javac -encoding UTF-8 mergers.java
/bin/sh -c echo "Main-Class: mergers" > __manifest__.txt
/bin/sh -c jar cfm mergers.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b mergers.py
/bin/mv mergers.pyc __main__.pyc
/usr/bin/zip mergers.pyz.zip __main__.pyc
/bin/mv mergers.pyz.zip mergers.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms256 MiB199141437991.55%

Problem Source
2018 JOI Spring Training Camp/Qualifying Trial Day 4 Problem 2

 Attachments
File nameSize
mergers.zip850 bytes
```


## 137. Making Friends on Joitter is Fun

- Day/Contest: Day 51 / JOISC 2020
- Problem URL: https://oj.uz/problem/view/JOI20_joitter2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\f21b380a_JOI20_joitter2.txt`
- Editorial URL: https://usaco.guide/problems/joi-2020joitter/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\928ba08a_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI20_joitter2

View problem - Making Friends on Joitter is Fun (JOI20_joitter2) :: oj.uzView problem - Making Friends on Joitter is Fun (JOI20_joitter2)

Making Friends on Joitter is Fun Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o joitter2 joitter2.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o joitter2 joitter2.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o joitter2 joitter2.cpp
Java/usr/bin/javac -encoding UTF-8 joitter2.java
/bin/sh -c echo "Main-Class: joitter2" > __manifest__.txt
/bin/sh -c jar cfm joitter2.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b joitter2.py
/bin/mv joitter2.pyc __main__.pyc
/usr/bin/zip joitter2.pyz.zip __main__.pyc
/bin/mv joitter2.pyz.zip joitter2.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5000 ms1024 MiB197339432983.50%

Problem Source
2020 JOI Spring Training Camp/Qualifying Trial Day 2 Problem 2

 Attachments
File nameSize
joitter2.zip639 bytes
```


## 138. Cake 3

- Day/Contest: Day 52 / JOISC 2019
- Problem URL: https://oj.uz/problem/view/JOI19_cake3
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\2f98eb24_JOI19_cake3.txt`
- Editorial URL: https://usaco.guide/problems/joi-joi-spring-camp-2019-day-4cake-3/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\0982b95c_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI19_cake3

View problem - Cake 3 (JOI19_cake3) :: oj.uzView problem - Cake 3 (JOI19_cake3)

Cake 3 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o cake3 cake3.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o cake3 cake3.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o cake3 cake3.cpp
Java/usr/bin/javac -encoding UTF-8 cake3.java
/bin/sh -c echo "Main-Class: cake3" > __manifest__.txt
/bin/sh -c jar cfm cake3.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b cake3.py
/bin/mv cake3.pyc __main__.pyc
/usr/bin/zip cake3.pyz.zip __main__.pyc
/bin/mv cake3.pyz.zip cake3.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms256 MiB202033124874.92%

Problem Source
2018 JOI Spring Training Camp/Qualifying Trial Day 4 Problem 1

 Attachments
File nameSize
cake3.zip708 bytes
```


## 139. Airline Route Map

- Day/Contest: Day 52 / JOISC 2018
- Problem URL: https://oj.uz/problem/view/JOI18_airline
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\8d9ad880_JOI18_airline.txt`
- Editorial URL: https://usaco.guide/problems/joi-2018airline/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f32e61a9_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI18_airline

View problem - Airline Route Map (JOI18_airline) :: oj.uzView problem - Airline Route Map (JOI18_airline)

Airline Route Map Two steps Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Alice Alice.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Alice Alice.cpp

Step #2
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Bob Bob.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Bob Bob.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2500 ms1024 MiB106723719381.43%

CAUTION: We additionally shuffle the direction of edges, so that u -&gt; v may be sent as v -&gt; u.

Problem Source
2018 JOI Spring Training Camp/Qualifying Trial Day 3 Problem 1

 Attachments
File nameSize
airline_route_map.zip5.12 KiB
```


## 140. Jail

- Day/Contest: Day 53 / JOISC 2022
- Problem URL: https://oj.uz/problem/view/JOI22_jail
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\69a7951d_JOI22_jail.txt`
- Editorial URL: https://misaka18931.github.io/2022/04/05/JOISC-2022/
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\ee3e8546_index.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI22_jail

View problem - Jail (JOI22_jail) :: oj.uzView problem - Jail (JOI22_jail)

Jail Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o jail jail.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o jail jail.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o jail jail.cpp
Java/usr/bin/javac -encoding UTF-8 jail.java
/bin/sh -c echo "Main-Class: jail" > __manifest__.txt
/bin/sh -c jar cfm jail.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b jail.py
/bin/mv jail.pyc __main__.pyc
/usr/bin/zip jail.pyz.zip __main__.pyc
/bin/mv jail.pyz.zip jail.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5000 ms1024 MiB232129317459.39%

Problem Source
2022 JOI Spring Training Camp/Qualifying Trial Day 1 Problem 1
```


## 141. Stray Cat

- Day/Contest: Day 53 / JOISC 2020
- Problem URL: https://oj.uz/problem/view/JOI20_stray
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\5ec56d21_JOI20_stray.txt`
- Editorial URL: https://usaco.guide/problems/joi-2020stray-cat/solution
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\873754ad_solution.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI20_stray

View problem - Stray Cat (JOI20_stray) :: oj.uzView problem - Stray Cat (JOI20_stray)

Stray Cat Two steps Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Anthony Anthony.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Anthony Anthony.cpp

Step #2
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Catherine Catherine.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Catherine Catherine.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB154919513468.72%

Problem Source
2020 JOI Spring Training Camp/Qualifying Trial Day 3 Problem 3

 Attachments
File nameSize
stray.zip4.09 KiB
```


## 142. Minerals

- Day/Contest: Day 54 / JOISC 2019
- Problem URL: https://oj.uz/problem/view/JOI19_minerals
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\22ea22dd_JOI19_minerals.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2019/2019-sp-tasks/day4/minerals-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\425e03ad_minerals-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI19_minerals

View problem - Minerals (JOI19_minerals) :: oj.uzView problem - Minerals (JOI19_minerals)

Minerals Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o minerals minerals.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o minerals minerals.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
1000 ms256 MiB224127712946.57%

Problem Source
2018 JOI Spring Training Camp/Qualifying Trial Day 4 Problem 3

 Attachments
File nameSize
minerals.zip2.42 KiB
```


## 143. Treatment Project

- Day/Contest: Day 54 / JOISC 2020
- Problem URL: https://oj.uz/problem/view/JOI20_treatment
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\28923f10_JOI20_treatment.txt`
- Editorial URL: https://codeforces.com/blog/entry/74871#comment-592237
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\2f508921_74871.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI20_treatment

View problem - Treatment Project (JOI20_treatment) :: oj.uzView problem - Treatment Project (JOI20_treatment)

Treatment Project Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o treatment treatment.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o treatment treatment.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o treatment treatment.cpp
Java/usr/bin/javac -encoding UTF-8 treatment.java
/bin/sh -c echo "Main-Class: treatment" > __manifest__.txt
/bin/sh -c jar cfm treatment.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b treatment.py
/bin/mv treatment.pyc __main__.pyc
/usr/bin/zip treatment.pyz.zip __main__.pyc
/bin/mv treatment.pyz.zip treatment.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB80015212682.89%

Problem Source
2020 JOI Spring Training Camp/Qualifying Trial Day 4 Problem 3

 Attachments
File nameSize
treatment.zip944 bytes
```


## 144. Bitaro, who Leaps through Time

- Day/Contest: Day 55 / JOISC 2019
- Problem URL: https://oj.uz/problem/view/JOI19_timeleap
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\7738589b_JOI19_timeleap.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2019/2019-sp-tasks/day3/timeleap-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\18bcb944_timeleap-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI19_timeleap

View problem - Bitaro, who Leaps through Time (JOI19_timeleap) :: oj.uzView problem - Bitaro, who Leaps through Time (JOI19_timeleap)

Bitaro, who Leaps through Time Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o timeleap timeleap.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o timeleap timeleap.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o timeleap timeleap.cpp
Java/usr/bin/javac -encoding UTF-8 timeleap.java
/bin/sh -c echo "Main-Class: timeleap" > __manifest__.txt
/bin/sh -c jar cfm timeleap.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b timeleap.py
/bin/mv timeleap.pyc __main__.pyc
/usr/bin/zip timeleap.pyz.zip __main__.pyc
/bin/mv timeleap.pyz.zip timeleap.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms512 MiB6401249072.58%

Problem Source
2019 JOI Spring Training Camp/Qualifying Trial Day 3 Problem 3

 Attachments
File nameSize
timeleap.zip1.77 KiB
```


## 145. Wild Boar

- Day/Contest: Day 55 / JOISC 2018
- Problem URL: https://oj.uz/problem/view/JOI18_wild_boar
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\a95f2727_JOI18_wild_boar.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2018/2018-sp-tasks/day4/wild_boar-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\82cf436d_wild_boar-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI18_wild_boar

View problem - Wild Boar (JOI18_wild_boar) :: oj.uzView problem - Wild Boar (JOI18_wild_boar)

Wild Boar Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o wild_boar wild_boar.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o wild_boar wild_boar.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o wild_boar wild_boar.cpp
Java/usr/bin/javac -encoding UTF-8 wild_boar.java
/bin/sh -c echo "Main-Class: wild_boar" > __manifest__.txt
/bin/sh -c jar cfm wild_boar.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b wild_boar.py
/bin/mv wild_boar.pyc __main__.pyc
/usr/bin/zip wild_boar.pyz.zip __main__.pyc
/bin/mv wild_boar.pyz.zip wild_boar.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
18000 ms1024 MiB565775571.43%

Since our server is pretty slow, the time limit is 18 seconds instead of 10 (the model solution runs in 11 seconds)

Problem Source
2018 JOI Spring Training Camp/Qualifying Trial Day 4 Problem 3

 Attachments
File nameSize
wild_boar.zip958 bytes
```


## 146. Natural Park

- Day/Contest: Day 56 / JOISC 2017
- Problem URL: https://oj.uz/problem/view/JOI17_park
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\638524b4_JOI17_park.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2017/2017-sp-tasks/2017-sp-d3-natural_park-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\34a63465_2017-sp-d3-natural_park-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI17_park

View problem - Park (JOI17_park) :: oj.uzView problem - Park (JOI17_park)

Park Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o park park.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o park park.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o park park.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2000 ms256 MiB7541064845.28%

Problem Source
2017 JOI Spring Training Camp/Qualifying Trial Day 3 Problem 3

 Attachments
File nameSize
park.zip4.42 KiB
```


## 147. Navigation 2

- Day/Contest: Day 56 / JOISC 2021
- Problem URL: https://oj.uz/problem/view/JOI21_navigation2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\27fc5537_JOI21_navigation2.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2021/2021-sp-tasks/day4/navigation2-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\879c58a0_navigation2-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI21_navigation2

View problem - Navigation 2 (JOI21_navigation2) :: oj.uzView problem - Navigation 2 (JOI21_navigation2)

Navigation 2 Interactive Communication Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Anna Anna.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Anna Anna.cpp

Step #2
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Bruno Bruno.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Bruno Bruno.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
2500 ms512 MiB365834048.19%

Problem Source
2021 JOI Spring Training Camp/Qualifying Trial Day 4 Problem 2

 Attachments
File nameSize
navigation2.zip4.45 KiB
```


## 148. Escape Route

- Day/Contest: Day 57 / JOISC 2021
- Problem URL: https://oj.uz/problem/view/JOI21_escape_route
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\933fef0c_JOI21_escape_route.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2021/2021-sp-tasks/day2/escape_route-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\d42a8967_escape_route-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI21_escape_route

View problem - Escape Route (JOI21_escape_route) :: oj.uzView problem - Escape Route (JOI21_escape_route)

Escape Route Batch Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o escape_route escape_route.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o escape_route escape_route.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
9000 ms2048 MiB576893438.20%

Problem Source
2021 JOI Spring Training Camp/Qualifying Trial Day 2 Problem 1

 Attachments
File nameSize
escape_route.zip6.29 KiB
```


## 149. Ants and Sugar

- Day/Contest: Day 57 / JOISC 2022
- Problem URL: https://oj.uz/problem/view/JOI22_sugar
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\f423f268_JOI22_sugar.txt`
- Editorial URL: https://misaka18931.github.io/2022/04/05/JOISC-2022/
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\ee3e8546_index.txt`

**Problem statement:**

```
https://oj.uz/problem/view/JOI22_sugar

View problem - Ants and Sugar (JOI22_sugar) :: oj.uzView problem - Ants and Sugar (JOI22_sugar)

Ants and Sugar Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o sugar sugar.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o sugar sugar.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o sugar sugar.cpp
Java/usr/bin/javac -encoding UTF-8 sugar.java
/bin/sh -c echo "Main-Class: sugar" > __manifest__.txt
/bin/sh -c jar cfm sugar.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b sugar.py
/bin/mv sugar.pyc __main__.pyc
/usr/bin/zip sugar.pyz.zip __main__.pyc
/bin/mv sugar.pyz.zip sugar.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms1024 MiB253653350.77%

Problem Source
2022 JOI Spring Training Camp/Qualifying Trial Day 3 Problem 3
```


## 150. JOI Tour

- Day/Contest: Day 58 / JOISC 2024
- Problem URL: https://oj.uz/problem/view/JOI24_joitour
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\5bb5d4ac_JOI24_joitour.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2024/2024-sp-tasks/contest3/joitour-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\a9cbe570_joitour-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI24_joitour

View problem - JOI tour (JOI24_joitour) :: oj.uzView problem - JOI tour (JOI24_joitour)

JOI tour Interactive Compilation commands

×Compilation commands

LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o joitour joitour.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o joitour joitour.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB291542953.70%

Problem Source
2024 JOI Spring Training Camp/Qualifying Trial Day 3 Problem 2

 Attachments
File nameSize
dist.zip1.79 KiB
```


## 151. Festivals in JOI Kingdom 2

- Day/Contest: Day 58 / JOISC 2023
- Problem URL: https://oj.uz/problem/view/JOI23_festival2
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\c6a5b89b_JOI23_festival2.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2023/2023-sp-tasks/contest1/festival2-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\004d05e0_festival2-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI23_festival2

View problem - Festivals in JOI Kingdom 2 (JOI23_festival2) :: oj.uzView problem - Festivals in JOI Kingdom 2 (JOI23_festival2)

Festivals in JOI Kingdom 2 Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o festival2 festival2.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o festival2 festival2.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o festival2 festival2.cpp
Java/usr/bin/javac -encoding UTF-8 festival2.java
/bin/sh -c echo "Main-Class: festival2" > __manifest__.txt
/bin/sh -c jar cfm festival2.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b festival2.py
/bin/mv festival2.pyc __main__.pyc
/usr/bin/zip festival2.pyz.zip __main__.pyc
/bin/mv festival2.pyz.zip festival2.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
9000 ms1024 MiB99381128.95%

Problem Source
2023 JOI Spring Training Camp/Qualifying Trial Day 1 Problem 2

 Attachments
File nameSize
festival2.zip848 bytes
```


## 152. Security Gate

- Day/Contest: Day 59 / JOISC 2018
- Problem URL: https://oj.uz/problem/view/JOI18_security_gate
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\60738ded_JOI18_security_gate.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2018/2018-sp-tasks/day3/security_gate-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\6cfc8c79_security_gate-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI18_security_gate

View problem - Security Gate (JOI18_security_gate) :: oj.uzView problem - Security Gate (JOI18_security_gate)

Security Gate Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o securitygate securitygate.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o securitygate securitygate.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o securitygate securitygate.cpp
Java/usr/bin/javac -encoding UTF-8 securitygate.java
/bin/sh -c echo "Main-Class: securitygate" > __manifest__.txt
/bin/sh -c jar cfm securitygate.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b securitygate.py
/bin/mv securitygate.pyc __main__.pyc
/usr/bin/zip securitygate.pyz.zip __main__.pyc
/bin/mv securitygate.pyz.zip securitygate.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
5000 ms1024 MiB12036925.00%

Problem Source
2018 JOI Spring Training Camp/Qualifying Trial Day 3 Problem 3

 Attachments
File nameSize
securitygate.zip1.13 KiB
```


## 153. Flights

- Day/Contest: Day 59 / JOISC 2022
- Problem URL: https://oj.uz/problem/view/JOI22_flights
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\5f79610a_JOI22_flights.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2022/2022-sp-tasks/contest2/flights-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\9abef911_flights-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI22_flights

View problem - Flights (JOI22_flights) :: oj.uzView problem - Flights (JOI22_flights)

Flights Interactive Communication Compilation commands

×Compilation commands

Step #1
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Ali Ali.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Ali Ali.cpp

Step #2
LanguageCompilation command
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o Benjamin Benjamin.cpp
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o Benjamin Benjamin.cpp

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
4000 ms512 MiB5756246.45%

Problem Source
2022 JOI Spring Training Camp/Qualifying Trial Day 2 Problem 2

 Attachments
File nameSize
flights.zip3.65 KiB
```


## 154. Space Thief

- Day/Contest: Day 60 / JOISC 2025
- Problem URL: https://oj.uz/problem/view/JOI25_thief
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\ab98bae7_JOI25_thief.txt`
- Editorial URL: https://www2.ioi-jp.org/camp/2025/2025-sp-tasks/contest2/thief-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\f40d0601_thief-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI25_thief

View problem - Space Thief (JOI25_thief) :: oj.uzView problem - Space Thief (JOI25_thief)

Space Thief Batch Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o thief thief.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o thief thief.cpp grader.cpp thief.h
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o thief thief.cpp grader.cpp thief.h
Java/usr/bin/javac -encoding UTF-8 thief.java
/bin/sh -c echo "Main-Class: thief" > __manifest__.txt
/bin/sh -c jar cfm thief.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b thief.py
/bin/mv thief.pyc __main__.pyc
/usr/bin/zip thief.pyz.zip __main__.pyc
/bin/mv thief.pyz.zip thief.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB4544100.00%

Problem Source
2025 JOI Spring Training Camp/Qualifying Trial Day 2 Problem 3

 Attachments
File nameSize
thief-dist.zip1.51 KiB
```


## 155. Multi Communication 2

- Day/Contest: Day 60 / JOISC 2026
- Problem URL: https://oj.uz/problem/view/JOI26_multi
- Local problem file: `C:\Users\raman\Desktop\om\downloads\problems\b1c452ed_JOI26_multi.txt`
- Editorial URL: https://www2.ioi-jp.org/joi/2025/2026-final/contest1/multi-review.pdf
- Local editorial: `C:\Users\raman\Desktop\om\downloads\editorials\efe1854f_multi-review.pdf`

**Problem statement:**

```
https://oj.uz/problem/view/JOI26_multi

View problem - Multi Communication 2 (JOI26_multi) :: oj.uzView problem - Multi Communication 2 (JOI26_multi)

Multi Communication 2 Interactive Communication Compilation commands

×Compilation commands

LanguageCompilation command
C11/usr/bin/gcc -DEVAL -std=gnu11 -O2 -pipe -static -s -o multi multi.c -lm
C++20/usr/bin/g++ -DEVAL -std=gnu++20 -O2 -pipe -static -s -o multi multi.cpp grader.cpp multi.h
C++17/usr/bin/g++ -DEVAL -std=gnu++17 -O2 -pipe -static -s -o multi multi.cpp grader.cpp multi.h
Java/usr/bin/javac -encoding UTF-8 multi.java
/bin/sh -c echo "Main-Class: multi" > __manifest__.txt
/bin/sh -c jar cfm multi.jar __manifest__.txt *.class
Pypy 3/usr/bin/pypy3 -m compileall -b multi.py
/bin/mv multi.pyc __main__.pyc
/usr/bin/zip multi.pyz.zip __main__.pyc
/bin/mv multi.pyz.zip multi.pyz

Statement
Submit
Statistics
All submissions
Time limitMemory limit# of submissions# of submitted usersSolved #Accepted user ratio
3000 ms1024 MiB4212325.00%

Problem Source
2026 JOI Spring Training Camp/Qualifying Trial Day 1 Problem 3

 Attachments
File nameSize
multi.cpp252 bytes
multi-dist.zip6.54 KiB
multi.h234 bytes
sample_grader.cpp2.80 KiB
```
