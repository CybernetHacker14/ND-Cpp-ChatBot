# ND-Cpp-ChatBot
### *A ChatBot application which uses wxWdigets and C++*

***

<ins>**Description:**</ins>

A Memory-Management Chatbot application which uses **C++17** and **wxWidgets** to display information in a graphical application using user input as keywords.
This project is my submission for the [Udacity Project](https://github.com/udacity/CppND-Memory-Management-Chatbot) which requires writing C++ code for efficient usage of stack and heap memory, implementatation of memeory management techniques usch as Rule of Five, usage of smart pointers, etc. to optimize the performance of the Chatbot application.  

This project uses the [wxWidgets](https://www.wxwidgets.org/) library, which is a cross-platfrom GUI library.

Instructions:
- Clone this project using `git clone https://github.com/CybernetHacker14/ND-Cpp-ChatBot`
- Download the [wxWidgets Header Files](https://github.com/wxWidgets/wxWidgets/releases/download/v3.1.4/wxWidgets-3.1.4-headers.7z)
- Download the [wxWidgets Windows Development Binaries](https://github.com/wxWidgets/wxWidgets/releases/download/v3.1.4/wxMSW-3.1.4_vc14x_x64_Dev.7z)
- Extract the files from both the downloaded archives in `thirdparty/wxwidgets` folder.
- Inside the cloned repo folder, make a folder named `_solutiondir` which exists at the directory level of the `CMakeLists.txt` file.
- Open a Powershell window inside the `_solutiondir` folder and execute the command `cmake ..` which will generate Visual Studio project and solution files.
- On running the application inside Visual Studio, the application will crash, hence to make it work, copy the `.dll` files inside the `bin` folder to the output directory - where the `.exe` file exists.