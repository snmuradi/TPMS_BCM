# 🚗 TPMS and BCM for Zonal Architecture

## 📘 Project Overview
This project demonstrates the integration of a **Tire Pressure Monitoring System (TPMS)** and a **Body Control Module (BCM)** using **Zonal Architecture**.  
The system uses **potentiometers** to simulate tire pressure values and a **rain sensor** to control the wiper system. A **CLCD display** shows real-time tire pressure readings, and **LEDs** indicate the alert status based on defined thresholds.

---

## 🛠️ Technologies Used
- Arduino & Arduino IDE  
- Potentiometers (to simulate tire pressure sensors)  
- Rain Sensor (for automatic wiper control)  
- DC Motor (for wiper mechanism)  
- LEDs (for alert indication)  
- CLCD Display (to show tire pressure values and system status)  
- Tinkercad (for simulation and prototyping)  
- Simulink (for modeling zonal architecture)

---

## ⚙️ Working Principle
- **TPMS Functionality:**  
  Each potentiometer represents a tire. When the value drops below a set threshold, an LED glows to indicate low pressure.  
  The CLCD continuously displays the pressure of all four tires — Tire1, Tire2, Tire3, and Tire4.

- **BCM Functionality:**  
  The rain sensor detects rainfall. When water is detected, it sends a signal to Arduino, which activates the wiper motor automatically.

- **Zonal Architecture Concept:**  
  All sensors and actuators are grouped by vehicle zones, improving communication efficiency and reducing wiring complexity.

---

## 💡 Key Features
- Real-time tire pressure monitoring using potentiometers.  
- Automatic wiper control through a rain sensor.  
- Visual alerts using LEDs and display updates on CLCD.  
- Simulation of zonal communication between TPMS and BCM.  
- Compact and modular design suitable for automotive systems.

---

## 🚧 Key Challenges
- Adjusting potentiometers to give correct simulated tire pressure values.  
- Interfacing the rain sensor to control the wiper motor correctly.  
- Displaying tire1, tire2, tire3, and tire4 values accurately on the CLCD.  
- Ensuring LEDs show correct alerts according to pressure thresholds.  
- Coordinating multiple components (potentiometers, CLCD, LEDs, and motor) smoothly.  

---

## 🎯 Learnings
- Learned to design LED and wiper logic based on sensor readings.  
- Gained experience connecting and managing sensors, LEDs, motor, and CLCD together on Arduino.  
- Learned to display real-time tire pressure values on a CLCD.  
- Gained understanding of zonal architecture in automotive systems.  
- Improved debugging and integration skills in embedded systems.  

---

## 🧩 Future Improvements
- Add wireless sensors for real-time tire pressure data transmission.  
- Display data on a mobile app or IoT dashboard.  
- Implement advanced BCM features like automatic headlights and door locking.  
- Use CAN communication for zonal data exchange.

---

## 👨‍💻 Team Members
- **Sharookh Najeersab Muradi**  
  B.Tech in Electronics and Communication Engineering  
  Gitam University, Bengaluru  

---

## 🖼️ Simulation Tools
- **Tinkercad** – For hardware prototyping and circuit simulation.  
- **Simulink** – For modeling the TPMS and BCM systems under zonal architecture.  

---

## 🧠 Conclusion
This project successfully demonstrates how TPMS and BCM can be integrated using zonal architecture principles. It provides a cost-effective prototype to understand modern automotive systems where sensors and actuators communicate efficiently through zonal gateways.
