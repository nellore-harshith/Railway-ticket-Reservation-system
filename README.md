╔════════════════════════════════════════════════════════════════════╗
║                                                                    ║
║                🚆 TRAIN RESERVATION SYSTEM 🚆                     ║
║                      (C++ OOP PROJECT)                             ║
║                                                                    ║
╚════════════════════════════════════════════════════════════════════╝


📌 PROJECT OVERVIEW
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

The Train Reservation System is a console-based application
developed using C++, Object-Oriented Programming (OOP),
and File Handling concepts.

This system allows users to:

   ✅ View Available Trains
   ✅ Reserve Train Tickets
   ✅ Search Train Details
   ✅ Check Seat Availability
   ✅ Cancel Reservations
   ✅ Store Reservation Data Using Files


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
✨ FEATURES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔐 Login Authentication
   • Username and Password Verification

🚉 View Available Trains
   • Train Number
   • Train Name
   • Destination
   • Charges
   • Available Seats
   • Departure Time

🎫 Ticket Reservation
   • Passenger Details Entry
   • Seat Booking
   • Fare Calculation
   • Ticket Generation

🔎 Train Search
   • Search Train by Train Number

❌ Cancel Reservation
   • Reservation Cancellation Option

💾 File Handling
   • Reservation details stored in:
     reservations.txt


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧠 OOP CONCEPTS USED
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✔ Classes
✔ Objects
✔ Constructors
✔ Encapsulation
✔ Abstraction

Classes Implemented:
   • Passenger
   • Train
   • TrainReservationSystem


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🏗️ CLASS DESCRIPTION
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

👤 Passenger Class
   Stores:
   • Passenger Name
   • Train Number
   • Seats Booked
   • Charges

🚆 Train Class
   Stores:
   • Train Number
   • Train Name
   • Destination
   • Ticket Price
   • Departure Time
   • Available Seats

🖥️ TrainReservationSystem Class
   Handles:
   • Login System
   • Ticket Reservation
   • Train Search
   • Reservation Storage
   • Menu Management


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📋 FUNCTIONALITIES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1️⃣ Login System

   Default Credentials:

      Username : user
      Password : pass


2️⃣ View Available Trains

   Displays all train details in tabular format.


3️⃣ Reserve Ticket

   ✔ Passenger Name Input
   ✔ Seat Booking
   ✔ Fare Calculation
   ✔ Ticket Printing
   ✔ Reservation Saving


4️⃣ Search Train

   ✔ Search train details using Train Number


5️⃣ Cancel Reservation

   ✔ Allows reservation cancellation


6️⃣ Seat Availability

   ✔ Checks available seats before booking


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🖼️ SAMPLE MENU
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

================ TRAIN RESERVATION SYSTEM ================

   1. Reserve Ticket
   2. View Available Trains
   3. Cancel Reservation
   4. Search Train
   5. Total Trains
   6. Exit


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
⚙️ TECHNOLOGIES USED
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

💻 C++
💻 Object-Oriented Programming (OOP)
💻 STL Vector
💻 File Handling
💻 Console Application


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
▶️ HOW TO RUN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔧 Compile:

   g++ Railway_Ticket_Reservation.cpp -o railway


▶️ Run:

   Windows:
      railway.exe

   Linux / Mac:
      ./railway


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📂 OUTPUT FILE
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Reservation details are stored in:

   reservations.txt


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🚀 FUTURE ENHANCEMENTS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ User Registration System
✅ Admin Dashboard
✅ PNR Generation
✅ Online Payment Integration
✅ Database Connectivity
✅ Password Encryption
✅ GUI-Based Application
✅ Real-Time Seat Tracking
✅ Dynamic Train Scheduling


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🌟 ADVANTAGES OF THE PROJECT
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✔ Beginner-Friendly
✔ Easy to Understand
✔ Real-World Application Logic
✔ Demonstrates OOP Concepts
✔ Uses File Handling
✔ ATS-Friendly Academic Project


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 LEARNING OUTCOMES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✔ Object-Oriented Programming
✔ File Handling
✔ Class & Object Design
✔ Menu-Driven Programming
✔ STL Vector Usage


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📌 CONCLUSION
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

The Train Reservation System is an efficient
console-based application developed using
C++ and Object-Oriented Programming concepts.

It provides a simple and organized way to manage
train ticket reservations while demonstrating
core programming fundamentals and software
design concepts.                           
