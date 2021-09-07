Reverse Engineering Course
-----

This is a 3-month master degree level reverse engineering introduction course covering both theory and practice. 

For some reason, the GitHub PDF viewer does not properly visualize some of the
modules. It is recommended to download the PDFs and visualize them with your
local PDF viewer.

Modules 6, 7, and 8 are developed by [pancake](https://github.com/radare).
Module 9 is developed by [zlowram](https://github.com/zlowram), [giomismo](https://github.com/giomismo), and myself for an [r2con](https://rada.re/con/) training 2017 IIRC.


The contents of the course follow:  


1. Introduction to Memory Architecture
   1. The Basics
      1. Processors / CPUs
   2. IA-32 Memory Management
      1. Addresses
      2. Flat Memory Model
      3. Segmented Memory Model
   3. IA-32 Operation Modes
      1. Real Mode
      2. Protected Mode
   4. IA-32 Segmentation
   5. IA-32 Paging
      1. Page Address Extension (PAE)
   6. Page Address Translation Process
   7. Introduction to Memory Protection
      1. Protection Through Segmentation
      2. Protection Through Paging
      3. Reality
   8. Homework
   9. Hands-on: Kernel Debugging for Segmentation and Paging Analysis in IA32
2. Binary File Formats
   1. Binary Files
      1. The Basics
   2. PE Binary Format
      1. DOS/MZ Header
      2. PE Header
      3. File Header
      4. Optional Header
      5. Section Headers
      6. Imports
      7. Import Directory
      8. Import Descriptor
      9. Exports
      10. Resources
      11. Thread Local Storage (TLS)
      12. Relocations
   3. ELF Binary Format
      1. Headers
      2. ELF Header
      3. Program Header
      4. Section Header
      5. ELF Headers Analysis
      6. Imports & Exports
         1. Resolving Imports
      7. ELF vs PE
      8. Appendices
      9. Hands on: Finish all exercises in this module
3. Introduction to Static Analysis
   1. Introduction
   2. The Tools
   3. Identify Binary
   4. Imports
   5. Exports
   6. Strings
   7. Others
      1. File Entropy
      2. Packers
      3. Malicious Indicators
4. Understanding Instruction Set Architectures
   1. The Basics
   2. x86 & x64
      1. Workflow
      2. General Purpose Registers, Assignments
         1. radare2, gcc, main_x86
         2. radare2, Visual C++, main.exe (x86) - Debug Mode
         3. radare2, Visual C++, main.exe (x86) - Release Mode
         4. Fast Recap
         5. radare2, gcc, main_x86 - Stripping Symbols
         6. Extra Instructions for Assignments
         7. radare2, Visual C++, main.exe (x64) - Release Mode
      3. Arithmetics
      4. Control Flow (with IDA Pro)
         1. Some Nested Conditions (debugging with x64dbg)
         2. Some Mystery
      5. Stack Operations
      6. Functions
         1. Stack Frames
            1. Calling conventions, x86
      7. Final Thoughts
      8. Homework
5. Malware Analysis
   1. Adversary Tactics, Techniques, and Procedures
      1. Introduction
      2. Attack Taxonomy
         1. Cyber Kill Chain
         2. MITRE ATT&CK
      3. Defense in Depth
      4. MITRE ATT&CK
         1. Persistence
         2. Privilege Escalation
         3. Defense Evasion
         4. Credential Access
         5. Discovery
         6. Lateral Movement
         7. Execution
         8. Collection
         9. Exfiltration
         10. Command and Control
      5. Homework
      6. Hands on: Extracting Wannacry IOCs through Static Analysis
   2. Introduction to Dynamic Analysis
      1. Introduction
      2. The Tools
      3. Inspecting Processes
      4. Registry / File Changes
      5. DNS Resolution
      6. Monitor All the Things
      7. Ready to Use Solutions
      8. Homework
6. Introduction to non-Intel Architectures (by pancake)
   1. Introduction
   2. Spectre & Meltdown
   3. [CR]ISC
   4. Where are They?
   5. ARM
   6. MIPS
   7. PowerPC
   8. SPARC
   9. AVR
   10. Relative Code        
   11. Endianness
   12. Toolchains
   13. De-Compilers
   14. Manual Inspection
   15. Intermediate Languages
   16. ESIL
   17. Dynamic Analysis
   18. Process State
   19. Problem Solvers
7. Forensics from the Reverse Engineering Perspective (by pancake)
   1. Forensics?
   2. Acquisition
   3. Partitions & FileSystems
   4. SleuthKit
   5. RAM
   6. Volatility
   7. R2K
   8. Network
   9. Carving
   10. Yara
   11. Binwalk
   12. Visualization
   13. DataStructs;
   14. Searching
   15. Diffing Data
8. Vulnerability Research (by pancake)
   1. Bugs…
   2. I found a bug!
   3. Types of Bugs
   4. Techniques
   5. Dynamic Testing
   6. Fuzzing
   7. Classification
   8. Finding 1-days
   9. Healing bins
   10. CrashLogs
9. Introduction to unpacking using r2 (by zlowram, giomismo, newlog)
   1. Introduction
   2. Useful r2 commands for unpacking
   3. Techniques and samples
      1. Locky
      2. Dridex Dropper
      3. UPX #1
      4. UPX #2
      5. UPX #3
      6. Dealing with the IAT
      7. R2SCYLLA
10. Partial Exam, Final Exam, Recovery Exam
