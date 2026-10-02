# Industrial Programming Lab

## About

This repository documents my structured learning journey through the **Logic Building with Industrial Project Development** programming batch. It serves as an industrial-oriented repository focused on writing clean, rigorous, and production-grade code across foundational programming paradigms, systems programming, and modern software design.

## Learning Philosophy

The repository reflects an evolutionary approach to software mastery:

$$\text{Concept} \longrightarrow \text{Implementation} \longrightarrow \text{Practice} \longrightarrow \text{Design} \longrightarrow \text{Industrial Application}$$

1. **Concept**: Deeply understand core language mechanics, memory layouts, and algorithmic principles.
2. **Implementation**: Build structures and logic from scratch without taking shortcuts.
3. **Practice**: Solve concrete exercises demonstrating specific concepts thoroughly.
4. **Design**: Transition from procedural constructs to clean Object-Oriented Design and SOLID principles.
5. **Industrial Application**: Connect foundational programming to real-world system architecture, networking, concurrency, and low-level system design.

---

## Repository Structure

The repository is organized conceptually into 16 core learning modules:

```text
industrial-programming-lab/
├── 01-logic-building/                    # Decision making, loops, validation, mathematical logic
├── 02-arrays-and-matrices/               # Array operations, traversals, matrix manipulation
├── 03-strings/                           # Character arrays, string algorithms, parsing, tokenization
├── 04-bit-manipulation/                  # Bitwise operations, bit masks, binary arithmetic
├── 05-memory-management/                 # Pointers, dynamic memory allocation (malloc/free), layouts
├── 06-structures-and-generic-programming/# Structures, unions, function pointers, C++ templates
├── 07-recursion/                         # Recursive algorithms, base-case foundations, backtracking
├── 08-data-structure-implementation/     # Linked lists, stacks, queues, trees, custom data structures
├── 09-searching-and-sorting/             # Linear/binary search, sorting algorithm implementations
├── 10-core-java/                         # Classes, constructors, access control, exceptions, I/O
├── 11-java-collections/                  # List, Set, Map hierarchies, iterators, generics, comparators
├── 12-file-and-system-programming/       # File streams, binary files, system calls, virtual file systems
├── 13-network-programming/               # Socket programming, TCP/UDP client-server architectures
├── 14-multithreading/                    # Threads, synchronization, locks, concurrency, executors
├── 15-object-oriented-design/            # OOP principles, SOLID guidelines, class responsibilities
├── 16-design-patterns-and-lld/           # Creational/Structural/Behavioral patterns, Low-Level Design
├── daily-inbox/                          # Temporary staging area for newly written programs
├── .gitignore
├── PROGRESS.md                           # Real-time learning progress tracker
├── README.md                             # Repository overview and documentation
└── ROADMAP.md                            # Sequential 16-phase learning roadmap
```

---

## Technology Coverage

- **Languages**: C, C++, Java
- **Core Subject Areas**:
  - Programming Fundamentals & Algorithmic Logic
  - Low-Level Memory Management & Pointer Arithmetic
  - Data Structure Implementation & Algorithmic Foundations
  - Core Java & Java Collections Framework
  - File I/O & Operating System Interactions
  - Network Programming & Client-Server Architectures
  - Multithreading, Concurrency & Synchronization
  - Object-Oriented Design (OOD) & SOLID Principles
  - Design Patterns & Low-Level Design (LLD)

---

## Daily Workflow

To maintain absolute focus on learning and coding, a staging-area workflow is used:

1. **Code Manually**: Write and test programs locally.
2. **Save in Daily Inbox**: Drop newly coded files into `daily-inbox/` (e.g., `Program1.c`, `Program2.java`).
3. **Trigger Organization**: Request Antigravity to *"Organize today's programs."*
4. **Analysis & Classification**: Antigravity analyzes program intent and maps it to the primary conceptual module.
5. **Standardized Renaming & Moving**: Files are renamed using a consistent format (`NN-descriptive-name.ext`), appropriate language subdirectories are created on-demand, and files are moved into place.
6. **Progress Tracking**: `PROGRESS.md` is updated to reflect actual completed programs.
7. **Commit & Push**: Changes are committed using Conventional Commits (`feat(...)`, `docs(...)`) and synchronized.

---

## Projects

Full industrial projects are maintained in dedicated, independent repositories rather than inside this learning repository. As projects are developed, references and links will be documented here.

Potential batch projects include:
- **Custom Virtual File System (CVFS)**
- **Parking Lot Automation System**
- **Study Tracker**
- **Agrihort Connect**

*(Project links will be added as independent repositories are created).*

---

## Repository Boundaries & Relationships

To avoid duplication across workspaces, clear boundaries are maintained between repositories:

- **`industrial-programming-lab` (This Repository)**: Documents the structured, industrial-oriented curriculum of the *Logic Building with Industrial Project Development* batch—emphasizing deep implementation, systems programming, Java ecosystem, and OOD/LLD.
- **`Conceptual_Programs`**: Dedicated to general language practice, fundamental syntax exploration, and foundational conceptual exercises in C, C++, and Java.
- **`DSA`**: Dedicated to interview-oriented data structures and algorithms, competitive programming, and platform problem solving (LeetCode, GeeksForGeeks, InterviewBit).
