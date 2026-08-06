<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0f2027,50:203a43,100:2c5364&height=200&section=header&text=Caesar%20Cipher%20CLI&fontSize=48&fontColor=ffffff&animation=fadeIn&fontAlignY=38&desc=A%20Classic%20Cipher%2C%20Implemented%20in%20Modern%20C%2B%2B&descAlignY=58&descSize=18" width="100%"/>

<a href="https://github.com/h-hibaaah/CaesarCipherCLI">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&duration=2500&pause=1000&color=2C5364&center=true&vCenter=true&width=600&lines=Encrypt+and+Decrypt+Text+in+Seconds;Built+with+Object-Oriented+C%2B%2B;Clean+Multi-File+Project+Architecture;File+Handling+%7C+Menu-Driven+%7C+Validated" alt="Typing SVG" />
</a>

<br/>

[![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Cross--Platform-2C5364?style=for-the-badge&logo=gnu&logoColor=white)](#)
[![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](./LICENSE)
[![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)](#)
[![PRs Welcome](https://img.shields.io/badge/PRs-Welcome-ff69b4?style=for-the-badge)](#contributing)

<br/>

[![GitHub stars](https://img.shields.io/github/stars/h-hibaaah/CaesarCipherCLI?style=social)](https://github.com/h-hibaaah/CaesarCipherCLI/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/h-hibaaah/CaesarCipherCLI?style=social)](https://github.com/h-hibaaah/CaesarCipherCLI/network/members)
[![GitHub issues](https://img.shields.io/github/issues/h-hibaaah/CaesarCipherCLI?style=social)](https://github.com/h-hibaaah/CaesarCipherCLI/issues)

</div>

<br/>

<div align="center">
<img src="https://skillicons.dev/icons?i=cpp,git,github,vim,vscode&theme=dark" />
</div>

<br/>

<div align="center">
  <em>A command-line encryption tool built in C++ that implements the classic Caesar Cipher — engineered with clean Object-Oriented design, robust file handling, and a polished menu-driven interface.</em>
</div>

<br/>

<div align="center">
<img src="https://capsule-render.vercel.app/api?type=rect&color=0:0f2027,100:2c5364&height=3&width=1000" width="100%"/>
</div>

## Table of Contents

<table>
<tr>
<td width="50%" valign="top">

- [Overview](#overview)
- [Features](#features)
- [Technology Stack](#technology-stack)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)

</td>
<td width="50%" valign="top">

- [How It Works](#how-it-works)
- [Example Walkthrough](#example-walkthrough)
- [Concepts Demonstrated](#concepts-demonstrated)
- [Roadmap](#roadmap)
- [Author](#author)

</td>
</tr>
</table>

<div align="center">
<img src="https://capsule-render.vercel.app/api?type=rect&color=0:0f2027,100:2c5364&height=3&width=1000" width="100%"/>
</div>

## Overview

**Caesar Cipher CLI** is a lightweight, dependency-free C++ application for encrypting and decrypting text using the **Caesar Cipher** algorithm — one of the oldest and most well-known encryption techniques in cryptographic history.

The project is designed with production-style code organization in mind: separated headers and source files, dedicated classes for encryption and decryption logic, isolated I/O handling, and strict input validation — making it an excellent reference for anyone learning C++ project architecture.

<br/>

## Features

<table>
<tr>
<td width="33%" valign="top">

### Core Cryptography
- Caesar Cipher encryption engine
- Symmetric decryption using the same shift key
- Full alphabet wrap-around handling

</td>
<td width="33%" valign="top">

### File Handling
- Reads plaintext from `data/input.txt`
- Writes ciphertext to `data/encrypted.txt`
- Writes decrypted output to `data/decrypted.txt`

</td>
<td width="33%" valign="top">

### User Experience
- Clean, menu-driven CLI interface
- Input validation on menu choices and shift keys
- Modular, multi-file project layout

</td>
</tr>
</table>

<br/>

## Technology Stack

<div align="center">

| Technology | Purpose |
|:--:|:--|
| ![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white) | Core application logic |
| ![OOP](https://img.shields.io/badge/OOP-Design-blue?style=flat-square) | Encryption/decryption modeled as classes |
| ![Files](https://img.shields.io/badge/File%20I%2FO-fstream-orange?style=flat-square) | Reading and writing cipher data |
| ![Git](https://img.shields.io/badge/Git-F05032?style=flat-square&logo=git&logoColor=white) | Version control |
| ![GitHub](https://img.shields.io/badge/GitHub-181717?style=flat-square&logo=github&logoColor=white) | Hosting and collaboration |

</div>

<br/>

## Project Structure

```
CaesarCipherCLI/
│
├── include/
│   ├── encryption.h        # Encryption class declaration
│   ├── decryption.h        # Decryption class declaration
│   └── menu.h               # Menu / CLI interface declaration
│
├── src/
│   ├── encryption.cpp       # Encryption logic implementation
│   ├── decryption.cpp       # Decryption logic implementation
│   ├── menu.cpp              # Menu-driven interface implementation
│   └── main.cpp               # Application entry point
│
├── data/
│   ├── input.txt             # Source plaintext
│   ├── encrypted.txt         # Generated ciphertext
│   └── decrypted.txt         # Recovered plaintext
│
├── .gitignore
├── LICENSE
└── README.md
```

<br/>

### Class Architecture

<div align="center">

```mermaid
classDiagram
    class Menu {
        +displayMenu()
        +getUserChoice() int
        +run()
    }
    class Encryption {
        -int shiftKey
        +Encryption(shift int)
        +encryptText(text string) string
        +readInput(path string) string
        +writeOutput(path string, data string)
    }
    class Decryption {
        -int shiftKey
        +Decryption(shift int)
        +decryptText(text string) string
        +readInput(path string) string
        +writeOutput(path string, data string)
    }
    Menu --> Encryption : invokes
    Menu --> Decryption : invokes
```

</div>

<br/>

## Getting Started

### Prerequisites

<div align="center">

![g++](https://img.shields.io/badge/g%2B%2B-Compiler-blue?style=flat-square) ![C++17](https://img.shields.io/badge/Standard-C%2B%2B17-orange?style=flat-square)

</div>

### Compilation

```bash
g++ src/main.cpp src/menu.cpp src/encryption.cpp src/decryption.cpp -Iinclude -o CaesarCipher.exe
```

### Run

<table>
<tr>
<td><b>Linux / macOS</b></td>
<td>

```bash
./CaesarCipher.exe
```

</td>
</tr>
<tr>
<td><b>Windows</b></td>
<td>

```bash
CaesarCipher.exe
```

</td>
</tr>
</table>

<br/>

### Live Demo Preview

<div align="center">

<a href="https://github.com/h-hibaaah/CaesarCipherCLI">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=16&duration=1800&pause=900&color=6BE39A&background=0D1117&center=true&vCenter=true&multiline=true&width=560&height=180&lines=%24+.%2FCaesarCipher.exe;%3D%3D%3D+Caesar+Cipher+CLI+%3D%3D%3D;1.+Encrypt++2.+Decrypt++3.+Exit;Enter+choice%3A+1;Enter+shift+value%3A+3;Reading+data%2Finput.txt+...;Encryption+complete+-+saved+to+encrypted.txt" alt="Terminal Demo" />
</a>

</div>

<div align="center">
<img src="https://capsule-render.vercel.app/api?type=rect&color=0:0f2027,100:2c5364&height=3&width=1000" width="100%"/>
</div>

## How It Works

<div align="center">

```mermaid
flowchart LR
    A[Start] --> B{Select Mode}
    B -->|Encrypt| C[Read data/input.txt]
    B -->|Decrypt| D[Read data/encrypted.txt]
    C --> E[Enter Shift Value]
    D --> E
    E --> F[Apply Caesar Cipher]
    F --> G[Write Output File]
    G --> H[Exit or Repeat]
```

</div>

1. Launch the application and choose an option from the menu — **Encrypt**, **Decrypt**, or **Exit**.
2. Enter a numeric shift value to define the cipher key.
3. The program reads source text from `data/input.txt`.
4. Encrypted output is written to `data/encrypted.txt`.
5. Decrypted output is written to `data/decrypted.txt`.

<br/>

## Example Walkthrough

<div align="center">

<table>
<tr>
<th>Stage</th>
<th>Value</th>
</tr>
<tr>
<td><b>Input</b></td>
<td><code>Hello World</code></td>
</tr>
<tr>
<td><b>Shift Key</b></td>
<td><code>3</code></td>
</tr>
<tr>
<td><b>Encrypted Output</b></td>
<td><code>Khoor Zruog</code></td>
</tr>
<tr>
<td><b>Decrypted Output</b></td>
<td><code>Hello World</code></td>
</tr>
</table>

</div>

<div align="center">
<img src="https://capsule-render.vercel.app/api?type=rect&color=0:0f2027,100:2c5364&height=3&width=1000" width="100%"/>
</div>

## Concepts Demonstrated

<div align="center">

![Classes](https://img.shields.io/badge/-Classes%20%26%20Objects-2C5364?style=flat-square)
![Headers](https://img.shields.io/badge/-Header%2FSource%20Separation-2C5364?style=flat-square)
![Files](https://img.shields.io/badge/-File%20Handling-2C5364?style=flat-square)
![Strings](https://img.shields.io/badge/-String%20Manipulation-2C5364?style=flat-square)
![Menu](https://img.shields.io/badge/-Menu--Driven%20Design-2C5364?style=flat-square)
![Validation](https://img.shields.io/badge/-Input%20Validation-2C5364?style=flat-square)
![Cipher](https://img.shields.io/badge/-Caesar%20Cipher%20Algorithm-2C5364?style=flat-square)

</div>

<br/>

## Roadmap

<details>
<summary><b>Click to expand planned improvements</b></summary>
<br/>

- [ ] Encrypt custom user input directly from the terminal
- [ ] Generate random shift keys automatically
- [ ] Support additional cipher algorithms (Vigenère, ROT13, etc.)
- [ ] Maintain a persistent encryption/decryption history log
- [ ] Enhance the console UI with color output and formatting

</details>

<div align="center">
<img src="https://capsule-render.vercel.app/api?type=rect&color=0:0f2027,100:2c5364&height=3&width=1000" width="100%"/>
</div>

## Contributing

<div align="center">

<img src="https://img.shields.io/badge/Contributions-Welcome-brightgreen?style=for-the-badge&logo=git&logoColor=white" />

Pull requests are welcome. For major changes, please open an issue first to discuss what you'd like to change.

<table>
<tr>
<td align="center" width="25%">
<img src="https://img.icons8.com/fluency/48/000000/code-fork.png" width="40"/><br/><b>1. Fork</b>
</td>
<td align="center" width="25%">
<img src="https://img.icons8.com/fluency/48/000000/create-new.png" width="40"/><br/><b>2. Branch</b>
</td>
<td align="center" width="25%">
<img src="https://img.icons8.com/fluency/48/000000/code.png" width="40"/><br/><b>3. Commit</b>
</td>
<td align="center" width="25%">
<img src="https://img.icons8.com/fluency/48/000000/pull-request.png" width="40"/><br/><b>4. Pull Request</b>
</td>
</tr>
</table>

</div>

<div align="center">
<img src="https://capsule-render.vercel.app/api?type=rect&color=0:0f2027,100:2c5364&height=3&width=1000" width="100%"/>
</div>

## Author

<div align="center">

<img src="https://img.shields.io/badge/Hibba%20Hanif-BS%20Computer%20Science-2C5364?style=for-the-badge" />

<br/><br/>

**BS Computer Science Student**

[![GitHub](https://img.shields.io/badge/GitHub-h--hibaaah-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/h-hibaaah)

</div>

<br/>

---

<div align="center">

### If this project helped you, consider giving it a star

[![Star this repo](https://img.shields.io/badge/Star%20this%20repository-yellow?style=for-the-badge&logo=github)](https://github.com/h-hibaaah/CaesarCipherCLI/stargazers)

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:2c5364,50:203a43,100:0f2027&height=100&section=footer" width="100%"/>

</div>
