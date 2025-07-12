# 🚗 AI Hand Gesture & Voice-Controlled Car

An innovative project that enables users to control a car using **hand gestures** and **voice commands**. Built using **AIvision chip**, **Arduino**, **motor driver shield**, and sensors, this system offers a safer, smarter, and hands-free driving experience.

🎥 **[Demo Videos, Images & App APK](https://drive.google.com/drive/folders/1BhgPoulAz7VHCXlRnRePehTwXcGEOCQd?usp=sharing)**

---

## 🧠 **Features**

- 🤚 Control car using **AI-trained hand gestures**
- 🎤 Control actions using **voice commands**
- 📲 Android App APK included for wireless voice control via Bluetooth
- ⚙️ Arduino-based motor driving interface
- 📡 Real-time gesture and voice command execution

---

## 🛠️ **Tech Stack**

| Layer               | Technologies Used                                            |
|---------------------|--------------------------------------------------------------|
| **Hardware**        | Arduino Uno, Motors, AIvision Chip, Sensors (Mic, IR, Ultrasonic) |
| **Software Platform** | Python, Arduino IDE, AIvision Training App                 |
| **Gesture Recognition** | AIvision Chip (Trained via [AIvision App](https://share.google/xSS5tZHW8Nfxlqbyy)) |
| **Voice Recognition**  | Arduino IDE (voice recognition code – available in repo)   |
| **Communication**      | HC-05 Bluetooth Module, Serial Communication               |
| **Interface**          | Android APK, Command Line / Audio Feedback                 |

---

## 📸 **Demo & APK**

- 🎬 **[Demo Videos, Images & App APK](https://drive.google.com/drive/folders/1BhgPoulAz7VHCXlRnRePehTwXcGEOCQd?usp=sharing)**  
- 📱 Download and install the **Android app** from the folder above to control the car via voice commands wirelessly.

---

## 🔌 **Circuit Diagram**

Here is the full connection diagram for our Voice-Controlled Car:

![Circuit Diagram](https://raw.githubusercontent.com/MandarSalvi03/Hand_and_Voice_Gesture_Car/main/assets/obstacle%20avoidance%20control%20robot.jpg)

And here is the **actual view of the internal structure** with the AIvision chip and Arduino Uno:

![inside_structure](https://github.com/user-attachments/assets/82ae7791-ecf6-45a0-b44b-82187e715c76)

> 📎 *Ensure proper voltage conversion for HC-05 using 1K & 2K resistors (5V to 3.3V logic level).*

---

## ✋ **Hand Gesture Control (AIvision Chip)**

- We used the **AIvision Chip** to train and detect hand gestures.
- Training was done using the official **AIvision App**:  
  🔗 [AIvision Training App](https://share.google/xSS5tZHW8Nfxlqbyy)
- The AI chip is integrated into the car and connected to motors for real-time gesture-controlled movement.

---

## 🎤 **Voice Control (Arduino IDE)**

- Voice commands were trained using the **Arduino IDE** and respective voice recognition modules.
- The trained code is available in this repo under `voice_control/arduino_code.ino`
- Common commands include:
  - `"Forward"`, `"Stop"`, `"Left"`, `"Right"`, `"Open-Door"`
  - Custom trigger words can also be trained and updated in the code

---

## 🎯 **Objectives**

- Provide safer, hands-free control for driving robots or cars
- Make driving accessible through voice/gesture interfaces
- Enhance learning in AI, robotics, and embedded systems
- Bridge AI theory with hardware implementation

---

## 🔄 **Future Scope**

- Expand gesture vocabulary and add contextual commands
- Integrate with GPS for auto-navigation
- Cloud-sync gesture logs and performance stats
- Add multilingual support in voice commands
- Real-time mobile dashboard for feedback

---

## 📚 **References**

- Smith, J., & Johnson, A. (2020). Gesture recognition for autonomous vehicles.
- Brown, L., & Williams, M. (2019). AI hand gesture control: A review.
- Timsina, A., Sharma, D. C., Sharma, N. (2021). Real-time gesture-based control.

---

## 🙌 **Authors**

- Rajvardhan Rajendra Patil  
- Kiran Lala Rajage  
- Sujit Arun Raut  
- Mandar Unmesh Salvi  

📍 *Department of Artificial Intelligence and Data Science*  
Datta Meghe College of Engineering, Airoli – Navi Mumbai  
Academic Year: 2023–2024

---

## 📝 **How to Run**

```bash
git clone https://github.com/MandarSalvi03/Hand_and_Voice_Gesture_Car.git
cd Hand_and_Voice_Gesture_Car
