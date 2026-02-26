## Theatre Management System (C++ OOP Project)

A console-based Theatre Management System developed using Object-Oriented Programming in C++.

This project simulates seat booking functionality for multiple theatres and demonstrates core OOP concepts such as classes, objects, encapsulation, constructors, and member functions.

## Overview

The system allows users to view available seats, book seats by selecting row and column numbers, and prevents double booking. The seat layout updates in real-time after every booking.

This project is designed as an academic mini-project for understanding OOP implementation in C++.

## Features

1. Three independent theatres

2. Dynamic seat layout using 2D arrays

3. Seat booking functionality

4. Prevention of duplicate seat booking

5. Real-time seat display

6. Clean and structured OOP design

7. OOP Concepts Used

8. Classes and Objects

9. Encapsulation

10. Constructors

11. Member Functions

12. 2D Arrays

## Theatres Configuration
|Theatre|	Rows|	Columns|
|-------|-----|--------|
|Theatre 1|	5	|6|
|Theatre 2|	4	|4|
|Theatre 3|	3	|8|

## How the System Works

- The system displays the seating layout.

- The user selects a row and column number.

- The system checks seat availability:

- If available, the seat is booked.

- If already booked, an error message is shown.

- The user can continue booking seats until exiting.

Seat Representation:

p → Booked

_ → Available

## Project Structure
`Theatre-Management-System` <br>
`│`<br>
`├── main.cpp`<br>
`└── README.md`<br><br>
How to Compile and Run
Compile
g++ main.cpp -o theatre
Run (macOS / Linux)
./theatre
Run (Windows)
theatre.exe
## Sample Output
`  --- Theatre 1 ---`<br>
`    1  2  3  4  5  6`<br>
`1   _  _  _  _  _  _`<br>
`2   _  _  _  _  _  _`<br>
`3   _  _  _  _  _  _`<br>
`4   _  _  _  _  _  _`<br>
`5   _  _  _  _  _  _`<br>

## Future Enhancements

Ticket pricing based on seat category

Customer name input

Ticket receipt generation

Movie selection feature

File handling for data persistence

Graphical User Interface (GUI) version

## Author

**Suyash Sachin Barad** <br>
**B.Tech Computer Science Engineering** <br>
📍 Pune, Maharashtra, India  <br>
🔗 [GitHub](https://github.com/suyashbarad) | [LinkedIn](https://www.linkedin.com/in/suyash-sachin-barad-796b6534b) | [HackerRank](https://www.hackerrank.com/profile/baradsuyash4)

---
