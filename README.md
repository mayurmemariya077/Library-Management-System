# Library-Management-System

# 📚 Library Management System (C++)

A **Library Management System** developed in **C++** using **Object-Oriented Programming (OOP)** concepts. This console-based application helps manage different library items such as **Books, DVDs, and Magazines**. It demonstrates key OOP principles including **Abstraction, Encapsulation, Inheritance, Polymorphism, Dynamic Memory Allocation, and Exception Handling**.

---

# 🚀 Project Features

✨ **Display All Library Items**
View complete details of all books, DVDs, and magazines available in the library.

🔍 **Search Library Item**
Search any library item using its title.

📖 **Check Out Item**
Issue a library item if it is currently available.

📥 **Return Item**
Return an issued library item back to the library.

⚠️ **Exception Handling**

* Invalid ISBN validation
* Invalid DVD duration validation
* Invalid magazine issue number validation

🗑️ **Dynamic Memory Management**

* Objects are created using `new`
* Memory is released using `delete`

---

# 🏗️ Object-Oriented Programming Concepts Used

* 📌 Classes & Objects
* 🔒 Encapsulation
* 🧬 Inheritance
* 🎭 Runtime Polymorphism
* 📝 Abstract Class
* ⚡ Pure Virtual Functions
* 💾 Dynamic Memory Allocation
* 🚨 Exception Handling
* 🧹 Destructor

---

# 📂 Class Structure

## 📚 LibraryItem (Abstract Base Class)

### Data Members

* 📖 Title
* ✍️ Author
* 📅 Due Date
* ✅ Issued Status

### Pure Virtual Functions

* `checkOut()`
* `returnItem()`
* `displayDetails()`

---

## 📖 Book

### Additional Data Member

* 🔢 ISBN Number

### Functions

* Check Out Book
* Return Book
* Display Book Details

---

## 🎬 DVD

### Additional Data Member

* ⏱️ Duration (Minutes)

### Functions

* Check Out DVD
* Return DVD
* Display DVD Details

---

## 📰 Magazine

### Additional Data Member

* 🗞️ Issue Number

### Functions

* Check Out Magazine
* Return Magazine
* Display Magazine Details

---

# 📋 Menu Options

```text
====================================
     LIBRARY MANAGEMENT SYSTEM
====================================
1. Display All Items
2. Search Item
3. Check Out Item
4. Return Item
5. Exit
```

---

# 📚 Sample Library Items

| Type        | Title            | Author            |
| ----------- | ---------------- | ----------------- |
| 📖 Book     | C++ Programming  | Bjarne Stroustrup |
| 🎬 DVD      | Avengers Endgame | Marvel Studios    |
| 📰 Magazine | Science Today    | National Science  |

---

# 🛠️ Technologies Used

* 💻 C++
* 📚 Object-Oriented Programming (OOP)
* ⚠️ Exception Handling
* 🧠 Dynamic Memory Allocation
* 🖥️ Console Application

---

# ▶️ How to Compile

```bash
g++ library.cpp -o library
```

# ▶️ Run

### Linux / macOS

```bash
./library
```

### Windows

```bash
library.exe
```

---

# 🎯 Learning Outcomes

After completing this project, you will understand:

* ✅ Abstract Classes
* ✅ Pure Virtual Functions
* ✅ Runtime Polymorphism
* ✅ Inheritance
* ✅ Encapsulation
* ✅ Constructors & Destructors
* ✅ Dynamic Memory Allocation
* ✅ Exception Handling
* ✅ Console-based Menu Driven Programs

---

# 📁 Project Structure

```text
Library-Management-System/
│
├── library.cpp
├── README.md
```

---

# 👨‍💻 Author

**Mayur Memariya**

🎓 C++ Object-Oriented Programming Project

---

# ⭐ Conclusion

This **Library Management System** is a beginner-friendly yet comprehensive C++ project that demonstrates the practical implementation of **Object-Oriented Programming** concepts. It provides a simple and efficient way to manage library resources while improving understanding of abstraction, inheritance, polymorphism, dynamic memory allocation, and exception handling.

⭐ **If you found this project helpful, don't forget to give it a star!** 🌟
