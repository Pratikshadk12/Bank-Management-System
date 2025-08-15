# 🏦 Bank Management System (C)

A simple **console-based C application** for managing a single bank account. Allows you to deposit money, withdraw funds, and check your balance. Perfect for beginners to learn **C programming basics**, **structures**, **functions**, and **menu-driven programs**.

---

## 🚀 Features

* ➕ **Deposit** money
* ➖ **Withdraw** money
* 💰 **Check** account balance
* 🚪 **Exit** the application

---

## 🛠️ Technologies Used

* **C Language** (GCC Compiler)
* **VS Code** (for coding and running)
* **Git & GitHub** (for version control)

---

## 📁 Folder Structure

```
bank-management-system/
│
├── src/
│   ├── bank.c               # Main C program file
│
├── README.md
└── .gitignore
```

---

## 🧩 Setup Instructions (VS Code)

### 1️⃣ Install Required Tools

* [GCC Compiler (MinGW for Windows)](https://www.mingw-w64.org/)
* [VS Code](https://code.visualstudio.com/)
* **C/C++ Extension Pack** in VS Code
* [Git](https://git-scm.com/)

---

### 2️⃣ Verify Installations

Open your terminal and run:

```bash
gcc --version
git --version
```

---

## 🖥️ How to Run the Project

### 1️⃣ Create Folder Structure

```
bank-management-system/
├── src/
```

---

### 2️⃣ Add Code

* Save the given `bank.c` file inside the `src/` folder.

---

### 3️⃣ Compile and Run

In the terminal, from the **src** folder:

```bash
gcc bank.c -o bank
./bank
```

If running from project root, specify the file path:

```bash
cd src
gcc bank.c -o bank
./bank
```

---

## ⬆️ How to Push Code to GitHub

### 1️⃣ Create a New Repository on GitHub

* Go to **GitHub → New Repository** → Name: `bank-management-system`

---

### 2️⃣ Initialize Git and Push

From your project root folder:

```bash
git init
git add .
git commit -m "Initial commit - Bank Management System"
git branch -M main
git remote add origin https://github.com/your-username/bank-management-system.git
git push -u origin main
```

---

## 📌 Future Enhancements

* 💾 Save account data to a file for persistence
* 👥 Manage multiple accounts
* 🔒 Add PIN authentication for security
* 📊 Generate transaction history

---

## 🙌 Author

Created by **Pratiksha** – 2nd Year AIML Student, Reva University
GitHub: [pratikshadk12](https://github.com/pratikshadk12)

---

## ⚠️ .gitignore Recommendation

Add a `.gitignore` file to exclude compiled files:

```
# Compiled binary
bank.exe
bank
```

---

Happy Banking! 💳✨

---
