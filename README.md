<div align="center">

# ✨ 100 Days of Code – Basic Coding with C ✨
### UPES Computer Science & Engineering

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="Language: C" />
  <img src="https://img.shields.io/badge/Duration-100%20Days-blueviolet?style=for-the-badge" alt="Duration: 100 Days" />
  <img src="https://img.shields.io/badge/Problems-150-success?style=for-the-badge" alt="Problems: 150" />
  <img src="https://img.shields.io/badge/Curriculum-100%20Days%20of%20Code-orange?style=for-the-badge" alt="Curriculum: 100 Days of Code" />
</p>

</div>

---

## 📖 About This Repository

This repository hosts the comprehensive curriculum for the **UPES 100 Days of Code (Basic Coding with C)** challenge, spanning **100 Days and 150 structured programming problems**:

> 📅 **Daily Problem Pace:**
> - **Days 1 – 50 (Phase 1):** **2 questions per day** (`Q1` – `Q100`), establishing core programming fundamentals.
> - **Days 51 – 100 (Phase 2):** **1 question per day** (`Q101` – `Q150`), covering advanced algorithms, file handling, enumerations, structured data types, heap allocation, and pointers.
>
> 🧱 **Enum Section (`Q131 – Q150`):** Questions 131 to 150 are classified under **Enum**, spanning enumeration fundamentals (`Q131 – Q140`, Days 81–90) and complex real-world structures, binary file I/O, dynamic memory, and pointer operations (`Q141 – Q150`, Days 91–100).

---

## 🚀 Quick Start

You can compile and run any solution using standard `gcc` (GCC Compiler):

```bash
# Compile with standard warnings
gcc -Wall -Wextra -O2 Q141.c -o Q141

# Execute the program
./Q141
```

---

## 🗺️ Syllabus & Daily Schedule Overview

| # | Section | Icon | Question Range | Day Schedule | Pace | Total Problems | Quick Link |
|:---:|:---|:---:|:---:|:---:|:---:|:---:|:---|
| 1 | User Inputs, Operations & Output | 🖥️ | Q1 – Q10 | Day 1 – Day 5 | 2 / day | 10 | [Explore](#user-inputs-operations-output) |
| 2 | Conditional Statements | 🔀 | Q11 – Q25 | Day 6 – Day 13 | 2 / day | 15 | [Explore](#conditional-statements) |
| 3 | Loops without Arrays/Strings | 🔁 | Q26 – Q45 | Day 13 – Day 23 | 2 / day | 20 | [Explore](#loops-without-arrays-strings) |
| 4 | Nested Loops without Arrays/Strings | 🔄 | Q46 – Q55 | Day 23 – Day 28 | 2 / day | 10 | [Explore](#nested-loops-without-arrays-strings) |
| 5 | Arrays (1D) | 🔢 | Q56 – Q70 | Day 28 – Day 35 | 2 / day | 15 | [Explore](#arrays-1d) |
| 6 | 2D Arrays | 🔲 | Q71 – Q80 | Day 36 – Day 40 | 2 / day | 10 | [Explore](#2d-arrays) |
| 7 | Strings | 🔤 | Q81 – Q100 | Day 41 – Day 50 | 2 / day | 20 | [Explore](#strings) |
| 8 | Logic Enhancers | 💡 | Q101 – Q119 | Day 51 – Day 69 | 1 / day | 19 | [Explore](#logic-enhancers) |
| 9 | File Handling | 📁 | Q120 – Q130 | Day 70 – Day 80 | 1 / day | 11 | [Explore](#file-handling) |
| 10 | Enum (Part 1: Basics) | 🧱 | Q131 – Q140 | Day 81 – Day 90 | 1 / day | 10 | [Explore](#enum-part-1-basics) |
| 11 | Enum (Part 2: Structs, Files & Pointers) | 🧱 | Q141 – Q150 | Day 91 – Day 100 | 1 / day | 10 | [Explore](#enum-part-2-structs-files-pointers) |
| | **Total Curriculum** | 🎯 | **Q1 – Q150** | **Day 1 – Day 100** | **100 Days** | **150** | |

---

## 📚 Complete Problem Catalog (Days 1 – 100)

<a id="user-inputs-operations-output"></a>
## 🖥️ User Inputs, Operations & Output (Q1 – Q10) — Days 1 – 5

<details >
<summary><b>Click to expand/collapse User Inputs, Operations & Output (Q1 – Q10 | Days 1 – 5)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 1** | **Q1** | Write a program to input two numbers and display their sum. | <b>Case 1:</b> <code>3 4</code><br><b>Case 2:</b> <code>-1 20</code> | <b>Case 1:</b> <code>Sum = 7</code><br><b>Case 2:</b> <code>Sum = 19</code> | - |
| **Day 1** | **Q2** | Write a program to input two numbers and display their sum, difference, product, and quotient. | <b>Case 1:</b> <code>10 2</code><br><b>Case 2:</b> <code>7 3</code> | <b>Case 1:</b> <code>Sum=12, Diff=8, Product=20, Quotient=5</code><br><b>Case 2:</b> <code>Sum=10, Diff=4, Product=21, Quotient=2</code> | 📌 **Note:** Division by zero should be handled carefully. |
| **Day 2** | **Q3** | Write a program to calculate the area and perimeter of a rectangle given its length and breadth. | <b>Case 1:</b> <code>5 10</code><br><b>Case 2:</b> <code>3 7</code> | <b>Case 1:</b> <code>Area=50, Perimeter=30</code><br><b>Case 2:</b> <code>Area=21, Perimeter=20</code> | - |
| **Day 2** | **Q4** | Write a program to calculate the area and circumference of a circle given its radius. | <b>Case 1:</b> <code>7</code><br><b>Case 2:</b> <code>3</code> | <b>Case 1:</b> <code>Area=153.94, Circumference=43.96</code><br><b>Case 2:</b> <code>Area=28.27, Circumference=18.85</code> | - |
| **Day 3** | **Q5** | Write a program to convert temperature from Celsius to Fahrenheit. | <b>Case 1:</b> <code>0</code><br><b>Case 2:</b> <code>100</code> | <b>Case 1:</b> <code>Fahrenheit=32</code><br><b>Case 2:</b> <code>Fahrenheit=212</code> | - |
| **Day 3** | **Q6** | Write a program to swap two numbers using a third variable. | <b>Case 1:</b> <code>3 5</code><br><b>Case 2:</b> <code>-1 1</code> | <b>Case 1:</b> <code>After swap: 5 3</code><br><b>Case 2:</b> <code>After swap: 1 -1</code> | - |
| **Day 4** | **Q7** | Write a program to swap two numbers without using a third variable. | <b>Case 1:</b> <code>10 20</code><br><b>Case 2:</b> <code>7 14</code> | <b>Case 1:</b> <code>After swap: 20 10</code><br><b>Case 2:</b> <code>After swap: 14 7</code> | - |
| **Day 4** | **Q8** | Write a program to find and display the sum of the first n natural numbers. | <b>Case 1:</b> <code>5</code><br><b>Case 2:</b> <code>10</code> | <b>Case 1:</b> <code>Sum=15</code><br><b>Case 2:</b> <code>Sum=55</code> | - |
| **Day 5** | **Q9** | Write a program to calculate simple and compound interest for given principal, rate, and time. | <b>Case 1:</b> <code>1000 5 2</code><br><b>Case 2:</b> <code>5000 7 3</code> | <b>Case 1:</b> <code>Simple Interest=100, Compound Interest=102.5</code><br><b>Case 2:</b> <code>Simple Interest=1050, Compound Interest=1125.76</code> | - |
| **Day 5** | **Q10** | Write a program to input time in seconds and convert it to hours:minutes:seconds format. | <b>Case 1:</b> <code>3661</code><br><b>Case 2:</b> <code>7322</code> | <b>Case 1:</b> <code>1:1:1</code><br><b>Case 2:</b> <code>2:2:2</code> | - |

</details>

---

<a id="conditional-statements"></a>
## 🔀 Conditional Statements (Q11 – Q25) — Days 6 – 13

<details >
<summary><b>Click to expand/collapse Conditional Statements (Q11 – Q25 | Days 6 – 13)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 6** | **Q11** | Write a program to input an integer and check whether it is even or odd using if–else. | <b>Case 1:</b> <code>7</code><br><b>Case 2:</b> <code>12</code> | <b>Case 1:</b> <code>7 is odd</code><br><b>Case 2:</b> <code>12 is even</code> | - |
| **Day 6** | **Q12** | Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. | <b>Case 1:</b> <code>-5</code><br><b>Case 2:</b> <code>0</code><br><b>Case 3:</b> <code>10</code> | <b>Case 1:</b> <code>Negative</code><br><b>Case 2:</b> <code>Zero</code><br><b>Case 3:</b> <code>Positive</code> | - |
| **Day 7** | **Q13** | Write a program to input a year and check whether it is a leap year or not using conditional statements. | <b>Case 1:</b> <code>2020</code><br><b>Case 2:</b> <code>1900</code><br><b>Case 3:</b> <code>2000</code> | <b>Case 1:</b> <code>Leap year</code><br><b>Case 2:</b> <code>Not a leap year</code><br><b>Case 3:</b> <code>Leap year</code> | 📌 **Note:** Year is a leap year if divisible by 4 but not 100, except if divisible by 400. |
| **Day 7** | **Q14** | Write a program to input a character and check whether it is a vowel or consonant using if–else. | <b>Case 1:</b> <code>a</code><br><b>Case 2:</b> <code>b</code> | <b>Case 1:</b> <code>Vowel</code><br><b>Case 2:</b> <code>Consonant</code> | - |
| **Day 8** | **Q15** | Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. | <b>Case 1:</b> <code>A</code><br><b>Case 2:</b> <code>a</code><br><b>Case 3:</b> <code>3</code><br><b>Case 4:</b> <code>#</code> | <b>Case 1:</b> <code>Uppercase alphabet</code><br><b>Case 2:</b> <code>Lowercase alphabet</code><br><b>Case 3:</b> <code>Digit</code><br><b>Case 4:</b> <code>Special character</code> | - |
| **Day 8** | **Q16** | Write a program to input three numbers and find the largest among them using if–else. | <b>Case 1:</b> <code>3 7 5</code><br><b>Case 2:</b> <code>-1 -5 0</code> | <b>Case 1:</b> <code>Largest is 7</code><br><b>Case 2:</b> <code>Largest is 0</code> | - |
| **Day 9** | **Q17** | Write a program to find the roots of a quadratic equation and categorize them. | <b>Case 1:</b> <code>1 -3 2</code><br><b>Case 2:</b> <code>1 -2 1</code><br><b>Case 3:</b> <code>1 2 5</code> | <b>Case 1:</b> <code>Roots are real and different: 2, 1</code><br><b>Case 2:</b> <code>Roots are real and same: 1</code><br><b>Case 3:</b> <code>Roots are complex</code> | - |
| **Day 9** | **Q18** | Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: <br>90-100: Grade A <br>80-89: Grade B <br>70-79: Grade C <br>60-69: Grade D <br>below 60: Grade F. | <b>Case 1:</b> <code>95</code><br><b>Case 2:</b> <code>82</code><br><b>Case 3:</b> <code>68</code><br><b>Case 4:</b> <code>50</code> | <b>Case 1:</b> <code>Grade A</code><br><b>Case 2:</b> <code>Grade B</code><br><b>Case 3:</b> <code>Grade D</code><br><b>Case 4:</b> <code>Grade F</code> | - |
| **Day 10** | **Q19** | Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. | <b>Case 1:</b> <code>3 3 3</code><br><b>Case 2:</b> <code>3 3 4</code><br><b>Case 3:</b> <code>2 3 4</code> | <b>Case 1:</b> <code>Equilateral</code><br><b>Case 2:</b> <code>Isosceles</code><br><b>Case 3:</b> <code>Scalene</code> | - |
| **Day 10** | **Q20** | Write a program to display the day of the week based on a number (1–7) using switch-case. | <b>Case 1:</b> <code>1</code><br><b>Case 2:</b> <code>5</code> | <b>Case 1:</b> <code>Monday</code><br><b>Case 2:</b> <code>Friday</code> | - |
| **Day 11** | **Q21** | Write a program to display the month name and number of days using switch-case for a given month number. | <b>Case 1:</b> <code>2</code><br><b>Case 2:</b> <code>12</code> | <b>Case 1:</b> <code>February, 28 days</code><br><b>Case 2:</b> <code>December, 31 days</code> | - |
| **Day 11** | **Q22** | Write a program to find profit or loss percentage given cost price and selling price. | <b>Case 1:</b> <code>1000 1200</code><br><b>Case 2:</b> <code>1000 800</code><br><b>Case 3:</b> <code>1000 1000</code> | <b>Case 1:</b> <code>Profit 20%</code><br><b>Case 2:</b> <code>Loss 20%</code><br><b>Case 3:</b> <code>No Profit No Loss</code> | - |
| **Day 12** | **Q23** | Write a program to calculate library fine based on late days as follows: <br>First 5 days late: ₹2/day <br>Next 5 days late: ₹4/day <br>Next 20 days days late: ₹6/day <br>More than 30 days: Membership Cancelled. | <b>Case 1:</b> <code>4</code><br><b>Case 2:</b> <code>8</code><br><b>Case 3:</b> <code>15</code><br><b>Case 4:</b> <code>31</code> | <b>Case 1:</b> <code>Fine ₹8</code><br><b>Case 2:</b> <code>Fine ₹22</code><br><b>Case 3:</b> <code>Fine ₹60</code><br><b>Case 4:</b> <code>Membership Cancelled</code> | - |
| **Day 12** | **Q24** | Write a program to calculate electricity bill based on units consumed with these rates: <br>First 100 units at ₹5/unit <br>Next 100 units at ₹7/unit <br>Next 100 units at ₹10/unit <br>Above at ₹12/unit | <b>Case 1:</b> <code>50</code><br><b>Case 2:</b> <code>150</code><br><b>Case 3:</b> <code>250</code> | <b>Case 1:</b> <code>Bill: ₹250</code><br><b>Case 2:</b> <code>Bill: ₹850</code><br><b>Case 3:</b> <code>Bill: ₹1700</code> | - |
| **Day 13** | **Q25** | Write a program to implement a basic calculator using switch-case for +, -, *, /, %. | <b>Case 1:</b> <code>4 2 +</code><br><b>Case 2:</b> <code>10 3 %</code><br><b>Case 3:</b> <code>15 5 /</code> | <b>Case 1:</b> <code>6</code><br><b>Case 2:</b> <code>1</code><br><b>Case 3:</b> <code>3</code> | - |

</details>

---

<a id="loops-without-arrays-strings"></a>
## 🔁 Loops without Arrays/Strings (Q26 – Q45) — Days 13 – 23

<details >
<summary><b>Click to expand/collapse Loops without Arrays/Strings (Q26 – Q45 | Days 13 – 23)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 13** | **Q26** | Write a program to print numbers from 1 to n. | <b>Case 1:</b> <code>5</code><br><b>Case 2:</b> <code>3</code> | <b>Case 1:</b> <code>1 2 3 4 5</code><br><b>Case 2:</b> <code>1 2 3</code> | - |
| **Day 14** | **Q27** | Write a program to print the sum of the first n odd numbers. | <b>Case 1:</b> <code>3</code><br><b>Case 2:</b> <code>5</code> | <b>Case 1:</b> <code>9</code><br><b>Case 2:</b> <code>25</code> | - |
| **Day 14** | **Q28** | Write a program to print the product of even numbers from 1 to n. | <b>Case 1:</b> <code>4</code><br><b>Case 2:</b> <code>6</code> | <b>Case 1:</b> <code>8 (2 * 4)</code><br><b>Case 2:</b> <code>48 (2 * 4 * 6)</code> | - |
| **Day 15** | **Q29** | Write a program to calculate the factorial of a number. | <b>Case 1:</b> <code>5</code><br><b>Case 2:</b> <code>3</code> | <b>Case 1:</b> <code>120</code><br><b>Case 2:</b> <code>6</code> | - |
| **Day 15** | **Q30** | Write a program to reverse a given number. | <b>Case 1:</b> <code>1234</code><br><b>Case 2:</b> <code>100</code> | <b>Case 1:</b> <code>4321</code><br><b>Case 2:</b> <code>1</code> | - |
| **Day 16** | **Q31** | Write a program to take a number as input and print its equivalent binary representation. | <b>Case 1:</b> <code>10</code><br><b>Case 2:</b> <code>7</code> | <b>Case 1:</b> <code>1010</code><br><b>Case 2:</b> <code>111</code> | - |
| **Day 16** | **Q32** | Write a program to check if a number is a palindrome. | <b>Case 1:</b> <code>121</code><br><b>Case 2:</b> <code>123</code> | <b>Case 1:</b> <code>Palindrome</code><br><b>Case 2:</b> <code>Not palindrome</code> | - |
| **Day 17** | **Q33** | Write a program to check if a number is an Armstrong number. | <b>Case 1:</b> <code>153</code><br><b>Case 2:</b> <code>123</code> | <b>Case 1:</b> <code>Armstrong</code><br><b>Case 2:</b> <code>Not Armstrong</code> | - |
| **Day 17** | **Q34** | Write a program to check if a number is prime. | <b>Case 1:</b> <code>7</code><br><b>Case 2:</b> <code>10</code> | <b>Case 1:</b> <code>Prime</code><br><b>Case 2:</b> <code>Not prime</code> | - |
| **Day 18** | **Q35** | Write a program to print all factors of a given number. | <b>Case 1:</b> <code>6</code><br><b>Case 2:</b> <code>10</code> | <b>Case 1:</b> <code>1 2 3 6</code><br><b>Case 2:</b> <code>1 2 5 10</code> | - |
| **Day 18** | **Q36** | Write a program to find the HCF (GCD) of two numbers. | <b>Case 1:</b> <code>12 18</code><br><b>Case 2:</b> <code>7 9</code> | <b>Case 1:</b> <code>6</code><br><b>Case 2:</b> <code>1</code> | - |
| **Day 19** | **Q37** | Write a program to find the LCM of two numbers. | <b>Case 1:</b> <code>4 5</code><br><b>Case 2:</b> <code>7 3</code> | <b>Case 1:</b> <code>20</code><br><b>Case 2:</b> <code>21</code> | - |
| **Day 19** | **Q38** | Write a program to find the sum of digits of a number. | <b>Case 1:</b> <code>123</code><br><b>Case 2:</b> <code>999</code> | <b>Case 1:</b> <code>6</code><br><b>Case 2:</b> <code>27</code> | - |
| **Day 20** | **Q39** | Write a program to find the product of odd digits of a number. | <b>Case 1:</b> <code>12345</code><br><b>Case 2:</b> <code>2468</code> | <b>Case 1:</b> <code>15 (1*3*5)</code><br><b>Case 2:</b> <code>1 (no odd digits, assume 1)</code> | - |
| **Day 20** | **Q40** | Write a program to find the 1’s complement of a binary number and print it. | <b>Case 1:</b> <code>1010</code><br><b>Case 2:</b> <code>1111</code> | <b>Case 1:</b> <code>0101</code><br><b>Case 2:</b> <code>0000</code> | - |
| **Day 21** | **Q41** | Write a program to swap the first and last digit of a number. | <b>Case 1:</b> <code>1234</code><br><b>Case 2:</b> <code>1001</code> | <b>Case 1:</b> <code>4231</code><br><b>Case 2:</b> <code>1001</code> | - |
| **Day 21** | **Q42** | Write a program to check if a number is a perfect number. | <b>Case 1:</b> <code>6</code><br><b>Case 2:</b> <code>10</code> | <b>Case 1:</b> <code>Perfect number</code><br><b>Case 2:</b> <code>Not perfect number</code> | - |
| **Day 22** | **Q43** | Write a program to check if a number is a strong number. | <b>Case 1:</b> <code>145</code><br><b>Case 2:</b> <code>123</code> | <b>Case 1:</b> <code>Strong number</code><br><b>Case 2:</b> <code>Not strong number</code> | - |
| **Day 22** | **Q44** | Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. | <b>Case 1:</b> <code>3</code><br><b>Case 2:</b> <code>5</code> | <b>Case 1:</b> <code>Approximate sum: 3.3</code><br><b>Case 2:</b> <code>Approximate sum: 4.4</code> | - |
| **Day 23** | **Q45** | Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. | <b>Case 1:</b> <code>3</code><br><b>Case 2:</b> <code>5</code> | <b>Case 1:</b> <code>Approximate sum: 1.56</code><br><b>Case 2:</b> <code>Approximate sum: 2.22</code> | - |

</details>

---

<a id="nested-loops-without-arrays-strings"></a>
## 🔄 Nested Loops without Arrays/Strings (Q46 – Q55) — Days 23 – 28

<details >
<summary><b>Click to expand/collapse Nested Loops without Arrays/Strings (Q46 – Q55 | Days 23 – 28)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 23** | **Q46** | Write a program to print the following pattern:<br>*****<br>*****<br>*****<br>*****<br>***** | *(No input)* | <code>*****<br>*****<br>*****<br>*****<br>*****</code> | - |
| **Day 24** | **Q47** | Write a program to print the following pattern:<br>*<br>**<br>***<br>****<br>***** | *(No input)* | <code>*<br>**<br>***<br>****<br>*****</code> | - |
| **Day 24** | **Q48** | Write a program to print the following pattern:<br>1<br>12<br>123<br>1234<br>12345 | *(No input)* | <code>1<br>12<br>123<br>1234<br>12345</code> | - |
| **Day 25** | **Q49** | Write a program to print the following pattern:<br>5<br>45<br>345<br>2345<br>12345 | *(No input)* | <code>5<br>45<br>345<br>2345<br>12345</code> | - |
| **Day 25** | **Q50** | Write a program to print the following pattern:<br>*****<br> ****<br>  ***<br>   **<br>    * | <b>Case 1:</b> <code>*(No input)*</code><br><b>Case 2:</b> <code>*(No input)*</code> | <b>Case 1:</b> <code>*****<br> ****<br>  ***<br>   **<br>    *</code><br><b>Case 2:</b> <code>Note: Spaces indicate indentation.</code> | - |
| **Day 26** | **Q51** | Write a program to print the following pattern:<br>    5<br>   45<br>  345<br> 2345<br>12345 | *(No input)* | <code>5<br>   45<br>  345<br> 2345<br>12345</code> | - |
| **Day 26** | **Q52** | Write a program to print the following pattern:<br><br>*<br><br>*<br>*<br>*<br><br>*<br>*<br>*<br>*<br>*<br><br>*<br>*<br>*<br><br>*<br><br> | *(No input)* | <code>Pattern with stars spaced irregularly as shown.</code> | - |
| **Day 27** | **Q53** | Write a program to print the following pattern:<br>*<br>***<br>*****<br>*******<br>*********<br>*******<br>*****<br>***<br>* | *(No input)* | <code>*<br>***<br>*****<br>*******<br>*********<br>*******<br>*****<br>***<br>*</code> | - |
| **Day 27** | **Q54** | Write a program to print the following pattern:<br><br>   *<br>  ***<br> *****<br>*******<br> *****<br>  ***<br>   *<br> | *(No input)* | <code>Pattern with layers of stars as shown.</code> | - |
| **Day 28** | **Q55** | Write a program to print all the prime numbers from 1 to n. | <b>Case 1:</b> <code>10</code><br><b>Case 2:</b> <code>20</code> | <b>Case 1:</b> <code>2 3 5 7</code><br><b>Case 2:</b> <code>2 3 5 7 11 13 17 19</code> | - |

</details>

---

<a id="arrays-1d"></a>
## 🔢 Arrays (1D) (Q56 – Q70) — Days 28 – 35

<details >
<summary><b>Click to expand/collapse Arrays (1D) (Q56 – Q70 | Days 28 – 35)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 28** | **Q56** | Read and print elements of a one-dimensional array. | <b>Case 1:</b> <code>3<br>10 20 30</code><br><b>Case 2:</b> <code>5<br>1 2 3 4 5</code> | <b>Case 1:</b> <code>10 20 30</code><br><b>Case 2:</b> <code>1 2 3 4 5</code> | - |
| **Day 29** | **Q57** | Find the sum of array elements. | <b>Case 1:</b> <code>4<br>2 4 6 8</code><br><b>Case 2:</b> <code>3<br>1 1 1</code> | <b>Case 1:</b> <code>20</code><br><b>Case 2:</b> <code>3</code> | - |
| **Day 29** | **Q58** | Find the maximum and minimum element in an array. | <b>Case 1:</b> <code>5<br>2 9 1 4 7</code><br><b>Case 2:</b> <code>3<br>10 10 10</code> | <b>Case 1:</b> <code>Max=9, Min=1</code><br><b>Case 2:</b> <code>Max=10, Min=10</code> | - |
| **Day 30** | **Q59** | Count even and odd numbers in an array. | <b>Case 1:</b> <code>6<br>1 2 3 4 5 6</code><br><b>Case 2:</b> <code>4<br>2 4 6 8</code> | <b>Case 1:</b> <code>Even=3, Odd=3</code><br><b>Case 2:</b> <code>Even=4, Odd=0</code> | - |
| **Day 30** | **Q60** | Count positive, negative, and zero elements in an array. | <code>5<br>-1 0 1 2 -2</code> | <code>Positive=2, Negative=2, Zero=1</code> | - |
| **Day 31** | **Q61** | Search for an element in an array using linear search. | <b>Case 1:</b> <code>5<br>1 2 3 4 5<br>3</code><br><b>Case 2:</b> <code>4<br>10 20 30 40<br>25</code> | <b>Case 1:</b> <code>Found at index 2</code><br><b>Case 2:</b> <code>-1</code> | - |
| **Day 31** | **Q62** | Reverse an array without taking extra space. | <code>4<br>1 2 3 4</code> | <code>4 3 2 1</code> | - |
| **Day 32** | **Q63** | Merge two arrays. | <code>3<br>1 2 3<br>2<br>4 5</code> | <code>1 2 3 4 5</code> | - |
| **Day 32** | **Q64** | Find the digit that occurs the most times in an integer number. | <b>Case 1:</b> <code>112233</code><br><b>Case 2:</b> <code>887799</code> | <b>Case 1:</b> <code>1</code><br><b>Case 2:</b> <code>7</code> | - |
| **Day 33** | **Q65** | Search in a sorted array using binary search. | <b>Case 1:</b> <code>5<br>1 3 5 7 9<br>7</code><br><b>Case 2:</b> <code>5<br>1 3 5 7 9<br>6</code> | <b>Case 1:</b> <code>Found at index 3</code><br><b>Case 2:</b> <code>-1</code> | - |
| **Day 33** | **Q66** | Insert an element in a sorted array at the appropriate position. | <code>5<br>1 2 4 5 6<br>3</code> | <code>1 2 3 4 5 6</code> | - |
| **Day 34** | **Q67** | Insert an element in an array at a given position. | <code>4<br>10 20 30 40<br>2 15</code> | <code>10 20 15 30 40</code> | - |
| **Day 34** | **Q68** | Delete an element from an array. | <code>5<br>1 2 3 4 5<br>2</code> | <code>1 2 4 5</code> | - |
| **Day 35** | **Q69** | Find the second largest element in an array. | <code>5<br>10 20 30 40 50</code> | <code>40</code> | - |
| **Day 35** | **Q70** | Rotate an array to the right by k positions. | <code>5<br>1 2 3 4 5<br>2</code> | <code>4 5 1 2 3</code> | - |

</details>

---

<a id="2d-arrays"></a>
## 🔲 2D Arrays (Q71 – Q80) — Days 36 – 40

<details >
<summary><b>Click to expand/collapse 2D Arrays (Q71 – Q80 | Days 36 – 40)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 36** | **Q71** | Read and print a matrix. | <code>2 2<br>1 2<br>3 4</code> | <code>1 2<br>3 4</code> | - |
| **Day 36** | **Q72** | Find the sum of all elements in a matrix. | <code>2 3<br>1 2 3<br>4 5 6</code> | <code>21</code> | - |
| **Day 37** | **Q73** | Find the sum of each row of a matrix and store it in an array. | <code>2 3<br>1 2 3<br>4 5 6</code> | <code>6 15</code> | - |
| **Day 37** | **Q74** | Find the transpose of a matrix. | <code>2 3<br>1 2 3<br>4 5 6</code> | <code>1 4<br>2 5<br>3 6</code> | - |
| **Day 38** | **Q75** | Add two matrices. | <code>2 2<br>1 2<br>3 4<br>2 2<br>5 6<br>7 8</code> | <code>6 8<br>10 12</code> | - |
| **Day 38** | **Q76** | Check if a matrix is symmetric. | <b>Case 1:</b> <code>2 2<br>1 2<br>2 1</code><br><b>Case 2:</b> <code>2 2<br>1 0<br>2 1</code> | <b>Case 1:</b> <code>True</code><br><b>Case 2:</b> <code>False</code> | - |
| **Day 39** | **Q77** | Check if the elements on the diagonal of a matrix are distinct. | <b>Case 1:</b> <code>3 3<br>1 2 3<br>4 5 6<br>7 8 1</code><br><b>Case 2:</b> <code>3 3<br>1 2 3<br>4 5 6<br>7 8 9</code> | <b>Case 1:</b> <code>False</code><br><b>Case 2:</b> <code>True</code> | - |
| **Day 39** | **Q78** | Find the sum of main diagonal elements for a square matrix. | <code>3 3<br>1 2 3<br>4 5 6<br>7 8 9</code> | <code>15</code> | - |
| **Day 40** | **Q79** | Perform diagonal traversal of a matrix. | <code>3 3<br>1 2 3<br>4 5 6<br>7 8 9</code> | <code>1 2 4 7 5 3 6 8 9</code> | - |
| **Day 40** | **Q80** | Multiply two matrices. | <code>2 3<br>1 2 3<br>4 5 6<br>3 2<br>7 8<br>9 10<br>11 12</code> | <code>58 64<br>139 154</code> | - |

</details>

---

<a id="strings"></a>
## 🔤 Strings (Q81 – Q100) — Days 41 – 50

<details >
<summary><b>Click to expand/collapse Strings (Q81 – Q100 | Days 41 – 50)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 41** | **Q81** | Count characters in a string without using built-in length functions. | <b>Case 1:</b> <code>Hello</code><br><b>Case 2:</b> <code>*(No input)*</code> | <b>Case 1:</b> <code>5</code><br><b>Case 2:</b> <code>1</code> | - |
| **Day 41** | **Q82** | Print each character of a string on a new line. | <code>Hi</code> | <code>H<br>i</code> | - |
| **Day 42** | **Q83** | Count vowels and consonants in a string. | <code>hello</code> | <code>Vowels=2, Consonants=3</code> | - |
| **Day 42** | **Q84** | Convert a lowercase string to uppercase without using built-in functions. | <code>hello</code> | <code>HELLO</code> | - |
| **Day 43** | **Q85** | Reverse a string. | <code>abcd</code> | <code>dcba</code> | - |
| **Day 43** | **Q86** | Check if a string is a palindrome. | <b>Case 1:</b> <code>madam</code><br><b>Case 2:</b> <code>hello</code> | <b>Case 1:</b> <code>Palindrome</code><br><b>Case 2:</b> <code>Not palindrome</code> | - |
| **Day 44** | **Q87** | Count spaces, digits, and special characters in a string. | <code>a b1&2</code> | <code>Spaces=1, Digits=2, Special=1</code> | - |
| **Day 44** | **Q88** | Replace spaces with hyphens in a string. | <code>hello world</code> | <code>hello-world</code> | - |
| **Day 45** | **Q89** | Count frequency of a given character in a string. | <code>programming<br>g</code> | <code>2</code> | - |
| **Day 45** | **Q90** | Toggle case of each character in a string. | <code>Hello</code> | <code>hELLO</code> | - |
| **Day 46** | **Q91** | Remove all vowels from a string. | <code>education</code> | <code>dctn</code> | - |
| **Day 46** | **Q92** | Find the first repeating lowercase alphabet in a string. | <code>stress</code> | <code>s</code> | - |
| **Day 47** | **Q93** | Check if two strings are anagrams of each other. | <b>Case 1:</b> <code>listen<br>silent</code><br><b>Case 2:</b> <code>hello<br>world</code> | <b>Case 1:</b> <code>Anagrams</code><br><b>Case 2:</b> <code>Not anagrams</code> | - |
| **Day 47** | **Q94** | Find the longest word in a sentence. | <code>I love programming</code> | <code>programming</code> | - |
| **Day 48** | **Q95** | Check if one string is a rotation of another. | <b>Case 1:</b> <code>abcde<br>deabc</code><br><b>Case 2:</b> <code>abc<br>acb</code> | <b>Case 1:</b> <code>Rotation</code><br><b>Case 2:</b> <code>Not rotation</code> | - |
| **Day 48** | **Q96** | Reverse each word in a sentence without changing the word order. | <code>I love coding</code> | <code>I evol gnidoc</code> | - |
| **Day 49** | **Q97** | Print the initials of a name. | <code>John Doe</code> | <code>J.D.</code> | - |
| **Day 49** | **Q98** | Print initials of a name with the surname displayed in full. | <code>John David Doe</code> | <code>J.D. Doe</code> | - |
| **Day 50** | **Q99** | Change the date format from dd/04/yyyy to dd-Apr-yyyy. | <code>15/04/2025</code> | <code>15-Apr-2025</code> | - |
| **Day 50** | **Q100** | Print all sub-strings of a string. | <code>abc</code> | <code>a,ab,abc,b,bc,c</code> | - |

</details>

---

<a id="logic-enhancers"></a>
## 💡 Logic Enhancers (Q101 – Q119) — Days 51 – 69

<details >
<summary><b>Click to expand/collapse Logic Enhancers (Q101 – Q119 | Days 51 – 69)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 51** | **Q101** | Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present. | <b>Case 1:</b> <code>nums = [5,7,7,8,8,10], target = 8</code><br><b>Case 2:</b> <code>nums = [5,7,7,8,8,10], target = 6</code><br><b>Case 3:</b> <code>nums = [5,7,7,8,8,10], target = 10</code> | <b>Case 1:</b> <code>3,4</code><br><b>Case 2:</b> <code>-1,-1</code><br><b>Case 3:</b> <code>5,5</code> | 📌 **Note:** Follow-up(optional): Can you do it in O(log n) Time Complexity? |
| **Day 52** | **Q102** | Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. | <b>Case 1:</b> <code>arr = [1, 2, 8, 10, 11, 12, 19], x = 5</code><br><b>Case 2:</b> <code>arr = [1, 2, 8, 10, 11, 12, 19], x = 20</code><br><b>Case 3:</b> <code>arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0</code><br><b>Case 4:</b> <code>arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2</code> | <b>Case 1:</b> <code>2</code><br><b>Case 2:</b> <code>-1</code><br><b>Case 3:</b> <code>0</code><br><b>Case 4:</b> <code>2</code> | 📌 **Note:** Follow-up(optional): Can you do it in O(log n) Time Complexity?<br><b>Case 1 Expl:</b> Smallest number greater than 5 is 8, whose index is 2.<br><b>Case 2 Expl:</b> No element greater than 20 is found. So output is -1.<br><b>Case 3 Expl:</b> Smallest number greater than 0 is 1, whose indices are 0 and 1. The index of the first occurrence is 0.<br><b>Case 4 Expl:</b> If x is directly present, return the index of its first occurrence. |
| **Day 53** | **Q103** | Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1. | <b>Case 1:</b> <code>nums = [1,7,3,6,5,6]</code><br><b>Case 2:</b> <code>nums = [1,2,3]</code><br><b>Case 3:</b> <code>nums = [2,1,-1]</code> | <b>Case 1:</b> <code>3</code><br><b>Case 2:</b> <code>-1</code><br><b>Case 3:</b> <code>0</code> | 📌 **Note:** Follow-up(optional): Try to solve this in O(n) TC<br><b>Case 1 Expl:</b> The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.<br><b>Case 2 Expl:</b> There is no index that satisfies the conditions in the problem statement.<br><b>Case 3 Expl:</b> The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0. |
| **Day 54** | **Q104** | Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input. | <b>Case 1:</b> <code>n = 8</code><br><b>Case 2:</b> <code>n = 1</code><br><b>Case 3:</b> <code>n = 4</code> | <b>Case 1:</b> <code>6</code><br><b>Case 2:</b> <code>1</code><br><b>Case 3:</b> <code>-1</code> | 📌 **Note:** Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?<br><b>Case 1 Expl:</b> 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.<br><b>Case 2 Expl:</b> 1 is the pivot integer since: 1 = 1.<br><b>Case 3 Expl:</b> It can be proved that no such integer exists. |
| **Day 55** | **Q105** | Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times. | <b>Case 1:</b> <code>nums = [3,2,3]</code><br><b>Case 2:</b> <code>nums = [2,2,1,1,1,2,2]</code><br><b>Case 3:</b> <code>nums = [2,2,1,1,1,2,2,3]</code> | <b>Case 1:</b> <code>3</code><br><b>Case 2:</b> <code>2</code><br><b>Case 3:</b> <code>-1</code> | 📌 **Note:** Follow-up (optional): Can you do it in O(n) Time Complexity?<br><b>Case 1 Expl:</b> Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.<br><b>Case 2 Expl:</b> Size = 7, Count of 2 = 4 → 4 > 7/2. Thus, 2 is the majority element.<br><b>Case 3 Expl:</b> Size = 8, Count of 2 = 4 → 4 is not strictly greater than 8/2. Hence, no majority element exists. |
| **Day 56** | **Q106** | Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.<br><br>N.B:<br>- Print the output for each element in a comma separated fashion.<br>- Do not use Stack, use brute force approach (nested loop) to solve. | <b>Case 1:</b> <code>arr = [1, 3, 2, 4]</code><br><b>Case 2:</b> <code>arr = [6, 8, 0, 1, 3]</code><br><b>Case 3:</b> <code>arr = [1, 2, 3, 5]</code><br><b>Case 4:</b> <code>arr = [5, 4, 3, 1]</code> | <b>Case 1:</b> <code>3, 4, 4, -1</code><br><b>Case 2:</b> <code>8, -1, 1, 3, -1</code><br><b>Case 3:</b> <code>2, 3, 5, -1</code><br><b>Case 4:</b> <code>-1, -1, -1, -1</code> | 📌 **Note:** Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.<br><b>Case 1 Expl:</b> The next larger element to 1 is 3, for 3 it is 4, for 2 it is 4 and for 4 there is no next greater element so it is -1.<br><b>Case 2 Expl:</b> Next greater element for 6 is 8, for 8 it is -1, for 0 it is 1, for 1 it is 3 and for 3 there is no greater element on right hence -1.<br><b>Case 3 Expl:</b> In a sorted array, each element’s next greater is its immediate next element except for the last element which has none, so -1.<br><b>Case 4 Expl:</b> No element has a greater element on its right, so all next greater elements are -1. |
| **Day 57** | **Q107** | Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.<br><br>N.B:<br>- Print the output for each element in a comma separated fashion.<br>- Do not use Stack, use brute force approach (nested loop) to solve. | <b>Case 1:</b> <code>arr = [1, 3, 2, 4]</code><br><b>Case 2:</b> <code>arr = [6, 8, 0, 1, 3]</code><br><b>Case 3:</b> <code>arr = [1, 2, 3, 5]</code><br><b>Case 4:</b> <code>arr = [5, 4, 3, 1]</code> | <b>Case 1:</b> <code>-1, -1, 3, -1</code><br><b>Case 2:</b> <code>-1, -1, 8, 8, 8</code><br><b>Case 3:</b> <code>-1, -1, -1, -1</code><br><b>Case 4:</b> <code>-1, 5, 4, 3</code> | 📌 **Note:** Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution. |
| **Day 58** | **Q108** | Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. | <b>Case 1:</b> <code>nums = [1,2,3,4]</code><br><b>Case 2:</b> <code>nums = [-1,1,0,-3,3]</code> | <b>Case 1:</b> <code>[24,12,8,6]</code><br><b>Case 2:</b> <code>[0,0,9,0,0]</code> | 📌 **Note:** Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation. |
| **Day 59** | **Q109** | Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k. | <b>Case 1:</b> <code>arr[100, 200, 300, 400] = , k = 2</code><br><b>Case 2:</b> <code>arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4</code><br><b>Case 3:</b> <code>arr[100, 200, 300, 400] = , k = 1</code> | <b>Case 1:</b> <code>700</code><br><b>Case 2:</b> <code>39</code><br><b>Case 3:</b> <code>400</code> | <b>Case 1 Expl:</b> arr2 + arr3 = 700, which is maximum.<br><b>Case 2 Expl:</b> arr1 + arr2 + arr3 + arr4 = 39, which is maximum.<br><b>Case 3 Expl:</b> arr3 = 400, which is maximum. |
| **Day 60** | **Q110** | Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output. | <b>Case 1:</b> <code>arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3</code><br><b>Case 2:</b> <code>arr[5, 1, 3, 4, 2] = , k = 1</code> | <b>Case 1:</b> <code>3 3 4 5 5 5 6</code><br><b>Case 2:</b> <code>5 1 3 4 2</code> | <b>Case 1 Expl:</b> 1st contiguous subarray , max = 3; 2nd contiguous subarray , max = 3; 3rd contiguous subarray , max = 4; 4th contiguous subarray , max = 5; 5th contiguous subarray , max = 5; 6th contiguous subarray , max = 5; 7th contiguous subarray , max = 6.<br><b>Case 2 Expl:</b> When k = 1, each element in the array is its own subarray, so the output is simply the same array. |
| **Day 61** | **Q111** | Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output. | <b>Case 1:</b> <code>arr[] = [-8, 2, 3, -6, 10], k = 2</code><br><b>Case 2:</b> <code>arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3</code><br><b>Case 3:</b> <code>arr[] = [12, 1, 3, 5], k = 3</code> | <b>Case 1:</b> <code>-8 0 -6 -6</code><br><b>Case 2:</b> <code>-1 -1 -7 -15 -15 0</code><br><b>Case 3:</b> <code>0 0</code> | <b>Case 1 Expl:</b> Window [-8, 2] First negative integer is -8. Window No negative integers, output is 0. Window [3, -6] First negative integer is -6. Window [-6, 10] First negative integer is -6.<br><b>Case 2 Expl:</b> Window [12, -1, -7] First negative integer is -1. Window [-1, -7, 8] First negative integer is -1. Window [-7, 8, -15] First negative integer is -7. Window [8, -15, 30] First negative integer is -15. Window [-15, 30, 16] First negative integer is -15. Window No negative integers, output is 0.<br><b>Case 3 Expl:</b> Window No negative integers, output is 0. Window No negative integers, output is 0. |
| **Day 62** | **Q112** | Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element. | <b>Case 1:</b> <code>arr[] = [2, 3, -8, 7, -1, 2, 3]</code><br><b>Case 2:</b> <code>arr[] = [-2, -4]</code><br><b>Case 3:</b> <code>arr[] = [5, 4, 1, 7, 8]</code> | <b>Case 1:</b> <code>11</code><br><b>Case 2:</b> <code>-2</code><br><b>Case 3:</b> <code>25</code> | <b>Case 1 Expl:</b> The subarray [7, -1, 2, 3] has the largest sum 11.<br><b>Case 2 Expl:</b> The subarray [-2] has the largest sum -2.<br><b>Case 3 Expl:</b> The subarray has the largest sum 25. |
| **Day 63** | **Q113** | Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output. | <b>Case 1:</b> <code>arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4</code><br><b>Case 2:</b> <code>arr[] = [7, 10, 4, 3, 20, 15], k = 3</code> | <b>Case 1:</b> <code>5</code><br><b>Case 2:</b> <code>7</code> | <b>Case 1 Expl:</b> 4th smallest element in the given array is 5.<br><b>Case 2 Expl:</b> 3rd smallest element in the given array is 7. |
| **Day 64** | **Q114** | Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output. | <b>Case 1:</b> <code>s = "abcabcbb"</code><br><b>Case 2:</b> <code>s = "bbbbb"</code><br><b>Case 3:</b> <code>s = "pwwkew"</code> | <b>Case 1:</b> <code>3</code><br><b>Case 2:</b> <code>1</code><br><b>Case 3:</b> <code>3</code> | <b>Case 1 Expl:</b> The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.<br><b>Case 2 Expl:</b> The answer is "b", with the length of 1.<br><b>Case 3 Expl:</b> The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring. |
| **Day 65** | **Q115** | Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". | <b>Case 1:</b> <code>s = "anagram", t = "nagaram"</code><br><b>Case 2:</b> <code>s = "rat", t = "car"</code> | <b>Case 1:</b> <code>Anagram</code><br><b>Case 2:</b> <code>Not Anagram</code> | <b>Case 1 Expl:</b> The strings contain the same characters with the same frequencies.<br><b>Case 2 Expl:</b> The strings do not contain the same characters. |
| **Day 66** | **Q116** | Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1". | <b>Case 1:</b> <code>nums = [2,7,11,15], target = 9</code><br><b>Case 2:</b> <code>nums = [3,2,4], target = 6</code><br><b>Case 3:</b> <code>nums = [3,3], target = 6</code> | <b>Case 1:</b> <code>0 1</code><br><b>Case 2:</b> <code>1 2</code><br><b>Case 3:</b> <code>0 1</code> | <b>Case 1 Expl:</b> Because nums[0] + nums[1] == 9, we return [0, 1]. |
| **Day 67** | **Q117** | Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array. | <b>Case 1:</b> <code>nums1 = [2,7,11,15] nums2 = [4,8,10]</code><br><b>Case 2:</b> <code>nums1 = [1,2,7] nums2 = [9,10,17]</code><br><b>Case 3:</b> <code>nums1 = [-10,-2,7] nums2 = [-3, -1, 7]</code> | <b>Case 1:</b> <code>2 4 7 8 10 11 15</code><br><b>Case 2:</b> <code>1 2 7 9 10 17</code><br><b>Case 3:</b> <code>-10 -3 -2 -1 7 7</code> | - |
| **Day 68** | **Q118** | Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number | <b>Case 1:</b> <code>nums1 = [0,3,2,4]</code><br><b>Case 2:</b> <code>nums1 = [1,2,3]</code><br><b>Case 3:</b> <code>nums1 = [0,4,3,1,5]</code> | <b>Case 1:</b> <code>1</code><br><b>Case 2:</b> <code>0</code><br><b>Case 3:</b> <code>2</code> | - |
| **Day 69** | **Q119** | Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration. | <b>Case 1:</b> <code>nums1 = [1,3,3,4]</code><br><b>Case 2:</b> <code>nums1 = [1,2,2]</code><br><b>Case 3:</b> <code>nums1 = [0,4,1,1,5]</code> | <b>Case 1:</b> <code>3</code><br><b>Case 2:</b> <code>2</code><br><b>Case 3:</b> <code>1</code> | - |

</details>

---

<a id="file-handling"></a>
## 📁 File Handling (Q120 – Q130) — Days 70 – 80

<details >
<summary><b>Click to expand/collapse File Handling (Q120 – Q130 | Days 70 – 80)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 70** | **Q120** | Write a program to take a string input. Change it to sentence case. | <b>Case 1:</b> <code>str = I am trying to build logic.</code><br><b>Case 2:</b> <code>str = The classes are supposed to start early.</code><br><b>Case 3:</b> <code>str = We are going to look at 26 different test cases.</code> | <b>Case 1:</b> <code>I Am Trying To Build Logic</code><br><b>Case 2:</b> <code>The Classes Are Supposed To Start Early.</code><br><b>Case 3:</b> <code>We Are Going To Look At 26 Different Test Cases.</code> | - |
| **Day 71** | **Q121** | Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved. | <code>Name: Rahul, Age: 23</code> | <code>File created successfully! Data written to info.txt</code> | **Explanation:** Expected File Content (info.txt): Name: Rahul Age: 23 |
| **Day 72** | **Q122** | Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached. | <code>File: info.txt (Content: Name: Rahul\nAge: 23)</code> | <code>Name: Rahul<br>Age: 23</code> | **Explanation:** The program reads each line from info.txt using fgets() and prints it until EOF. |
| **Day 73** | **Q123** | Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines. | <code>File: sample.txt (Content: Hello world\nThis is C programming)</code> | <code>Characters: 31<br>Words: 5<br>Lines: 2</code> | **Explanation:** The file has 31 characters including spaces and newlines, 5 words, and 2 lines. |
| **Day 74** | **Q124** | Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc(). | <code>Source File: source.txt (Content: Learning C File Handling)</code> | <code>File copied successfully to destination.txt</code> | **Explanation:** Expected File (destination.txt): Learning C File Handling |
| **Day 75** | **Q125** | Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content. | <code>Existing File: data.txt (Content before execution: Hello world)<br>User Input: This is appended text.</code> | <code>File updated successfully with appended text.</code> | **Explanation:** Output File (data.txt after execution): Hello world\nThis is appended text. |
| **Day 76** | **Q126** | Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content. | <b>Case 1:</b> <code>Filename: sample.txt (File Exists: Yes)</code><br><b>Case 2:</b> <code>Filename: nofile.txt (File Exists: No)</code> | <b>Case 1:</b> <code>File opened successfully.<br>(Displays file content)</code><br><b>Case 2:</b> <code>Error: File does not exist!</code> | <b>Case 1 Expl:</b> The program opens the existing file and prints its content using fgets().<br><b>Case 2 Expl:</b> Since fopen() returns NULL, an error message is displayed instead of reading. |
| **Day 77** | **Q127** | Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt. | <code>Input File (input.txt): Hello World\nC programming</code> | <code>Output File (output.txt): HELLO WORLD\nC PROGRAMMING</code> | **Explanation:** All lowercase letters in input.txt are converted to uppercase using character manipulation before writing to output.txt. |
| **Day 78** | **Q128** | Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters. | <code>File: text.txt (Content: Welcome to C language)</code> | <code>Vowels: 8<br>Consonants: 10</code> | **Explanation:** The program iterates through each character, counts vowels (A, E, I, O, U) and consonants, ignoring other symbols. |
| **Day 79** | **Q129** | A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both. | <code>File: numbers.txt (Content: 10 20 30 40 50)</code> | <code>Sum = 150<br>Average = 30.00</code> | **Explanation:** The program reads integers from the file, computes their total sum (150), and calculates the average (30.00). |
| **Day 80** | **Q130** | Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record. | <code>Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92</code> | <code>Name: Asha \| Roll: 101 \| Marks: 85<br>Name: Ravi \| Roll: 102 \| Marks: 92</code> | **Explanation:** Expected File Content (students.txt): Asha 101 85\nRavi 102 92 |

</details>

---

<a id="enum"></a>
## 🧱 Enum (Q131 – Q150) (Days 81 – 100)

<a id="enum-part-1-basics"></a>
### 🧱 Enum (Part 1: Basics) (Q131 – Q140) — Days 81 – 90

<details open>
<summary><b>Click to expand/collapse Enum (Part 1: Basics) (Q131 – Q140 | Days 81 – 90)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 81** | **Q131** | Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. | <code>No input</code> | <code>SUNDAY = 0<br>MONDAY = 1<br>TUESDAY = 2<br>WEDNESDAY = 3<br>THURSDAY = 4<br>FRIDAY = 5<br>SATURDAY = 6</code> | **Explanation:** Each day in the enum is automatically assigned an integer starting from 0. |
| **Day 82** | **Q132** | Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. | <code>GREEN</code> | <code>Go</code> | **Explanation:** When the enum value is GREEN, the program prints 'Go'. |
| **Day 83** | **Q133** | Create an enum for months and print how many days each month has. | <code>FEB</code> | <code>28 or 29 days</code> | **Explanation:** February has 28 days in a normal year and 29 in a leap year. |
| **Day 84** | **Q134** | Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. | <code>FAILURE</code> | <code>Operation failed</code> | **Explanation:** FAILURE corresponds to a failed operation message. |
| **Day 85** | **Q135** | Assign explicit values starting from 10 and print them. | <code>No input</code> | <code>A=10<br>B=11<br>C=12</code> | **Explanation:** Enum values can be explicitly assigned; subsequent values auto-increment. |
| **Day 86** | **Q136** | Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. | <code>ADD 10 20</code> | <code>30</code> | **Explanation:** The enum ADD triggers addition of 10 and 20. |
| **Day 87** | **Q137** | Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. | <code>GUEST</code> | <code>Welcome Guest!</code> | **Explanation:** Enum value determines which message is displayed. |
| **Day 88** | **Q138** | Print all enum names and integer values using a loop. | <code>No input</code> | <code>RED=0<br>YELLOW=1<br>GREEN=2</code> | **Explanation:** Iterating through enum values prints each constant with its assigned integer. |
| **Day 89** | **Q139** | Show that enums store integers by printing assigned values. | <code>No input</code> | <code>SUCCESS=0, FAILURE=1, TIMEOUT=2</code> | **Explanation:** Enum constants are internally stored as integer values starting from 0. |
| **Day 90** | **Q140** | Define a struct with enum Gender and print person's gender. | <code>Gender=MALE</code> | <code>Male</code> | **Explanation:** The enum inside the struct allows representing gender as a named constant. |

</details>

---

<a id="enum-part-2-structs-files-pointers"></a>
### 🧱 Enum (Part 2: Structs, Files & Pointers) (Q141 – Q150) — Days 91 – 100

<details open>
<summary><b>Click to expand/collapse Enum (Part 2: Structs, Files & Pointers) (Q141 – Q150 | Days 91 – 100)</b></summary>

| Day | ID | Problem Statement | Sample Input | Sample Output | Notes / Details |
|:---:|:---:|:---|:---|:---|:---|
| **Day 91** | **Q141** | Define a structure Student with name, roll_no, and marks, then read and print one student's data. | <code>Name: Asha<br>Roll: 101<br>Marks: 90</code> | <code>Name: Asha \| Roll: 101 \| Marks: 90</code> | **Explanation:** The program stores and displays one student's details using structure members. |
| **Day 92** | **Q142** | Store details of 5 students in an array of structures and print all. | <code>Details of 5 students (Name, Roll, Marks)</code> | <code>Tabular list of all 5 students with their details</code> | **Explanation:** The array of structures stores multiple student records and displays them in a table. |
| **Day 93** | **Q143** | Find and print the student with the highest marks. | <code>3 students: Ravi 101 95, Sita 102 85, Aman 103 88</code> | <code>Topper: Ravi (Marks: 95)</code> | **Explanation:** Program compares marks of all students and prints the one with the highest. |
| **Day 94** | **Q144** | Write a function that accepts a structure as parameter and prints its members. | <code>Student: Neha 104 92</code> | <code>Name: Neha \| Roll: 104 \| Marks: 92</code> | **Explanation:** The structure is passed by value to a function that prints its data. |
| **Day 95** | **Q145** | Return a structure containing top student's details from a function. | <code>3 students: Riya 101 89, Karan 102 96, Meena 103 92</code> | <code>Top Student: Karan \| Roll: 102 \| Marks: 96</code> | **Explanation:** The function returns the structure containing the highest scoring student's details. |
| **Day 96** | **Q146** | Create Employee structure with nested Date structure for joining date and print details. | <code>Employee: Raj \| ID: 11 \| Joining Date: 12 05 2020</code> | <code>Name: Raj \| ID: 11 \| Joining Date: 12/05/2020</code> | **Explanation:** Nested structure Date is used inside Employee structure to represent joining date. |
| **Day 97** | **Q147** | Store employee data in a binary file using fwrite() and read using fread(). | <code>Employee details entered and stored in file.</code> | <code>Displays employee data read from file.</code> | **Explanation:** Demonstrates writing and reading structures using binary file handling functions. |
| **Day 98** | **Q148** | Take two structs as input and check if they are identical. | <code>Student1: Asha 101 90<br>Student2: Asha 101 90</code> | <code>Same</code> | **Explanation:** Compares all structure members and prints 'Same' if identical. |
| **Day 99** | **Q149** | Use malloc() to allocate structure memory dynamically and print details. | <code>Student allocated dynamically with details: Tina 105 88</code> | <code>Name: Tina \| Roll: 105 \| Marks: 88</code> | **Explanation:** Memory for structure is dynamically allocated on heap using malloc(). |
| **Day 100** | **Q150** | Use pointer to struct to modify and display data using -> operator. | <code>Student pointer modifying values: John 106 91</code> | <code>Modified Data: Name: John \| Roll: 106 \| Marks: 91</code> | **Explanation:** Pointer to structure accesses and modifies data using the arrow (->) operator. |

</details>


