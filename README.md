# Industrial Programming Lab

> A structured collection of programming implementations focused on problem solving, data structures, systems programming, Java development, object-oriented design, networking, multithreading, and low-level design.

This repository serves as a focused engineering practice lab containing technical implementations developed while strengthening core computer science, systems programming, and software engineering fundamentals. The codebase is organized systematically to reflect a clear progression from foundational logic to systems-level code, concurrency, and software architecture.

---

## Technical Focus

The repository covers implementations and practice across core programming and systems domains:

- **Fundamentals & Logic**: Algorithmic decision flows, loops, number theory, and input validation
- **Linear & Structured Memory**: Arrays, matrices, string processing, and bit manipulation
- **Low-Level Mechanics**: Pointer arithmetic, manual memory lifecycle management (`malloc`/`free`), and memory segmentation
- **Data Structures**: Implementations of linked lists, stacks, queues, trees, and custom data structures
- **Algorithms**: Implementation and analysis of standard searching and sorting algorithms
- **Java Platform**: Core language mechanics, object lifecycles, exception handling, and the Java Collections Framework
- **Systems & Networking**: File I/O streams, binary serialization, and socket-based TCP/UDP client-server communication
- **Concurrency**: Thread lifecycles, synchronization primitives, race condition avoidance, and executor services
- **Software Design**: Object-oriented decomposition, SOLID principles, design patterns, and low-level system design (LLD)

---

## Languages

- **C** (Systems programming, manual memory management, data structures)
- **C++** (Generic programming, templates, object-oriented concepts)
- **Java** (Core Java, Collections framework, multithreading, networking, OOP, and LLD)

---

## Engineering Areas

### Systems Programming
- Dynamic memory allocation and pointer-level data manipulation
- File stream processing, binary file manipulation, and system-level I/O
- Foundational concepts for virtual file systems and custom storage abstractions

### Java Development
- Robust object-oriented implementations using Core Java
- Container data modeling with the Java Collections Framework
- Network programming using TCP and UDP sockets
- Multi-threaded execution, concurrency control, and synchronization

### Software Design & Architecture
- Clean separation of concerns using encapsulation, abstraction, and polymorphism
- Composition over inheritance and decoupled component interaction
- Classic design patterns (Creational, Structural, Behavioral)
- Low-level design (LLD) modeling for modular, extensible applications

---

## Repository Structure

Implementations are organized into modular, concept-specific directories:

```text
industrial-programming-lab/
├── 01-logic-building/                    # Decision-making, loops, and fundamental algorithmic logic
├── 02-arrays-and-matrices/               # Array operations, traversals, and matrix transformations
├── 03-strings/                           # Character arrays, string algorithms, and tokenization
├── 04-bit-manipulation/                  # Bitwise operations, masking, and binary representation
├── 05-memory-management/                 # Pointers, dynamic memory allocation, and memory safety
├── 06-structures-and-generic-programming/# C structures/unions, function pointers, and C++ templates
├── 07-recursion/                         # Recursive decomposition, call-stack mechanics, and backtracking
├── 08-data-structure-implementation/     # From-scratch implementations of fundamental data structures
├── 09-searching-and-sorting/             # Search algorithms, sorting techniques, and complexity analysis
├── 10-core-java/                         # Class design, constructors, interfaces, and exception handling
├── 11-java-collections/                  # Lists, sets, maps, queues, iterators, and custom comparators
├── 12-file-and-system-programming/       # File streams, binary files, and system interactions
├── 13-network-programming/               # Socket communication and client-server architectures
├── 14-multithreading/                    # Thread synchronization, locks, and concurrent coordination
├── 15-object-oriented-design/            # OOP principles, SOLID guidelines, and modular class design
└── 16-design-patterns-and-lld/           # Design patterns and low-level design implementations
```

---

## Key Implementation Areas

The repository focuses on practical, from-scratch code implementations:

- **Custom Data Structure Implementations**: Building foundational structures (singly/doubly linked lists, stacks, queues, binary trees) directly to understand node allocation, pointer management, and invariant handling.
- **Systems & Memory Control**: Exploring manual allocation, deallocation, and pointer mechanics in C to reinforce deterministic resource management.
- **Client-Server & Network Programming**: Socket-based communication handling client-server interactions and message passing.
- **Concurrent Programming**: Multi-threaded routines demonstrating mutual exclusion, coordination, and thread-safe operations.
- **Object-Oriented & Low-Level Design**: Translating functional requirements into clean class structures, applying GoF design patterns, and modeling modular domain problems.

---

## Approach

The repository follows a systematic progression:

$$\text{Fundamentals} \longrightarrow \text{Implementation} \longrightarrow \text{Data Structures} \longrightarrow \text{Systems Programming} \longrightarrow \text{Java} \longrightarrow \text{Concurrency \& Networking} \longrightarrow \text{OOP Design} \longrightarrow \text{Design Patterns \& LLD}$$

The emphasis is on writing clean, readable implementations, understanding low-level behavior, and steadily transitioning toward robust software design.

---

## Documentation & Progress

- **[Learning Roadmap](ROADMAP.md)**: Outlines the sequential 16-phase technical curriculum.
- **[Progress Tracker](PROGRESS.md)**: Tracks topic-by-topic completion and program count.

> *Note: The repository is continuously expanded as new concepts and implementations are completed.*
